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


class TLifecycle(Enum):
    copy_semantic = 0
    move_semantic = 1
    reference_counted = 2

    @staticmethod
    def load(value):
        if value == "copy_semantic":
            return TLifecycle.copy_semantic
        if value == "move_semantic":
            return TLifecycle.move_semantic
        if value == "reference_counted":
            return TLifecycle.reference_counted
        raise ValueError


class TBeautifulCapiRoot(object):
    def __init__(self):
        self.m_namespaces = []
    
    def load(self, dom_node):
        for element in [node for node in dom_node.childNodes if node.nodeName == "namespace"]:
            new_element = TNamespace()
            new_element.load(element)
            self.m_namespaces.append(new_element)
    

class TNamespace(object):
    def __init__(self):
        self.m_name = ""
        self.m_implementation_header = ""
        self.m_namespaces = []
        self.m_classes = []
        self.m_functions = []
        self.m_factory_functions = []
    
    def load(self, dom_node):
        for element in [node for node in dom_node.childNodes if node.nodeName == "namespace"]:
            new_element = TNamespace()
            new_element.load(element)
            self.m_namespaces.append(new_element)
        for element in [node for node in dom_node.childNodes if node.nodeName == "class"]:
            new_element = TClass()
            new_element.load(element)
            self.m_classes.append(new_element)
        for element in [node for node in dom_node.childNodes if node.nodeName == "function"]:
            new_element = TMethod()
            new_element.load(element)
            self.m_functions.append(new_element)
        for element in [node for node in dom_node.childNodes if node.nodeName == "factory_function"]:
            new_element = TFactory()
            new_element.load(element)
            self.m_factory_functions.append(new_element)
        if dom_node.hasAttribute("name"):
            cur_attr = dom_node.getAttribute("name")
            self.m_name = cur_attr
        if dom_node.hasAttribute("implementation_header"):
            cur_attr = dom_node.getAttribute("implementation_header")
            self.m_implementation_header = cur_attr
    

class TClass(object):
    def __init__(self):
        self.m_name = ""
        self.m_base = ""
        self.m_implementation_class_name = ""
        self.m_implementation_class_header = ""
        self.m_lifecycle = TLifecycle.reference_counted
        self.m_requires_cast_to_base = True
        self.m_constructors = []
        self.m_methods = []
    
    def load(self, dom_node):
        for element in [node for node in dom_node.childNodes if node.nodeName == "constructor"]:
            new_element = TConstructor()
            new_element.load(element)
            self.m_constructors.append(new_element)
        for element in [node for node in dom_node.childNodes if node.nodeName == "method"]:
            new_element = TMethod()
            new_element.load(element)
            self.m_methods.append(new_element)
        if dom_node.hasAttribute("name"):
            cur_attr = dom_node.getAttribute("name")
            self.m_name = cur_attr
        if dom_node.hasAttribute("base"):
            cur_attr = dom_node.getAttribute("base")
            self.m_base = cur_attr
        if dom_node.hasAttribute("implementation_class_name"):
            cur_attr = dom_node.getAttribute("implementation_class_name")
            self.m_implementation_class_name = cur_attr
        if dom_node.hasAttribute("implementation_class_header"):
            cur_attr = dom_node.getAttribute("implementation_class_header")
            self.m_implementation_class_header = cur_attr
        if dom_node.hasAttribute("lifecycle"):
            cur_attr = dom_node.getAttribute("lifecycle")
            self.m_lifecycle = TLifecycle.load(cur_attr)
        if dom_node.hasAttribute("requires_cast_to_base"):
            cur_attr = dom_node.getAttribute("requires_cast_to_base")
            self.m_requires_cast_to_base = string_to_bool(cur_attr)
    

class TConstructor(object):
    def __init__(self):
        self.m_name = ""
        self.m_arguments = []
    
    def load(self, dom_node):
        for element in [node for node in dom_node.childNodes if node.nodeName == "argument"]:
            new_element = TArgument()
            new_element.load(element)
            self.m_arguments.append(new_element)
        if dom_node.hasAttribute("name"):
            cur_attr = dom_node.getAttribute("name")
            self.m_name = cur_attr
    

class TMethod(TConstructor):
    def __init__(self):
        super().__init__()
        self.m_return = ""
    
    def load(self, dom_node):
        super().load(dom_node)
        if dom_node.hasAttribute("return"):
            cur_attr = dom_node.getAttribute("return")
            self.m_return = cur_attr
    

class TFactory(TConstructor):
    def __init__(self):
        super().__init__()
        self.m_implementation_name = ""
        self.m_return = ""
        self.m_implementation_header = ""
    
    def load(self, dom_node):
        super().load(dom_node)
        if dom_node.hasAttribute("implementation_name"):
            cur_attr = dom_node.getAttribute("implementation_name")
            self.m_implementation_name = cur_attr
        if dom_node.hasAttribute("return"):
            cur_attr = dom_node.getAttribute("return")
            self.m_return = cur_attr
        if dom_node.hasAttribute("implementation_header"):
            cur_attr = dom_node.getAttribute("implementation_header")
            self.m_implementation_header = cur_attr
    

class TArgument(object):
    def __init__(self):
        self.m_name = ""
        self.m_type = ""
    
    def load(self, dom_node):
        if dom_node.hasAttribute("name"):
            cur_attr = dom_node.getAttribute("name")
            self.m_name = cur_attr
        if dom_node.hasAttribute("type"):
            cur_attr = dom_node.getAttribute("type")
            self.m_type = cur_attr
    

def load(dom_node):
    for root_element in [root for root in dom_node.childNodes if root.localName == "api"]:
        root_params = TBeautifulCapiRoot()
        root_params.load(root_element)
        return root_params