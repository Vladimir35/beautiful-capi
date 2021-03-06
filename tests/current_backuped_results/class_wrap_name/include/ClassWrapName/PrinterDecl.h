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

#ifndef CLASSWRAPNAME_PRINTER_DECLARATION_INCLUDED
#define CLASSWRAPNAME_PRINTER_DECLARATION_INCLUDED

#include "ClassWrapNameCapi.h"
#include "ClassWrapNameFwd.h"

#ifdef __cplusplus

namespace ClassWrapName {

class WrapPrinter
{
public:
    inline WrapPrinter();
    inline void Show() const;

    inline WrapPrinter(const WrapPrinter& other);
    #ifdef CLASSWRAPNAME_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline WrapPrinter(WrapPrinter&& other);
    #endif /* CLASSWRAPNAME_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    enum ECreateFromRawPointer { force_creating_from_raw_pointer };
    inline WrapPrinter(ECreateFromRawPointer, void *object_pointer, bool copy_object);
    inline ~WrapPrinter();
    inline WrapPrinter& operator=(const WrapPrinter& other);
    #ifdef CLASSWRAPNAME_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline WrapPrinter& operator=(WrapPrinter&& other);
    #endif /* CLASSWRAPNAME_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    static inline WrapPrinter Null();
    inline bool IsNull() const;
    inline bool IsNotNull() const;
    inline bool operator!() const;
    inline void* Detach();
    inline void* GetRawPointer() const;
protected:
    inline void SetObject(void* object_pointer);
    void* mObject;
};

}

#endif /* __cplusplus */

#endif /* CLASSWRAPNAME_PRINTER_DECLARATION_INCLUDED */

