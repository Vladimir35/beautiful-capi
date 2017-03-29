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

#ifndef RETURNVALUE_PERSON_DEFINITION_INCLUDED
#define RETURNVALUE_PERSON_DEFINITION_INCLUDED

#include "ReturnValue/PersonDecl.h"
#include "ReturnValue/FirstName.h"
#include "ReturnValue/MiddleName.h"
#include "ReturnValue/LastName.h"

#ifdef __cplusplus

inline ReturnValue::Person::Person()
{
    SetObject(return_value_person_default());
}

inline ReturnValue::FirstName ReturnValue::Person::GetFirstName() const
{
    return ReturnValue::FirstName(ReturnValue::FirstName::force_creating_from_raw_pointer, return_value_person_get_first_name_const(GetRawPointer()), false);
}

inline void ReturnValue::Person::SetFirstName(const ReturnValue::FirstName& first_name)
{
    return_value_person_set_first_name(GetRawPointer(), first_name.GetRawPointer());
}

inline ReturnValue::MiddleNamePtr ReturnValue::Person::GetMiddleName() const
{
    return ReturnValue::MiddleNamePtr(ReturnValue::MiddleNamePtr::force_creating_from_raw_pointer, return_value_person_get_middle_name_const(GetRawPointer()), false);
}

inline void ReturnValue::Person::SetMiddleName(const ReturnValue::MiddleNamePtr& middle_name)
{
    return_value_person_set_middle_name(GetRawPointer(), middle_name.GetRawPointer());
}

inline ReturnValue::LastNameRawPtr ReturnValue::Person::GetLastName() const
{
    return ReturnValue::LastNameRawPtr(ReturnValue::LastNameRawPtr::force_creating_from_raw_pointer, return_value_person_get_last_name_const(GetRawPointer()), false);
}

inline void ReturnValue::Person::SetLastName(const ReturnValue::LastNameRawPtr& last_name)
{
    return_value_person_set_last_name(GetRawPointer(), last_name.GetRawPointer());
}

inline ReturnValue::Person::Person(const Person& other)
{
    if (other.GetRawPointer())
    {
        SetObject(return_value_person_copy(other.GetRawPointer()));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef RETURNVALUE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline ReturnValue::Person::Person(Person&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* RETURNVALUE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline ReturnValue::Person::Person(ReturnValue::Person::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(return_value_person_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline ReturnValue::Person::~Person()
{
    if (GetRawPointer())
    {
        return_value_person_delete(GetRawPointer());
        SetObject(0);
    }
}

inline ReturnValue::Person& ReturnValue::Person::operator=(const ReturnValue::Person& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            return_value_person_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            SetObject(return_value_person_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef RETURNVALUE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline ReturnValue::Person& ReturnValue::Person::operator=(ReturnValue::Person&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            return_value_person_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* RETURNVALUE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline ReturnValue::Person ReturnValue::Person::Null()
{
    return ReturnValue::Person(ReturnValue::Person::force_creating_from_raw_pointer, 0, false);
}

inline bool ReturnValue::Person::IsNull() const
{
    return !GetRawPointer();
}

inline bool ReturnValue::Person::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool ReturnValue::Person::operator!() const
{
    return !GetRawPointer();
}

inline void* ReturnValue::Person::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* ReturnValue::Person::GetRawPointer() const
{
    return ReturnValue::Person::mObject ? mObject: 0;
}

inline void ReturnValue::Person::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* RETURNVALUE_PERSON_DEFINITION_INCLUDED */
