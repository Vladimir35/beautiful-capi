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

#ifndef EXAMPLE_DUMPER_INCLUDED
#define EXAMPLE_DUMPER_INCLUDED

#include "ExampleCapi.h"
#include "ExampleFwd.h"

#ifdef __cplusplus

namespace Example { 

class Dumper
{
protected:
    void* mObject;
    void SetObject(void* object_pointer)
    {
        mObject = object_pointer;
    }
public:
    Dumper(const Dumper& other)
    {
        if (other.mObject)
        {
            SetObject(example_dumper_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    Dumper(void *object_pointer, bool copy_object)
    {
        if (object_pointer && copy_object)
        {
            SetObject(example_dumper_copy(object_pointer));
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
    Dumper* operator->()
    {
        return this;
    }
    const Dumper* operator->() const
    {
        return this;
    }
    void* Detach()
    {
        void* result = mObject;
        SetObject(0);
        return result;
    }
    Dumper operator=(const Dumper& other)
    {
        if (mObject != other.mObject)
        {
            if (mObject)
            {
                example_dumper_delete(mObject);
                SetObject(0);
            }
            if (other.mObject)
            {
                SetObject(example_dumper_copy(other.mObject));
            }
            else
            {
                SetObject(0);
            }
        }
        return *this;
    }
    Dumper()
    {
        SetObject(example_dumper_new());
    }
    ~Dumper()
    {
        if (mObject)
        {
            example_dumper_delete(mObject);
            SetObject(0);
        }
    }
    Example::PrinterFwdPtr GetPrinter() const
    {
        return Example::PrinterFwdPtr(example_dumper_getprinter(mObject), true);
    }
    void SetPrinter(const Example::PrinterPtr& printer)
    {
        struct raw_pointer_holder { void* raw_pointer; };
        example_dumper_setprinter(mObject, reinterpret_cast<const raw_pointer_holder*>(&printer)->raw_pointer);
    }
    void Dump() const
    {
        example_dumper_dump(mObject);
    }
};

}

#endif /* __cplusplus */

#endif /* EXAMPLE_DUMPER_INCLUDED */

