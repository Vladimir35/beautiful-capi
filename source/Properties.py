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


import copy
from Parser import TClass, TMethod, TArgument, TNamespace, TBeautifulCapiRoot


class PropertiesDefaultValues(object):
    def __init__(self):
        self.set_prefix_value = 'Set'
        self.get_prefix_value = 'Get'
        self.get_const_value = True


class PropertiesProcessor(object):
    def __init__(self, root_node: TBeautifulCapiRoot):
        self.root_node = root_node
        self.properties_stack = [PropertiesDefaultValues()]

    def process_class(self, cur_class: TClass):
        top = self.properties_stack.pop()
        for cur_property in cur_class.properties:
            cur_set_prefix = cur_property.set_prefix if cur_property.set_prefix_filled else top.set_prefix_value
            cur_get_prefix = cur_property.get_prefix if cur_property.get_prefix_filled else top.get_prefix_value
            cur_get_const = cur_property.get_const if cur_property.get_const_filled else top.get_const_value
            new_get_method = TMethod()
            new_get_method.name = cur_get_prefix + cur_property.name
            new_get_method.const = cur_get_const
            new_get_method.return_type = cur_property.type_name
            cur_class.methods.append(new_get_method)
            new_set_method = TMethod()
            new_set_method.name = cur_set_prefix + cur_property.name
            set_input_argument = TArgument()
            set_input_argument.name = 'value'
            set_input_argument.type_name = cur_property.type_name
            new_set_method.arguments.append(set_input_argument)
            cur_class.methods.append(new_set_method)
        self.properties_stack.append(top)

    def process_namespace(self, namespace: TNamespace):
        top = self.properties_stack.pop()
        self.properties_stack.append(top)
        top = copy.deepcopy(top)
        for cur_set_prefix in namespace.property_set_prefixes:
            top.set_prefix_value = cur_set_prefix.value
        for cur_get_prefix in namespace.property_get_prefixes:
            top.get_prefix_value = cur_get_prefix.value
        for cur_get_const in namespace.property_get_consts:
            top.get_const_value = cur_get_const.value
        self.properties_stack.append(top)
        for nested_namespace in namespace.namespaces:
            self.process_namespace(nested_namespace)
        for cur_class in namespace.classes:
            self.process_class(cur_class)
        self.properties_stack.pop()

    def process(self):
        for cur_namespace in self.root_node.namespaces:
            self.process_namespace(cur_namespace)


def process(root_node: TBeautifulCapiRoot):
    properties_processor = PropertiesProcessor(root_node)
    properties_processor.process()