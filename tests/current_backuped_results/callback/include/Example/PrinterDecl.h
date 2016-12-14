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

#ifndef EXAMPLE_PRINTER_DECLARATION_INCLUDED
#define EXAMPLE_PRINTER_DECLARATION_INCLUDED

#include "ExampleCapi.h"
#include "ExampleFwd.h"
#include "ExampleEnums.h"
#include "Example/PrinterDecl.h"

#ifdef __cplusplus

namespace Example {

/**
 * @brief Represents an abstract printing device.
 */
class PrinterPtr
{
public:
    /**
     * @brief Represents a printing quality.
     */
    enum EQuality
    {
        draft, /**< Specifies the draft quality. */
        normal, /**< Specifies the normal quality. */
        high /**< Specifies the high quality. */
    };

    /**
     * @brief Prints the specified text.
     * The passed argument could be null.
     * In a such case the printer implementation could throw an exception.
     */
    inline void Print(const char* text) const;
    /**
     * @brief Gets the printing device type.
     * @returns Printing device type.
     */
    inline Example::EPrintingDevice GetDeviceType() const;
    /**
     * @brief Gets the printing quality.
     */
    inline Example::PrinterPtr::EQuality GetPrintingQuality() const;
    /**
     * @brief Sets the printing quality.
     */
    inline void SetPrintingQuality(Example::PrinterPtr::EQuality value);

    inline PrinterPtr(const PrinterPtr& other);
    #ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline PrinterPtr(PrinterPtr&& other);
    #endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    enum ECreateFromRawPointer { force_creating_from_raw_pointer };
    inline PrinterPtr(ECreateFromRawPointer, void *object_pointer, bool add_ref_object);
    inline ~PrinterPtr();
    inline PrinterPtr& operator=(const PrinterPtr& other);
    #ifdef EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES
    inline PrinterPtr& operator=(PrinterPtr&& other);
    #endif /* EXAMPLE_CPP_COMPILER_HAS_RVALUE_REFERENCES */
    static inline PrinterPtr Null();
    inline bool IsNull() const;
    inline bool IsNotNull() const;
    inline bool operator!() const;
    inline void* Detach();
    inline void* GetRawPointer() const;
    inline PrinterPtr* operator->();
    inline const PrinterPtr* operator->() const;
protected:
    inline void SetObject(void* object_pointer);
    void* mObject;
};

}

namespace Example {

template<typename TargetType>
inline TargetType down_cast(const Example::PrinterPtr& source_object);

}

#endif /* __cplusplus */

#endif /* EXAMPLE_PRINTER_DECLARATION_INCLUDED */

