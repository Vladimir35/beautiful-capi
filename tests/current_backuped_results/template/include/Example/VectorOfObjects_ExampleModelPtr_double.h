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

#ifndef EXAMPLE_VECTOROFOBJECTS_EXAMPLEMODELPTR_DOUBLE_INCLUDED
#define EXAMPLE_VECTOROFOBJECTS_EXAMPLEMODELPTR_DOUBLE_INCLUDED

#include "ExampleCapi.h"
#include "ExampleFwd.h"

#ifdef __cplusplus

namespace Example { 

template<>
class VectorOfObjectsPtr<Example::ModelPtr<double> >
{
protected:
    void* mObject;
    void SetObject(void* object_pointer)
    {
        mObject = object_pointer;
    }
public:
    VectorOfObjectsPtr<Example::ModelPtr<double> >(const VectorOfObjectsPtr<Example::ModelPtr<double> >& other)
    {
        SetObject(other.mObject);
        if (mObject)
        {
            example_vectorofobjects_examplemodelptr_double_add_ref(mObject);
        }
    }
    VectorOfObjectsPtr<Example::ModelPtr<double> >(void *object_pointer, bool add_ref)
    {
        SetObject(object_pointer);
        if (add_ref && object_pointer)
        {
            example_vectorofobjects_examplemodelptr_double_add_ref(mObject);
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
    VectorOfObjectsPtr<Example::ModelPtr<double> >* operator->()
    {
        return this;
    }
    const VectorOfObjectsPtr<Example::ModelPtr<double> >* operator->() const
    {
        return this;
    }
    void* Detach()
    {
        void* result = mObject;
        SetObject(0);
        return result;
    }
    VectorOfObjectsPtr<Example::ModelPtr<double> > operator=(const VectorOfObjectsPtr<Example::ModelPtr<double> >& other)
    {
        if (mObject != other.mObject)
        {
            if (mObject)
            {
                example_vectorofobjects_examplemodelptr_double_release(mObject);
                SetObject(0);
            }
            SetObject(other.mObject);
            if (mObject)
            {
                example_vectorofobjects_examplemodelptr_double_add_ref(mObject);
            }
        }
        return *this;
    }
    VectorOfObjectsPtr<Example::ModelPtr<double> >()
    {
        SetObject(example_vectorofobjects_examplemodelptr_double_default());
    }
    ~VectorOfObjectsPtr<Example::ModelPtr<double> >()
    {
        if (mObject)
        {
            example_vectorofobjects_examplemodelptr_double_release(mObject);
            SetObject(0);
        }
    }
    int GetSize() const
    {
        return example_vectorofobjects_examplemodelptr_double_getsize(mObject);
    }
    void Clear()
    {
        example_vectorofobjects_examplemodelptr_double_clear(mObject);
    }
    void PushBack(const Example::ModelPtr<double>& value)
    {
        struct raw_pointer_holder { void* raw_pointer; };
        example_vectorofobjects_examplemodelptr_double_pushback(mObject, reinterpret_cast<const raw_pointer_holder*>(&value)->raw_pointer);
    }
    beautiful_capi_Template::forward_pointer_holder<Example::ModelPtr<double> > GetItem(int index) const
    {
        return beautiful_capi_Template::forward_pointer_holder<Example::ModelPtr<double> >(example_vectorofobjects_examplemodelptr_double_getitem(mObject, index), true);
    }
};

}

#endif /* __cplusplus */

#endif /* EXAMPLE_VECTOROFOBJECTS_EXAMPLEMODELPTR_DOUBLE_INCLUDED */
