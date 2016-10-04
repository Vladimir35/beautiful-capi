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

#ifndef HELLO_WORLD_SCANNER_DEFINITION_INCLUDED
#define HELLO_WORLD_SCANNER_DEFINITION_INCLUDED

#include "hello_world/scanner_decl.h"

#ifdef __cplusplus

inline hello_world::scanner_raw_ptr::scanner_raw_ptr()
{
    SetObject(hello_world_scanner_default());
}

inline void hello_world::scanner_raw_ptr::scan() const
{
    hello_world_scanner_scan(this->get_raw_pointer());
}

inline hello_world::scanner_raw_ptr::scanner_raw_ptr(const scanner_raw_ptr& other)
{
    SetObject(other.mObject);
}

inline hello_world::scanner_raw_ptr::scanner_raw_ptr(hello_world::scanner_raw_ptr::ECreateFromRawPointer, void *object_pointer, bool)
{
    SetObject(object_pointer);
}

inline void hello_world::scanner_raw_ptr::deallocate()
{
    if (mObject)
    {
        hello_world_scanner_delete(mObject);
        SetObject(0);
    }
}

inline hello_world::scanner_raw_ptr& hello_world::scanner_raw_ptr::operator=(const hello_world::scanner_raw_ptr& other)
{
    SetObject(other.mObject);
    return *this;
}

inline bool hello_world::scanner_raw_ptr::is_null() const
{
    return !mObject;
}

inline bool hello_world::scanner_raw_ptr::is_not_null() const
{
    return mObject != 0;
}

inline bool hello_world::scanner_raw_ptr::operator!() const
{
    return !mObject;
}

inline void* hello_world::scanner_raw_ptr::Detach()
{
    void* result = mObject;
    SetObject(0);
    return result;
}

inline void* hello_world::scanner_raw_ptr::get_raw_pointer() const
{
    return mObject;
}

inline hello_world::scanner_raw_ptr* hello_world::scanner_raw_ptr::operator->()
{
    return this;
}

inline const hello_world::scanner_raw_ptr* hello_world::scanner_raw_ptr::operator->() const
{
    return this;
}

inline void hello_world::scanner_raw_ptr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
}

#endif /* __cplusplus */

#endif /* HELLO_WORLD_SCANNER_DEFINITION_INCLUDED */

