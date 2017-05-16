/*
 * Beautiful Capi generates beautiful C API wrappers for your C++ classes
 * Copyright (C) 2015 Petr Petrovich Petrov
 *
 * This file is part of Beautiful Capi.
 *
 * Beautiful Capi is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Beautiful Capi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Beautiful Capi.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/*
 * WARNING: This file was automatically generated by Beautiful Capi!
 * Do not edit this file! Please edit the source API description.
 */

#ifndef COMPONENTS_COMPONENTA_DEFINITION_INCLUDED
#define COMPONENTS_COMPONENTA_DEFINITION_INCLUDED

#include "Components/ComponentADecl.h"
#include "Classes/ClassA.h"
#include "Classes/ClassB.h"
#include "Classes/ClassC.h"

#ifdef __cplusplus

inline Components::ComponentA::ComponentA()
{
    SetObject(components_component_a_default());
}

inline Classes::ClassA Components::ComponentA::GetA() const
{
    return Classes::ClassA(Classes::ClassA::force_creating_from_raw_pointer, components_component_a_get_a_const(GetRawPointer()), false);
}

inline void Components::ComponentA::SetA(const Classes::ClassA& a)
{
    components_component_a_set_a(GetRawPointer(), a.GetRawPtr());
}

inline Classes::ClassBRawPtr Components::ComponentA::GetB() const
{
    return Classes::ClassBRawPtr(Classes::ClassBRawPtr::force_creating_from_raw_pointer, components_component_a_get_b_const(GetRawPointer()), false);
}

inline void Components::ComponentA::SetB(const Classes::ClassBRawPtr& b)
{
    components_component_a_set_b(GetRawPointer(), b.GetRawPtr());
}

inline Classes::ClassCPtr Components::ComponentA::GetC() const
{
    return Classes::ClassCPtr(Classes::ClassCPtr::force_creating_from_raw_pointer, components_component_a_get_c_const(GetRawPointer()), false);
}

inline void Components::ComponentA::SetC(const Classes::ClassCPtr& c)
{
    components_component_a_set_c(GetRawPointer(), c.GetRawPtr());
}

inline Components::ComponentA::ComponentA(const ComponentA& other)
{
    if (other.GetRawPointer())
    {
        SetObject(components_component_a_copy(other.GetRawPointer()));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef COMPONENTS_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Components::ComponentA::ComponentA(ComponentA&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* COMPONENTS_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Components::ComponentA::ComponentA(Components::ComponentA::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(components_component_a_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline Components::ComponentA::~ComponentA()
{
    if (GetRawPointer())
    {
        components_component_a_delete(GetRawPointer());
        SetObject(0);
    }
}

inline Components::ComponentA& Components::ComponentA::operator=(const Components::ComponentA& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            components_component_a_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            SetObject(components_component_a_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef COMPONENTS_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Components::ComponentA& Components::ComponentA::operator=(Components::ComponentA&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            components_component_a_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* COMPONENTS_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Components::ComponentA Components::ComponentA::Null()
{
    return Components::ComponentA(Components::ComponentA::force_creating_from_raw_pointer, 0, false);
}

inline bool Components::ComponentA::IsNull() const
{
    return !GetRawPointer();
}

inline bool Components::ComponentA::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool Components::ComponentA::operator!() const
{
    return !GetRawPointer();
}

inline void* Components::ComponentA::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* Components::ComponentA::GetRawPointer() const
{
    return Components::ComponentA::mObject ? mObject: 0;
}

inline void Components::ComponentA::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* COMPONENTS_COMPONENTA_DEFINITION_INCLUDED */

