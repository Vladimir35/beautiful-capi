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

#ifndef RETURNVALUE_LASTNAME_DEFINITION_INCLUDED
#define RETURNVALUE_LASTNAME_DEFINITION_INCLUDED

#include "ReturnValue/LastNameDecl.h"

#ifdef __cplusplus

inline ReturnValue::LastNameRawPtr::LastNameRawPtr()
{
    SetObject(return_value_last_name_default());
}

inline const char* ReturnValue::LastNameRawPtr::GetLastName() const
{
    return return_value_last_name_get_last_name_const(GetRawPointer());
}

inline void ReturnValue::LastNameRawPtr::SetLastName(const char* last_name)
{
    return_value_last_name_set_last_name(GetRawPointer(), last_name);
}

inline ReturnValue::LastNameRawPtr::LastNameRawPtr(const LastNameRawPtr& other)
{
    SetObject(other.GetRawPointer());
}

#ifdef RETURNVALUE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline ReturnValue::LastNameRawPtr::LastNameRawPtr(LastNameRawPtr&& other)
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* RETURNVALUE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline ReturnValue::LastNameRawPtr::LastNameRawPtr(ReturnValue::LastNameRawPtr::ECreateFromRawPointer, void *object_pointer, bool)
{
    SetObject(object_pointer);
}

inline void ReturnValue::LastNameRawPtr::Delete()
{
    if (GetRawPointer())
    {
        return_value_last_name_delete(GetRawPointer());
        SetObject(0);
    }
}

inline ReturnValue::LastNameRawPtr& ReturnValue::LastNameRawPtr::operator=(const ReturnValue::LastNameRawPtr& other)
{
    if (this != &other)
    {
        SetObject(other.GetRawPointer());
    }
    return *this;
}

#ifdef RETURNVALUE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline ReturnValue::LastNameRawPtr& ReturnValue::LastNameRawPtr::operator=(ReturnValue::LastNameRawPtr&& other)
{
    if (this != &other)
    {
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* RETURNVALUE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline ReturnValue::LastNameRawPtr ReturnValue::LastNameRawPtr::Null()
{
    return ReturnValue::LastNameRawPtr(ReturnValue::LastNameRawPtr::force_creating_from_raw_pointer, 0, false);
}

inline bool ReturnValue::LastNameRawPtr::IsNull() const
{
    return !GetRawPointer();
}

inline bool ReturnValue::LastNameRawPtr::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool ReturnValue::LastNameRawPtr::operator!() const
{
    return !GetRawPointer();
}

inline void* ReturnValue::LastNameRawPtr::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* ReturnValue::LastNameRawPtr::GetRawPointer() const
{
    return ReturnValue::LastNameRawPtr::mObject ? mObject: 0;
}

inline ReturnValue::LastNameRawPtr* ReturnValue::LastNameRawPtr::operator->()
{
    return this;
}

inline const ReturnValue::LastNameRawPtr* ReturnValue::LastNameRawPtr::operator->() const
{
    return this;
}

inline void ReturnValue::LastNameRawPtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* RETURNVALUE_LASTNAME_DEFINITION_INCLUDED */

