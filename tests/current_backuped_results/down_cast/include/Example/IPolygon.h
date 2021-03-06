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

#ifndef EXAMPLE_IPOLYGON_DEFINITION_INCLUDED
#define EXAMPLE_IPOLYGON_DEFINITION_INCLUDED

#include "Example/IPolygonDecl.h"
#include "Example/IShape.h"

#ifdef __cplusplus

inline int Example::IPolygonPtr::GetPointsCount() const
{
    return example_ipolygon_get_points_count_const(GetRawPointer());
}

inline Example::IPolygonPtr::IPolygonPtr(const IPolygonPtr& other) : Example::IShapePtr(Example::IShapePtr::force_creating_from_raw_pointer, 0, false)
{
    SetObject(other.GetRawPointer());
    if (other.GetRawPointer())
    {
        example_ipolygon_add_ref(other.GetRawPointer());
    }
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::IPolygonPtr::IPolygonPtr(IPolygonPtr&& other) : Example::IShapePtr(std::move(other))
{
    mObject = other.mObject;
    other.mObject = 0;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::IPolygonPtr::IPolygonPtr(Example::IPolygonPtr::ECreateFromRawPointer, void *object_pointer, bool add_ref_object) : Example::IShapePtr(Example::IShapePtr::force_creating_from_raw_pointer, 0, false)
{
    SetObject(object_pointer);
    if (add_ref_object && object_pointer)
    {
        example_ipolygon_add_ref(object_pointer);
    }
}

inline Example::IPolygonPtr::~IPolygonPtr()
{
    if (GetRawPointer())
    {
        example_ipolygon_release(GetRawPointer());
        SetObject(0);
    }
}

inline Example::IPolygonPtr& Example::IPolygonPtr::operator=(const Example::IPolygonPtr& other)
{
    if (GetRawPointer() != other.GetRawPointer())
    {
        if (GetRawPointer())
        {
            example_ipolygon_release(GetRawPointer());
            SetObject(0);
        }
        SetObject(other.GetRawPointer());
        if (other.GetRawPointer())
        {
            example_ipolygon_add_ref(other.GetRawPointer());
        }
    }
    return *this;
}

#ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
inline Example::IPolygonPtr& Example::IPolygonPtr::operator=(Example::IPolygonPtr&& other)
{
    if (GetRawPointer() != other.GetRawPointer())
    {
        if (GetRawPointer())
        {
            example_ipolygon_release(GetRawPointer());
            SetObject(0);
        }
        Example::IShapePtr::operator=(std::move(other));
        mObject = other.mObject;
        other.mObject = 0;
    }
    return *this;
}
#endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */

inline Example::IPolygonPtr Example::IPolygonPtr::Null()
{
    return Example::IPolygonPtr(Example::IPolygonPtr::force_creating_from_raw_pointer, 0, false);
}

inline bool Example::IPolygonPtr::IsNull() const
{
    return !GetRawPointer();
}

inline bool Example::IPolygonPtr::IsNotNull() const
{
    return GetRawPointer() != 0;
}

inline bool Example::IPolygonPtr::operator!() const
{
    return !GetRawPointer();
}

inline void* Example::IPolygonPtr::Detach()
{
    void* result = GetRawPointer();
    SetObject(0);
    return result;
}

inline void* Example::IPolygonPtr::GetRawPointer() const
{
    return Example::IShapePtr::mObject ? mObject: 0;
}

inline Example::IPolygonPtr* Example::IPolygonPtr::operator->()
{
    return this;
}

inline const Example::IPolygonPtr* Example::IPolygonPtr::operator->() const
{
    return this;
}

inline void Example::IPolygonPtr::SetObject(void* object_pointer)
{
    mObject = object_pointer;
    if (mObject)
    {
        Example::IShapePtr::SetObject(example_ipolygon_cast_to_base(mObject));
    }
    else
    {
        Example::IShapePtr::SetObject(0);
    }
}

namespace Example {

template<>
inline Example::IPolygonPtr down_cast<Example::IPolygonPtr >(const Example::IShapePtr& source_object)
{
    return Example::IPolygonPtr(Example::IPolygonPtr::force_creating_from_raw_pointer, example_ishape_cast_to_example_ipolygon(source_object.GetRawPointer()), true);
}

}

#endif /* __cplusplus */

#endif /* EXAMPLE_IPOLYGON_DEFINITION_INCLUDED */

