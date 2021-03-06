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

#if defined(_WIN32) && defined(_DEBUG)
#include <crtdbg.h>
#endif
#include <iostream>
#include <cstdlib>
#include "Example.h"

void show(Example::IShapeRawPtr shape)
{
    shape->Show();
}

int main()
{
#if defined(_WIN32) && defined(_DEBUG)
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif
    Example::IShapeRawPtr triangle = Example::CreateTriangle();
    Example::IShapeRawPtr shape0(Example::CreateCircle());
    Example::IShapeRawPtr shape1(Example::CreateRectangle());

    show(triangle);
    show(shape0);
    show(shape1);

    // Manually delete these objects, because they are non-owning raw pointers
    triangle->Delete();
    shape0->Delete();
    shape1->Delete();

    return EXIT_SUCCESS;
}
