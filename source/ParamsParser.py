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


#
# WARNING: This file was automatically generated by Xsd2Python3.py program!
# Do not edit this file! Please edit the source XSD schema.
#


from enum import Enum


def string_to_bool(string_value):
    return string_value.lower() in ["true", "on", "yes", "1"]


class TExceptionHandlingMode(Enum):
    no_handling = 0
    by_first_argument = 1

    @staticmethod
    def load(value):
        if value == "no_handling":
            return TExceptionHandlingMode.no_handling
        if value == "by_first_argument":
            return TExceptionHandlingMode.by_first_argument
        raise ValueError


class TBeautifulCapiParams(object):
    def __init__(self):
        self.folder_per_namespace = True
        self.folder_per_namespace_filled = False
        self.file_per_class = True
        self.file_per_class_filled = False
        self.namespace_header_at_parent_folder = True
        self.namespace_header_at_parent_folder_filled = False
        self.generate_single_file = False
        self.generate_single_file_filled = False
        self.single_header_name = "Output.h"
        self.single_header_name_filled = False
        self.dynamically_load_functions = False
        self.dynamically_load_functions_filled = False
        self.capi_header_suffix = "Capi"
        self.capi_header_suffix_filled = False
        self.fwd_header_suffix = "Fwd"
        self.fwd_header_suffix_filled = False
        self.wrapper_class_suffix_copy_semantic = ""
        self.wrapper_class_suffix_copy_semantic_filled = False
        self.wrapper_class_suffix_reference_counted = "Ptr"
        self.wrapper_class_suffix_reference_counted_filled = False
        self.wrapper_class_suffix_raw_pointer = "RawPtr"
        self.wrapper_class_suffix_raw_pointer_filled = False
        self.forward_typedef_suffix = "FwdPtr"
        self.forward_typedef_suffix_filled = False
        self.is_null_method = "IsNull"
        self.is_null_method_filled = False
        self.is_not_null_method = "IsNotNull"
        self.is_not_null_method_filled = False
        self.delete_method = "Delete"
        self.delete_method_filled = False
        self.forward_holder_filename = "beautiful_capi/forward_holder.h"
        self.forward_holder_filename_filled = False
        self.check_and_throw_exception_filename = "beautiful_capi/check_and_throw_exception.h"
        self.check_and_throw_exception_filename_filled = False
        self.exception_handling_mode = TExceptionHandlingMode.no_handling
        self.exception_handling_mode_filled = False
        self.custom_callbacks_filename = "beautiful_capi/custom_callbacks.h"
        self.custom_callbacks_filename_filled = False
        self.copyright_header = ""
        self.copyright_header_filled = False
        self.automatic_generated_warning = ""
        self.automatic_generated_warning_filled = False
    
    def load(self, dom_node):
        for element in [node for node in dom_node.childNodes if node.nodeName == "copyright_header"]:
            for text in [text for text in element.childNodes if text.nodeType == text.TEXT_NODE]:
                self.copyright_header += text.nodeValue
        for element in [node for node in dom_node.childNodes if node.nodeName == "automatic_generated_warning"]:
            for text in [text for text in element.childNodes if text.nodeType == text.TEXT_NODE]:
                self.automatic_generated_warning += text.nodeValue
        if dom_node.hasAttribute("folder_per_namespace"):
            cur_attr = dom_node.getAttribute("folder_per_namespace")
            self.folder_per_namespace = string_to_bool(cur_attr)
            self.folder_per_namespace_filled = True
        if dom_node.hasAttribute("file_per_class"):
            cur_attr = dom_node.getAttribute("file_per_class")
            self.file_per_class = string_to_bool(cur_attr)
            self.file_per_class_filled = True
        if dom_node.hasAttribute("namespace_header_at_parent_folder"):
            cur_attr = dom_node.getAttribute("namespace_header_at_parent_folder")
            self.namespace_header_at_parent_folder = string_to_bool(cur_attr)
            self.namespace_header_at_parent_folder_filled = True
        if dom_node.hasAttribute("generate_single_file"):
            cur_attr = dom_node.getAttribute("generate_single_file")
            self.generate_single_file = string_to_bool(cur_attr)
            self.generate_single_file_filled = True
        if dom_node.hasAttribute("single_header_name"):
            cur_attr = dom_node.getAttribute("single_header_name")
            self.single_header_name = cur_attr
            self.single_header_name_filled = True
        if dom_node.hasAttribute("dynamically_load_functions"):
            cur_attr = dom_node.getAttribute("dynamically_load_functions")
            self.dynamically_load_functions = string_to_bool(cur_attr)
            self.dynamically_load_functions_filled = True
        if dom_node.hasAttribute("capi_header_suffix"):
            cur_attr = dom_node.getAttribute("capi_header_suffix")
            self.capi_header_suffix = cur_attr
            self.capi_header_suffix_filled = True
        if dom_node.hasAttribute("fwd_header_suffix"):
            cur_attr = dom_node.getAttribute("fwd_header_suffix")
            self.fwd_header_suffix = cur_attr
            self.fwd_header_suffix_filled = True
        if dom_node.hasAttribute("wrapper_class_suffix_copy_semantic"):
            cur_attr = dom_node.getAttribute("wrapper_class_suffix_copy_semantic")
            self.wrapper_class_suffix_copy_semantic = cur_attr
            self.wrapper_class_suffix_copy_semantic_filled = True
        if dom_node.hasAttribute("wrapper_class_suffix_reference_counted"):
            cur_attr = dom_node.getAttribute("wrapper_class_suffix_reference_counted")
            self.wrapper_class_suffix_reference_counted = cur_attr
            self.wrapper_class_suffix_reference_counted_filled = True
        if dom_node.hasAttribute("wrapper_class_suffix_raw_pointer"):
            cur_attr = dom_node.getAttribute("wrapper_class_suffix_raw_pointer")
            self.wrapper_class_suffix_raw_pointer = cur_attr
            self.wrapper_class_suffix_raw_pointer_filled = True
        if dom_node.hasAttribute("forward_typedef_suffix"):
            cur_attr = dom_node.getAttribute("forward_typedef_suffix")
            self.forward_typedef_suffix = cur_attr
            self.forward_typedef_suffix_filled = True
        if dom_node.hasAttribute("is_null_method"):
            cur_attr = dom_node.getAttribute("is_null_method")
            self.is_null_method = cur_attr
            self.is_null_method_filled = True
        if dom_node.hasAttribute("is_not_null_method"):
            cur_attr = dom_node.getAttribute("is_not_null_method")
            self.is_not_null_method = cur_attr
            self.is_not_null_method_filled = True
        if dom_node.hasAttribute("delete_method"):
            cur_attr = dom_node.getAttribute("delete_method")
            self.delete_method = cur_attr
            self.delete_method_filled = True
        if dom_node.hasAttribute("forward_holder_filename"):
            cur_attr = dom_node.getAttribute("forward_holder_filename")
            self.forward_holder_filename = cur_attr
            self.forward_holder_filename_filled = True
        if dom_node.hasAttribute("check_and_throw_exception_filename"):
            cur_attr = dom_node.getAttribute("check_and_throw_exception_filename")
            self.check_and_throw_exception_filename = cur_attr
            self.check_and_throw_exception_filename_filled = True
        if dom_node.hasAttribute("exception_handling_mode"):
            cur_attr = dom_node.getAttribute("exception_handling_mode")
            self.exception_handling_mode = TExceptionHandlingMode.load(cur_attr)
            self.exception_handling_mode_filled = True
        if dom_node.hasAttribute("custom_callbacks_filename"):
            cur_attr = dom_node.getAttribute("custom_callbacks_filename")
            self.custom_callbacks_filename = cur_attr
            self.custom_callbacks_filename_filled = True
    

def load(dom_node):
    for root_element in [root for root in dom_node.childNodes if root.localName == "params"]:
        root_params = TBeautifulCapiParams()
        root_params.load(root_element)
        return root_params
