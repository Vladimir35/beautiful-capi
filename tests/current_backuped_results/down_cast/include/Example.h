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

#ifndef EXAMPLE_INCLUDED
#define EXAMPLE_INCLUDED

#include "ExampleCapi.h"
#include "ExampleFwd.h"
#include "Example/IShape.h"
#include "Example/IPolygon.h"
#include "Example/ITriangle.h"
#include "Example/ISquare.h"
#include "Example/ICircle.h"

#ifdef __cplusplus

namespace Example { 

inline Example::IShapeFwdPtr CreateTriangle()
{
    return Example::IShapeFwdPtr(examplecreate_triangle(), false);
}

inline Example::IShapeFwdPtr CreateSquare()
{
    return Example::IShapeFwdPtr(examplecreate_square(), false);
}

inline Example::IShapeFwdPtr CreateCircle()
{
    return Example::IShapeFwdPtr(examplecreate_circle(), false);
}

template<typename TargetType, typename SourceType>
TargetType down_cast(const SourceType&);

template<>
inline Example::IPolygonPtr down_cast(const Example::IShapePtr& input_object)
{
    struct raw_pointer_holder { void* raw_pointer; };
    return Example::IPolygonPtr(example_ishape_cast_to_example_ipolygon(reinterpret_cast<const raw_pointer_holder*>(&input_object)->raw_pointer), true);
}

template<>
inline Example::ITrianglePtr down_cast(const Example::IPolygonPtr& input_object)
{
    struct raw_pointer_holder { void* raw_pointer; };
    return Example::ITrianglePtr(example_ipolygon_cast_to_example_itriangle(reinterpret_cast<const raw_pointer_holder*>(&input_object)->raw_pointer), true);
}

template<>
inline Example::ITrianglePtr down_cast(const Example::IShapePtr& input_object)
{
    struct raw_pointer_holder { void* raw_pointer; };
    return Example::ITrianglePtr(example_ishape_cast_to_example_itriangle(reinterpret_cast<const raw_pointer_holder*>(&input_object)->raw_pointer), true);
}

template<>
inline Example::ISquarePtr down_cast(const Example::IPolygonPtr& input_object)
{
    struct raw_pointer_holder { void* raw_pointer; };
    return Example::ISquarePtr(example_ipolygon_cast_to_example_isquare(reinterpret_cast<const raw_pointer_holder*>(&input_object)->raw_pointer), true);
}

template<>
inline Example::ISquarePtr down_cast(const Example::IShapePtr& input_object)
{
    struct raw_pointer_holder { void* raw_pointer; };
    return Example::ISquarePtr(example_ishape_cast_to_example_isquare(reinterpret_cast<const raw_pointer_holder*>(&input_object)->raw_pointer), true);
}

template<>
inline Example::ICirclePtr down_cast(const Example::IShapePtr& input_object)
{
    struct raw_pointer_holder { void* raw_pointer; };
    return Example::ICirclePtr(example_ishape_cast_to_example_icircle(reinterpret_cast<const raw_pointer_holder*>(&input_object)->raw_pointer), true);
}

}

#endif /* __cplusplus */

#endif /* EXAMPLE_INCLUDED */
