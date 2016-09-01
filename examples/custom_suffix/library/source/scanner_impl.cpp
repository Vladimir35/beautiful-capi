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

#include <iostream>
#include "scanner_impl.h"

hello_world::scanner_impl::scanner_impl()
{
    std::cout << "Scanner ctor" << std::endl;
}

hello_world::scanner_impl::scanner_impl(const scanner_impl& other)
{
    std::cout << "Scanner copy ctor" << std::endl;
}

hello_world::scanner_impl::~scanner_impl()
{
    std::cout << "Scanner dtor" << std::endl;
}

void hello_world::scanner_impl::scan() const
{
    std::cout << "scanning is done." << std::endl;
}
