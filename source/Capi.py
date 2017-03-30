#!/usr/bin/env python
#
# Beautiful Capi generates beautiful C API wrappers for your C++ classes
# Copyright (C) 2015 Petr Petrovich Petrov
#
# This file is part of Beautiful Capi.
#
# Beautiful Capi is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Beautiful Capi is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Beautiful Capi.  If not, see <http://www.gnu.org/licenses/>.
#

import os
import shutil
import argparse
from xml.dom.minidom import parse

import ExceptionTraits
from Helpers import BeautifulCapiException, format_type
from CreateGenerators import create_namespace_generators
from FileCache import FileCache
from CapiGenerator import CapiGenerator
from FileGenerator import FileGenerator, Indent, IndentScope, Unindent, WatchdogScope, IfDefScope
from Templates import process as process_templates
from Callbacks import process as process_callbacks
from Properties import process as process_properties
from ExtensionSemantic import process as process_extansion_semantic
from CheckBinaryCompatibilityGenerator import process as process_check_binary_compatibility
from ParamsParser import TBeautifulCapiParams, TExceptionHandlingMode, load
from ParseRoot import parse_root
from UnitTestGenerator import TestGenerator
from OverloadSuffixes import process as process_overload_suffixes


class Capi(object):
    def __init__(self,
                 input_filename,
                 input_params_filename,
                 output_folder,
                 output_wrap_file_name,
                 internal_snippets_folder,
                 api_keys_folder,
                 clean,
                 unit_tests_file
                 ):
        self.input_xml = input_filename
        self.input_params = parse(input_params_filename)
        self.output_folder = output_folder
        self.output_wrap_file_name = output_wrap_file_name
        self.internal_snippets_folder = internal_snippets_folder
        self.api_keys_folder = api_keys_folder
        self.api_description = None
        self.params_description = None
        self.unit_tests_file = unit_tests_file
        if clean:
            if os.path.exists(self.output_folder):
                shutil.rmtree(self.output_folder)
            if os.path.exists(self.internal_snippets_folder):
                shutil.rmtree(self.internal_snippets_folder)

        self.unit_tests_generator = None

    def __substitute_project_name(self, params: TBeautifulCapiParams):
        if not self.api_description.project_name:
            raise BeautifulCapiException('project_name parameter is not specified')
        params.check_and_throw_exception_filename = params.check_and_throw_exception_filename.format(
            project_name=self.api_description.project_name
        )
        params.beautiful_capi_namespace = params.beautiful_capi_namespace.format(
            project_name=self.api_description.project_name)
        autogen_prefix_template = params.autogen_prefix_for_internal_implementation
        params.autogen_prefix_for_internal_implementation = autogen_prefix_template.format(
            project_name=self.api_description.project_name)
        params.root_header = params.root_header.format(
            project_name=self.api_description.project_name)

    def __generate_root_initializer(self, out: FileGenerator, namespace_generators: []):
        out.put_line('class {0}'.format(self.params_description.root_header_initializer))
        with IndentScope(out, '};'):
            member_names = []
            for namespace_generator in namespace_generators:
                member_name = namespace_generator.wrap_name.lower() + '_module_init'
                out.put_line('{namespace}::Initialization {member};'.format(
                    namespace=namespace_generator.wrap_name,
                    member=member_name))
                member_names.append(member_name)
            out.put_line('')
            if not self.params_description.shared_library_name:
                out.put_line('{0}();'.format(self.params_description.root_header_initializer))
            with Unindent(out):
                out.put_line('public:')
            if member_names:
                with IfDefScope(out, '{0}_LIBRARY_USE_DYNAMIC_LOADER'.format(
                        self.api_description.project_name.upper()), False):
                    out.put_line('{0}(const char* shared_library_name) :'.format(
                        self.params_description.root_header_initializer))
                    with Indent(out):
                        for member_name in member_names[:-1]:
                            out.put_line('{member_name}(shared_library_name),'.format(member_name=member_name))
                        out.put_line('{member_name}(shared_library_name)'.format(member_name=member_names[-1]))
                    with IndentScope(out):
                        pass
                if self.params_description.shared_library_name:
                    out.put_line('{0}()'.format(self.params_description.root_header_initializer))
                    with IndentScope(out):
                        pass

    def __generate_root_header(self, namespace_generators: [], file_cache: FileCache):
        if self.params_description.root_header and self.api_description.project_name:
            root_header = FileGenerator(os.path.join(self.output_folder, self.params_description.root_header))
            root_header.put_begin_cpp_comments(self.params_description)
            with WatchdogScope(root_header, self.api_description.project_name.upper() + '_LIBRARY_ROOT_INCLUDED'):
                with IfDefScope(root_header, '{0}_LIBRARY_USE_DYNAMIC_LOADER'.format(
                        self.api_description.project_name.upper()), False):
                    for namespace_generator in namespace_generators:
                        root_header.put_line('#define {0}_CAPI_USE_DYNAMIC_LOADER'.format(
                            namespace_generator.wrap_name.upper()))
                root_header.put_line('')

                with IfDefScope(root_header, '{0}_LIBRARY_DEFINE_FUNCTION_POINTERS'.format(
                        self.api_description.project_name.upper()), False):
                    for namespace_generator in namespace_generators:
                        root_header.put_line('#define {0}_CAPI_DEFINE_FUNCTION_POINTERS'.format(
                            namespace_generator.wrap_name.upper()))
                root_header.put_line('')

                root_header.put_include_files(False)
                for namespace_generator in namespace_generators:
                    root_header.include_user_header(file_cache.namespace_header(namespace_generator.full_name_array))
                if self.params_description.root_header_initializer:
                    root_header.put_line('')
                    with IfDefScope(root_header, '__cplusplus'):
                        if self.params_description.root_header_namespace:
                            root_header.put_line('namespace {0}'.format(self.params_description.root_header_namespace))
                            with IndentScope(root_header):
                                self.__generate_root_initializer(root_header, namespace_generators)
                        else:
                            self.__generate_root_initializer(root_header, namespace_generators)

    @staticmethod
    def __substitute_implementation_class_name(namespace):
        for sub_namespace in namespace.namespaces:
            Capi.__substitute_implementation_class_name(sub_namespace)
        for cur_class in namespace.classes:
            cur_class.implementation_class_name = format_type(cur_class.implementation_class_name)

    def __generate(self):
        process_check_binary_compatibility(self.api_description, self.params_description)
        process_properties(self.api_description, self.unit_tests_generator)
        process_overload_suffixes(self.api_description)
        process_templates(self.api_description)
        process_extansion_semantic(self.api_description)
        first_namespace_generators = create_namespace_generators(
            self.api_description, self.params_description)
        process_callbacks(first_namespace_generators)
        for namespace in self.api_description.namespaces:
            Capi.__substitute_implementation_class_name(namespace)
        namespace_generators = create_namespace_generators(
            self.api_description, self.params_description)
        by_first_argument_exception_traits = ExceptionTraits.ByFirstArgument(
            self.params_description, namespace_generators)
        no_handling_exception_traits = ExceptionTraits.NoHandling()
        if self.params_description.exception_handling_mode == TExceptionHandlingMode.by_first_argument:
            main_exception_traits = by_first_argument_exception_traits
        else:
            main_exception_traits = no_handling_exception_traits
        capi_generator = CapiGenerator(main_exception_traits, no_handling_exception_traits,
                                       self.params_description, self.api_description)
        file_cache = FileCache(self.params_description)
        for namespace_generator in namespace_generators:
            namespace_generator.generate(file_cache, capi_generator)
        capi_generator.generate(file_cache)
        self.__generate_root_header(namespace_generators, file_cache)

        if self.unit_tests_generator:
            self.unit_tests_generator.generate(namespace_generators)

    def generate(self):
        self.params_description = load(self.input_params)
        self.params_description.output_folder = self.output_folder
        self.params_description.internal_snippets_folder = self.internal_snippets_folder
        self.params_description.api_keys_folder = self.api_keys_folder
        self.params_description.output_wrap_file_name = self.output_wrap_file_name
        self.api_description = parse_root(self.input_xml)
        self.__substitute_project_name(self.params_description)

        if self.unit_tests_file:
            self.unit_tests_generator = TestGenerator(self.params_description, self.unit_tests_file)

        self.__generate()


def main():
    print(
        'Beautiful Capi  Copyright (C) 2015  Petr Petrovich Petrov\n'
        'This program comes with ABSOLUTELY NO WARRANTY;\n'
        'This is free software, and you are welcome to redistribute it\n'
        'under certain conditions.\n')

    parser = argparse.ArgumentParser(
        prog='Beautiful Capi',
        description='This program generates C and C++ wrappers for your C++ classes.')

    parser.add_argument(
        '-i', '--input', nargs=None, default='input.xml', dest='input',
        help='specifies input API description file')
    parser.add_argument(
        '-p', '--params', nargs=None, default='params.xml', dest='params',
        help='specifies wrapper generation parameters input file')
    parser.add_argument(
        '-o', '--output-folder', nargs=None, default='./output', dest='output_folder',
        help='specifies output folder for generated files')
    parser.add_argument(
        '-w', '--output-wrap-file-name', nargs=None, default='./capi_wrappers.cpp', dest='output_wrap',
        help='specifies output file name for wrapper C-functions')
    parser.add_argument(
        '-s', '--internal-snippets-folder', nargs=None, default='./internal_snippets', dest='output_snippets',
        help='specifies output folder for generated library snippets')
    parser.add_argument(
        '-k', '--api-keys-folder', nargs=None, default='./keys', dest='api_keys_folder',
        help='specifies output folder for generated API keys')
    parser.add_argument('-c', '--clean', dest='clean', action='store_true',
                        help='cleans input and snippets directories')
    parser.set_defaults(clean=False)
    parser.add_argument('-t', '--tests-file', nargs=None, default="", dest='unit_tests_file',
                        help='generates unit tests for properties into specified file')

    args = parser.parse_args()

    capi = Capi(
        args.input,
        args.params,
        args.output_folder,
        args.output_wrap,
        args.output_snippets,
        args.api_keys_folder,
        args.clean,
        args.unit_tests_file
    )
    capi.generate()

if __name__ == '__main__':
    main()
