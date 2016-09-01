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

#ifndef EXAMPLE_FWD_INCLUDED
#define EXAMPLE_FWD_INCLUDED

#ifdef __cplusplus

#include <memory>
#include "DownCast/common/forward_holder.h"

namespace Example
{
    class IShapePtr;
    typedef beautiful_capi_DownCast::forward_pointer_holder<IShapePtr> IShapeFwdPtr;
    class IPolygonPtr;
    typedef beautiful_capi_DownCast::forward_pointer_holder<IPolygonPtr> IPolygonFwdPtr;
    class ITrianglePtr;
    typedef beautiful_capi_DownCast::forward_pointer_holder<ITrianglePtr> ITriangleFwdPtr;
    class ISquarePtr;
    typedef beautiful_capi_DownCast::forward_pointer_holder<ISquarePtr> ISquareFwdPtr;
    class ICirclePtr;
    typedef beautiful_capi_DownCast::forward_pointer_holder<ICirclePtr> ICircleFwdPtr;
}

#endif /* __cplusplus */

#endif /* EXAMPLE_FWD_INCLUDED */

