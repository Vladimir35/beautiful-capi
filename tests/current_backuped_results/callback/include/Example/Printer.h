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

#ifndef EXAMPLE_PRINTER_INCLUDED
#define EXAMPLE_PRINTER_INCLUDED

#include "ExampleCapi.h"
#include "ExampleFwd.h"

#ifdef __cplusplus

namespace Example { 

class PrinterPtr
{
protected:
    void* mObject;
    void SetObject(void* object_pointer)
    {
        mObject = object_pointer;
    }
public:
    enum EQuality
    {
        draft,
        normal,
        high,
    };
    PrinterPtr(const PrinterPtr& other)
    {
        SetObject(other.mObject);
        if (mObject)
        {
            example_printer_add_ref(mObject);
        }
    }
    PrinterPtr(void *object_pointer, bool add_ref)
    {
        SetObject(object_pointer);
        if (add_ref && object_pointer)
        {
            example_printer_add_ref(mObject);
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
    PrinterPtr* operator->()
    {
        return this;
    }
    const PrinterPtr* operator->() const
    {
        return this;
    }
    void* Detach()
    {
        void* result = mObject;
        SetObject(0);
        return result;
    }
    PrinterPtr operator=(const PrinterPtr& other)
    {
        if (mObject != other.mObject)
        {
            if (mObject)
            {
                example_printer_release(mObject);
                SetObject(0);
            }
            SetObject(other.mObject);
            if (mObject)
            {
                example_printer_add_ref(mObject);
            }
        }
        return *this;
    }
    ~PrinterPtr()
    {
        if (mObject)
        {
            example_printer_release(mObject);
            SetObject(0);
        }
    }
    void Print(const char* text) const
    {
        beautiful_capi_callback_exception_info_t exception_info;
        example_printer_print(&exception_info, mObject, text);
        beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    }
    void SetPrintingQuality(Example::PrinterPtr::EQuality quality)
    {
        beautiful_capi_callback_exception_info_t exception_info;
        example_printer_setprintingquality(&exception_info, mObject, static_cast<int>(quality));
        beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
    }
    Example::PrinterPtr::EQuality GetPrintingQuality() const
    {
        beautiful_capi_callback_exception_info_t exception_info;
        Example::PrinterPtr::EQuality result(static_cast<Example::PrinterPtr::EQuality>(example_printer_getprintingquality(&exception_info, mObject)));
        beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
        return result;
    }
    Example::EPrintingDevice GetDeviceType() const
    {
        beautiful_capi_callback_exception_info_t exception_info;
        Example::EPrintingDevice result(static_cast<Example::EPrintingDevice>(example_printer_getdevicetype(&exception_info, mObject)));
        beautiful_capi_Callback::check_and_throw_exception(exception_info.code, exception_info.object_pointer);
        return result;
    }
};

}

#endif /* __cplusplus */

#endif /* EXAMPLE_PRINTER_INCLUDED */

