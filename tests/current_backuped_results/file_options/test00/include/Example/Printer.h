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

#ifndef EXAMPLE_PRINTER_INCLUDED
#define EXAMPLE_PRINTER_INCLUDED

#include "ExampleCapi.h"
#include "ExampleFwd.h"

#ifdef __cplusplus

namespace Example { 

class Printer
{
protected:
    void* mObject;
    void SetObject(void* object_pointer)
    {
        mObject = object_pointer;
    }
public:
    Printer(const Printer& other)
    {
        if (other.mObject)
        {
            SetObject(example_printer_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    Printer(void *object_pointer, bool copy_object)
    {
        if (object_pointer && copy_object)
        {
            SetObject(example_printer_copy(object_pointer));
        }
        else
        {
            SetObject(object_pointer);
        }
    }
    bool IsNull() const
    {
        return !mObject;
    }
    bool IsNotNull() const
    {
        return mObject != 0;
    }
    bool operator!() const
    {
        return !mObject;
    }
    Printer* operator->()
    {
        return this;
    }
    const Printer* operator->() const
    {
        return this;
    }
    void* Detach()
    {
        void* result = mObject;
        SetObject(0);
        return result;
    }
    Printer operator=(const Printer& other)
    {
        if (mObject != other.mObject)
        {
            if (mObject)
            {
                example_printer_delete(mObject);
                SetObject(0);
            }
            if (other.mObject)
            {
                SetObject(example_printer_copy(other.mObject));
            }
            else
            {
                SetObject(0);
            }
        }
        return *this;
    }
    Printer()
    {
        SetObject(example_printer_new());
    }
    ~Printer()
    {
        if (mObject)
        {
            example_printer_delete(mObject);
            SetObject(0);
        }
    }
    void Show(const char* text)
    {
        example_printer_show(mObject, text);
    }
};

}

#endif /* __cplusplus */

#endif /* EXAMPLE_PRINTER_INCLUDED */

