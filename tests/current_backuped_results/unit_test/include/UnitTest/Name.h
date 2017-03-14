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

#ifndef UNITTEST_NAME_DEFINITION_INCLUDED
#define UNITTEST_NAME_DEFINITION_INCLUDED

#include "UnitTest/NameDecl.h"

#ifdef __cplusplus

inline UnitTest::Name::Name(const char* FirstName, const char* MiddleName, const char* LastName)
{
    SetObject(unit_test_name_full_name(FirstName, MiddleName, LastName));
}

inline const char* UnitTest::Name::GetFullName()
{
    return unit_test_name_get_full_name(GetRawPointer());
}

inline const char* UnitTest::Name::GetFirstName() const
{
    return unit_test_name_get_first_name(GetRawPointer());
}

inline void UnitTest::Name::SetFirstName(const char* value)
{
    unit_test_name_set_first_name(GetRawPointer(), value);
}

inline const char* UnitTest::Name::GetMiddleName() const
{
    return unit_test_name_get_middle_name(GetRawPointer());
}

inline void UnitTest::Name::SetMiddleName(const char* value)
{
    unit_test_name_set_middle_name(GetRawPointer(), value);
}

inline const char* UnitTest::Name::GetLastName() const
{
    return unit_test_name_get_last_name(GetRawPointer());
}

inline void UnitTest::Name::SetLastName(const char* value)
{
    unit_test_name_set_last_name(GetRawPointer(), value);
}

inline UnitTest::Name::Name(const Name& other)
{
    if (other.GetRawPointer())
    {
        SetObject(unit_test_name_copy(other.GetRawPointer()));
    }
    else
    {
        SetObject(0);
    }
}

#ifdef UNITTEST_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline UnitTest::Name::Name(Name&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* UNITTEST_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline UnitTest::Name::Name(UnitTest::Name::ECreateFromRawPointer, void *object_pointer, bool copy_object)
{
    if (object_pointer && copy_object)
    {
        SetObject(unit_test_name_copy(object_pointer));
    }
    else
    {
        SetObject(object_pointer);
    }
}

inline UnitTest::Name::~Name()
{
    if (GetRawPointer())
    {
        unit_test_name_delete(GetRawPointer());
        SetObject(0);
    }
}

inline UnitTest::Name& UnitTest::Name::operator=(const UnitTest::Name& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            unit_test_name_delete(GetRawPointer());
            SetObject(0);
        }
        if (other.GetRawPointer())
        {
            SetObject(unit_test_name_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    return *this;
}

#ifdef UNITTEST_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline UnitTest::Name& UnitTest::Name::operator=(UnitTest::Name&& other)
{
    if (this != &other)
    {
        if (GetRawPointer())
        {
            unit_test_name_delete(GetRawPointer());
            SetObject(0);
        }
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* UNITTEST_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline UnitTest::Name UnitTest::Name::Null()
{
    return UnitTest::Name(UnitTest::Name::force_creating_from_raw_pointer, 0, false);
}

inline bool UnitTest::Name::IsNull() const
{
    return !GetRawPointer();
}

inline bool UnitTest::Name::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool UnitTest::Name::operator!() const
{
    return !GetRawPointer();
}

inline void* UnitTest::Name::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* UnitTest::Name::GetRawPointer() const
{
    return UnitTest::Name::mObject ? mObject: 0;
}

inline void UnitTest::Name::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* UNITTEST_NAME_DEFINITION_INCLUDED */

