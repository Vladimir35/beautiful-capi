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

#include <stdexcept>
#include <cassert>
#include "PrinterImpl.h"

#ifdef _WIN32
    #ifdef __GNUC__
        #define PRINTERNS_API extern "C" __attribute__ ((dllexport))
        #define PRINTERNS_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define PRINTERNS_API extern "C" __declspec(dllexport)
        #define PRINTERNS_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define PRINTERNS_API extern "C" __attribute__ ((visibility ("default")))
    #else
        #define PRINTERNS_API extern "C"
    #endif
    #ifdef __i386__
        #define PRINTERNS_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define PRINTERNS_API_CONVENTION
    #endif /* __i386__ */
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define PRINTERNS_API extern "C" __attribute__ ((visibility ("default")))
    #else
        #define PRINTERNS_API extern "C"
    #endif
    #ifdef __i386__
        #define PRINTERNS_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define PRINTERNS_API_CONVENTION
    #endif /* __i386__ */
#else
    #error "Unknown platform"
#endif

int AutoGen_Internal_Printer_PrinterNSGetMajorVersionImpl()
{
    return 1;
}

int AutoGen_Internal_Printer_PrinterNSGetMinorVersionImpl()
{
    return 0;
}

int AutoGen_Internal_Printer_PrinterNSGetPatchVersionImpl()
{
    return 0;
}

PRINTERNS_API int PRINTERNS_API_CONVENTION printer_ns_get_major_version()
{
    return AutoGen_Internal_Printer_PrinterNSGetMajorVersionImpl();
}

PRINTERNS_API int PRINTERNS_API_CONVENTION printer_ns_get_minor_version()
{
    return AutoGen_Internal_Printer_PrinterNSGetMinorVersionImpl();
}

PRINTERNS_API int PRINTERNS_API_CONVENTION printer_ns_get_patch_version()
{
    return AutoGen_Internal_Printer_PrinterNSGetPatchVersionImpl();
}

PRINTERNS_API void* PRINTERNS_API_CONVENTION printer_ns_printer_default()
{
    return new PrinterNS::PrinterImpl();
}

PRINTERNS_API void PRINTERNS_API_CONVENTION printer_ns_printer_show(void* object_pointer, void* name)
{
    PrinterNS::PrinterImpl* self = static_cast<PrinterNS::PrinterImpl*>(object_pointer);
    self->Show(Components::ComponentA(Components::ComponentA::force_creating_from_raw_pointer, name, true));
}

PRINTERNS_API void PRINTERNS_API_CONVENTION printer_ns_printer_show_1(void* object_pointer, void* person)
{
    PrinterNS::PrinterImpl* self = static_cast<PrinterNS::PrinterImpl*>(object_pointer);
    self->Show(Components::ComponentBRawPtr(Components::ComponentBRawPtr::force_creating_from_raw_pointer, person, true));
}

PRINTERNS_API void PRINTERNS_API_CONVENTION printer_ns_printer_show_2(void* object_pointer, void* address)
{
    PrinterNS::PrinterImpl* self = static_cast<PrinterNS::PrinterImpl*>(object_pointer);
    self->Show(CompC::ComponentCPtr(CompC::ComponentCPtr::force_creating_from_raw_pointer, address, true));
}

PRINTERNS_API void* PRINTERNS_API_CONVENTION printer_ns_printer_get_comp_c_const(void* object_pointer)
{
    const PrinterNS::PrinterImpl* self = static_cast<PrinterNS::PrinterImpl*>(object_pointer);
    return CompC::ComponentCPtr(self->GetCompC()).DetachObject();
}

PRINTERNS_API void* PRINTERNS_API_CONVENTION printer_ns_printer_copy(void* object_pointer)
{
    return new PrinterNS::PrinterImpl(*static_cast<PrinterNS::PrinterImpl*>(object_pointer));
}

PRINTERNS_API void PRINTERNS_API_CONVENTION printer_ns_printer_delete(void* object_pointer)
{
    delete static_cast<PrinterNS::PrinterImpl*>(object_pointer);
}
