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

#ifndef OVERLOADSUFFIX_INCLUDED
#define OVERLOADSUFFIX_INCLUDED

#include "OverloadSuffixCapi.h"
#include "OverloadSuffixFwd.h"
#include "OverloadSuffix/Printer.h"

#ifdef __cplusplus

namespace OverloadSuffix {

inline void Show()
{
    overload_suffix_show();
}
inline void Show(int a)
{
    overload_suffix_show_int(a);
}
inline void Show(double a)
{
    overload_suffix_show_1(a);
}
inline int GetMajorVersion()
{
    return overload_suffix_get_major_version();
}
inline int GetMinorVersion()
{
    return overload_suffix_get_minor_version();
}
inline int GetPatchVersion()
{
    return overload_suffix_get_patch_version();
}

}

#endif /* __cplusplus */

#endif /* OVERLOADSUFFIX_INCLUDED */

