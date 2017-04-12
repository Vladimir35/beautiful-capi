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

#ifndef MIXEDSEMANTIC2_PERSON_DEFINITION_INCLUDED
#define MIXEDSEMANTIC2_PERSON_DEFINITION_INCLUDED

#include "MixedSemantic2/PersonDecl.h"
#include "MixedSemantic2/NameRawPtr.h"
#include "MixedSemantic2/Name.h"
#include "MixedSemantic2/Address.h"

#ifdef __cplusplus

inline MixedSemantic2::PersonRawPtr::PersonRawPtr()
{
    SetObject(mixed_semantic2_person_default());
}

inline MixedSemantic2::NameRawPtr MixedSemantic2::PersonRawPtr::GetName()
{
    return MixedSemantic2::NameRawPtr(MixedSemantic2::NameRawPtr::force_creating_from_raw_pointer, mixed_semantic2_person_get_name(GetRawPointer()), false);
}

inline void MixedSemantic2::PersonRawPtr::SetName(const MixedSemantic2::Name& name)
{
    mixed_semantic2_person_set_name(GetRawPointer(), name.GetRawPointer());
}

inline MixedSemantic2::AddressPtr MixedSemantic2::PersonRawPtr::GetAddress() const
{
    return MixedSemantic2::AddressPtr(MixedSemantic2::AddressPtr::force_creating_from_raw_pointer, mixed_semantic2_person_get_address_const(GetRawPointer()), false);
}

inline void MixedSemantic2::PersonRawPtr::SetAddress(const MixedSemantic2::AddressPtr& address)
{
    mixed_semantic2_person_set_address(GetRawPointer(), address.GetRawPointer());
}

inline unsigned int MixedSemantic2::PersonRawPtr::GetDay() const
{
    return mixed_semantic2_person_get_day_const(GetRawPointer());
}

inline void MixedSemantic2::PersonRawPtr::SetDay(unsigned int day)
{
    mixed_semantic2_person_set_day(GetRawPointer(), day);
}

inline unsigned int MixedSemantic2::PersonRawPtr::GetMonth() const
{
    return mixed_semantic2_person_get_month_const(GetRawPointer());
}

inline void MixedSemantic2::PersonRawPtr::SetMonth(unsigned int month)
{
    mixed_semantic2_person_set_month(GetRawPointer(), month);
}

inline unsigned int MixedSemantic2::PersonRawPtr::GetYear() const
{
    return mixed_semantic2_person_get_year_const(GetRawPointer());
}

inline void MixedSemantic2::PersonRawPtr::SetYear(unsigned int year)
{
    mixed_semantic2_person_set_year(GetRawPointer(), year);
}

inline MixedSemantic2::PersonRawPtr::PersonRawPtr(const PersonRawPtr& other)
{
    SetObject(other.GetRawPointer());
}

#ifdef MIXEDSEMANTIC2_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline MixedSemantic2::PersonRawPtr::PersonRawPtr(PersonRawPtr&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* MIXEDSEMANTIC2_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline MixedSemantic2::PersonRawPtr::PersonRawPtr(MixedSemantic2::PersonRawPtr::ECreateFromRawPointer, void *object_pointer, bool)
{
    SetObject(object_pointer);
}

inline void MixedSemantic2::PersonRawPtr::Delete()
{
    if (GetRawPointer())
    {
        mixed_semantic2_person_delete(GetRawPointer());
        SetObject(0);
    }
}

inline MixedSemantic2::PersonRawPtr& MixedSemantic2::PersonRawPtr::operator=(const MixedSemantic2::PersonRawPtr& other)
{
    if (this != &other)
    {
        SetObject(other.GetRawPointer());
    }
    return *this;
}

#ifdef MIXEDSEMANTIC2_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline MixedSemantic2::PersonRawPtr& MixedSemantic2::PersonRawPtr::operator=(MixedSemantic2::PersonRawPtr&& other)
{
    if (this != &other)
    {
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* MIXEDSEMANTIC2_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline MixedSemantic2::PersonRawPtr MixedSemantic2::PersonRawPtr::Null()
{
    return MixedSemantic2::PersonRawPtr(MixedSemantic2::PersonRawPtr::force_creating_from_raw_pointer, 0, false);
}

inline bool MixedSemantic2::PersonRawPtr::IsNull() const
{
    return !GetRawPointer();
}

inline bool MixedSemantic2::PersonRawPtr::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool MixedSemantic2::PersonRawPtr::operator!() const
{
    return !GetRawPointer();
}

inline void* MixedSemantic2::PersonRawPtr::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* MixedSemantic2::PersonRawPtr::GetRawPointer() const
{
    return MixedSemantic2::PersonRawPtr::mObject ? mObject: 0;
}

inline MixedSemantic2::PersonRawPtr* MixedSemantic2::PersonRawPtr::operator->()
{
    return this;
}

inline const MixedSemantic2::PersonRawPtr* MixedSemantic2::PersonRawPtr::operator->() const
{
    return this;
}

inline void MixedSemantic2::PersonRawPtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* MIXEDSEMANTIC2_PERSON_DEFINITION_INCLUDED */
