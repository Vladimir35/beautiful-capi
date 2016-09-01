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

#ifndef HELLO_WORLD_PLOTTER_INCLUDED
#define HELLO_WORLD_PLOTTER_INCLUDED

#include "hello_world/hello_world_capi.h"
#include "hello_world/hello_world_fwd_ptr.h"

#ifdef __cplusplus

namespace hello_world { 

class plotter_ptr
{
protected:
    void* mObject;
    void SetObject(void* object_pointer)
    {
        mObject = object_pointer;
    }
public:
    plotter_ptr(const plotter_ptr& other)
    {
        SetObject(other.mObject);
        if (mObject)
        {
            hello_world_plotter_add_ref(mObject);
        }
    }
    plotter_ptr(void *object_pointer, bool add_ref)
    {
        SetObject(object_pointer);
        if (add_ref && object_pointer)
        {
            hello_world_plotter_add_ref(mObject);
        }
    }
    bool is_null() const
    {
        return !mObject;
    }
    bool is_not_null() const
    {
        return mObject != 0;
    }
    bool operator!() const
    {
        return !mObject;
    }
    plotter_ptr* operator->()
    {
        return this;
    }
    const plotter_ptr* operator->() const
    {
        return this;
    }
    void* Detach()
    {
        void* result = mObject;
        SetObject(0);
        return result;
    }
    plotter_ptr operator=(const plotter_ptr& other)
    {
        if (mObject != other.mObject)
        {
            if (mObject)
            {
                hello_world_plotter_release(mObject);
                SetObject(0);
            }
            SetObject(other.mObject);
            if (mObject)
            {
                hello_world_plotter_add_ref(mObject);
            }
        }
        return *this;
    }
    plotter_ptr()
    {
        SetObject(hello_world_plotter_default());
    }
    ~plotter_ptr()
    {
        if (mObject)
        {
            hello_world_plotter_release(mObject);
            SetObject(0);
        }
    }
    void draw() const
    {
        hello_world_plotter_draw(mObject);
    }
};

}

#endif /* __cplusplus */

#endif /* HELLO_WORLD_PLOTTER_INCLUDED */

