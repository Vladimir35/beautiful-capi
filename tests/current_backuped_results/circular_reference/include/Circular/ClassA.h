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

#ifndef CIRCULAR_CLASSA_INCLUDED
#define CIRCULAR_CLASSA_INCLUDED

#include "Circular/CircularCapi.h"
#include "Circular/CircularFwd.h"

#ifdef __cplusplus

namespace Circular { 

class ClassARawPtr
{
protected:
    void* mObject;
    void SetObject(void* object_pointer)
    {
        mObject = object_pointer;
    }
public:
    ClassARawPtr(const ClassARawPtr& other)
    {
        SetObject(other.mObject);
    }
    ClassARawPtr(void *object_pointer, bool /*add_ref*/)
    {
        SetObject(object_pointer);
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
    ClassARawPtr* operator->()
    {
        return this;
    }
    const ClassARawPtr* operator->() const
    {
        return this;
    }
    void* Detach()
    {
        void* result = mObject;
        SetObject(0);
        return result;
    }
    ClassARawPtr operator=(const ClassARawPtr& other)
    {
        SetObject(other.mObject);
        return *this;
    }
    ClassARawPtr()
    {
        SetObject(circular_classa_default());
    }
    void Delete()
    {
        if (mObject)
        {
            circular_classa_delete(mObject);
            SetObject(0);
        }
    }
    void SetB(const Circular::ClassBRawPtr& value)
    {
        struct raw_pointer_holder { void* raw_pointer; };
        circular_classa_setb(mObject, reinterpret_cast<const raw_pointer_holder*>(&value)->raw_pointer);
    }
    Circular::ClassBFwdPtr GetB() const
    {
        return Circular::ClassBFwdPtr(circular_classa_getb(mObject), true);
    }
};

}

#endif /* __cplusplus */

#endif /* CIRCULAR_CLASSA_INCLUDED */
