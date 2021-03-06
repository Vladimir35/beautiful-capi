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
#include "NameImpl.h"
#include "AddressImpl.h"
#include "PersonImpl.h"
#include "PrinterImpl.h"

#ifdef _WIN32
    #ifdef __GNUC__
        #define MIXEDSEMANTIC2_API extern "C" __attribute__ ((dllexport))
        #define MIXEDSEMANTIC2_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define MIXEDSEMANTIC2_API extern "C" __declspec(dllexport)
        #define MIXEDSEMANTIC2_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define MIXEDSEMANTIC2_API extern "C" __attribute__ ((visibility ("default")))
    #else
        #define MIXEDSEMANTIC2_API extern "C"
    #endif
    #ifdef __i386__
        #define MIXEDSEMANTIC2_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define MIXEDSEMANTIC2_API_CONVENTION
    #endif /* __i386__ */
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define MIXEDSEMANTIC2_API extern "C" __attribute__ ((visibility ("default")))
    #else
        #define MIXEDSEMANTIC2_API extern "C"
    #endif
    #ifdef __i386__
        #define MIXEDSEMANTIC2_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define MIXEDSEMANTIC2_API_CONVENTION
    #endif /* __i386__ */
#else
    #error "Unknown platform"
#endif

int AutoGen_Internal_MixedSemantic2_MixedSemantic2GetMajorVersionImpl()
{
    return 1;
}

int AutoGen_Internal_MixedSemantic2_MixedSemantic2GetMinorVersionImpl()
{
    return 0;
}

int AutoGen_Internal_MixedSemantic2_MixedSemantic2GetPatchVersionImpl()
{
    return 0;
}

MIXEDSEMANTIC2_API int MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_get_major_version()
{
    return AutoGen_Internal_MixedSemantic2_MixedSemantic2GetMajorVersionImpl();
}

MIXEDSEMANTIC2_API int MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_get_minor_version()
{
    return AutoGen_Internal_MixedSemantic2_MixedSemantic2GetMinorVersionImpl();
}

MIXEDSEMANTIC2_API int MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_get_patch_version()
{
    return AutoGen_Internal_MixedSemantic2_MixedSemantic2GetPatchVersionImpl();
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_full_name(const char* FirstName, const char* FatherName, const char* LastName)
{
    return new MixedSemantic2::NameImpl(FirstName, FatherName, LastName);
}

MIXEDSEMANTIC2_API const char* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_get_first_name_const(void* object_pointer)
{
    const MixedSemantic2::NameImpl* self = static_cast<MixedSemantic2::NameImpl*>(object_pointer);
    return self->GetFirstName();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_set_first_name(void* object_pointer, const char* first_name)
{
    MixedSemantic2::NameImpl* self = static_cast<MixedSemantic2::NameImpl*>(object_pointer);
    self->SetFirstName(first_name);
}

MIXEDSEMANTIC2_API const char* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_get_last_name_const(void* object_pointer)
{
    const MixedSemantic2::NameImpl* self = static_cast<MixedSemantic2::NameImpl*>(object_pointer);
    return self->GetLastName();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_set_last_name(void* object_pointer, const char* last_name)
{
    MixedSemantic2::NameImpl* self = static_cast<MixedSemantic2::NameImpl*>(object_pointer);
    self->SetLastName(last_name);
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_copy(void* object_pointer)
{
    return new MixedSemantic2::NameImpl(*static_cast<MixedSemantic2::NameImpl*>(object_pointer));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_delete(void* object_pointer)
{
    delete static_cast<MixedSemantic2::NameImpl*>(object_pointer);
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_default()
{
    return new MixedSemantic2::AddressImpl();
}

MIXEDSEMANTIC2_API const char* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_get_street_name_const(void* object_pointer)
{
    const MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    return self->GetStreetName();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_set_street_name(void* object_pointer, const char* street_name)
{
    MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    self->SetStreetName(street_name);
}

MIXEDSEMANTIC2_API const char* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_get_city_const(void* object_pointer)
{
    const MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    return self->GetCity();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_set_city(void* object_pointer, const char* city)
{
    MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    self->SetCity(city);
}

MIXEDSEMANTIC2_API unsigned int MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_get_state_const(void* object_pointer)
{
    const MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    return self->GetState();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_set_state(void* object_pointer, unsigned int state)
{
    MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    self->SetState(state);
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_add_ref(void* object_pointer)
{
    intrusive_ptr_add_ref(static_cast<MixedSemantic2::AddressImpl*>(object_pointer));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_release(void* object_pointer)
{
    intrusive_ptr_release(static_cast<MixedSemantic2::AddressImpl*>(object_pointer));
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_default()
{
    return new MixedSemantic2::PersonImpl();
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_get_address_const(void* object_pointer)
{
    const MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    return self->GetAddress();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_set_address(void* object_pointer, void* address)
{
    MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    self->SetAddress(static_cast<MixedSemantic2::AddressImpl*>(address));
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_get_name(void* object_pointer)
{
    MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    return &(self->GetName());
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_set_name(void* object_pointer, void* name)
{
    MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    self->SetName(*static_cast<MixedSemantic2::NameImpl*>(name));
}

MIXEDSEMANTIC2_API unsigned int MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_get_day_const(void* object_pointer)
{
    const MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    return self->GetDay();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_set_day(void* object_pointer, unsigned int day)
{
    MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    self->SetDay(day);
}

MIXEDSEMANTIC2_API unsigned int MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_get_month_const(void* object_pointer)
{
    const MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    return self->GetMonth();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_set_month(void* object_pointer, unsigned int month)
{
    MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    self->SetMonth(month);
}

MIXEDSEMANTIC2_API unsigned int MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_get_year_const(void* object_pointer)
{
    const MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    return self->GetYear();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_set_year(void* object_pointer, unsigned int year)
{
    MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    self->SetYear(year);
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_delete(void* object_pointer)
{
    delete static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_printer_default()
{
    return new MixedSemantic2::PrinterImpl();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_printer_show(void* object_pointer, void* name)
{
    MixedSemantic2::PrinterImpl* self = static_cast<MixedSemantic2::PrinterImpl*>(object_pointer);
    self->Show(*static_cast<MixedSemantic2::NameImpl*>(name));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_printer_show_by_pointer(void* object_pointer, void* name)
{
    MixedSemantic2::PrinterImpl* self = static_cast<MixedSemantic2::PrinterImpl*>(object_pointer);
    self->ShowByPointer(static_cast<MixedSemantic2::NameImpl*>(name));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_printer_show_by_reference(void* object_pointer, void* name)
{
    MixedSemantic2::PrinterImpl* self = static_cast<MixedSemantic2::PrinterImpl*>(object_pointer);
    self->ShowByReference(*static_cast<MixedSemantic2::NameImpl*>(name));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_printer_show_1(void* object_pointer, void* person)
{
    MixedSemantic2::PrinterImpl* self = static_cast<MixedSemantic2::PrinterImpl*>(object_pointer);
    self->Show(*static_cast<MixedSemantic2::PersonImpl*>(person));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_printer_show_by_pointer_1(void* object_pointer, void* person)
{
    MixedSemantic2::PrinterImpl* self = static_cast<MixedSemantic2::PrinterImpl*>(object_pointer);
    self->ShowByPointer(static_cast<MixedSemantic2::PersonImpl*>(person));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_printer_show_by_reference_1(void* object_pointer, void* person)
{
    MixedSemantic2::PrinterImpl* self = static_cast<MixedSemantic2::PrinterImpl*>(object_pointer);
    self->ShowByReference(*static_cast<MixedSemantic2::PersonImpl*>(person));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_printer_show_2(void* object_pointer, void* address)
{
    MixedSemantic2::PrinterImpl* self = static_cast<MixedSemantic2::PrinterImpl*>(object_pointer);
    self->Show(*static_cast<MixedSemantic2::AddressImpl*>(address));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_printer_show_by_pointer_2(void* object_pointer, void* address)
{
    MixedSemantic2::PrinterImpl* self = static_cast<MixedSemantic2::PrinterImpl*>(object_pointer);
    self->ShowByPointer(static_cast<MixedSemantic2::AddressImpl*>(address));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_printer_show_by_reference_2(void* object_pointer, void* address)
{
    MixedSemantic2::PrinterImpl* self = static_cast<MixedSemantic2::PrinterImpl*>(object_pointer);
    self->ShowByReference(*static_cast<MixedSemantic2::AddressImpl*>(address));
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_printer_copy(void* object_pointer)
{
    return new MixedSemantic2::PrinterImpl(*static_cast<MixedSemantic2::PrinterImpl*>(object_pointer));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_printer_delete(void* object_pointer)
{
    delete static_cast<MixedSemantic2::PrinterImpl*>(object_pointer);
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_raw_ptr_full_name(const char* FirstName, const char* FatherName, const char* LastName)
{
    return new MixedSemantic2::NameImpl(FirstName, FatherName, LastName);
}

MIXEDSEMANTIC2_API const char* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_raw_ptr_get_first_name_const(void* object_pointer)
{
    const MixedSemantic2::NameImpl* self = static_cast<MixedSemantic2::NameImpl*>(object_pointer);
    return self->GetFirstName();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_raw_ptr_set_first_name(void* object_pointer, const char* first_name)
{
    MixedSemantic2::NameImpl* self = static_cast<MixedSemantic2::NameImpl*>(object_pointer);
    self->SetFirstName(first_name);
}

MIXEDSEMANTIC2_API const char* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_raw_ptr_get_last_name_const(void* object_pointer)
{
    const MixedSemantic2::NameImpl* self = static_cast<MixedSemantic2::NameImpl*>(object_pointer);
    return self->GetLastName();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_raw_ptr_set_last_name(void* object_pointer, const char* last_name)
{
    MixedSemantic2::NameImpl* self = static_cast<MixedSemantic2::NameImpl*>(object_pointer);
    self->SetLastName(last_name);
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_name_raw_ptr_delete(void* object_pointer)
{
    delete static_cast<MixedSemantic2::NameImpl*>(object_pointer);
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_raw_ptr_default()
{
    return new MixedSemantic2::AddressImpl();
}

MIXEDSEMANTIC2_API const char* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_raw_ptr_get_street_name_const(void* object_pointer)
{
    const MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    return self->GetStreetName();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_raw_ptr_set_street_name(void* object_pointer, const char* street_name)
{
    MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    self->SetStreetName(street_name);
}

MIXEDSEMANTIC2_API const char* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_raw_ptr_get_city_const(void* object_pointer)
{
    const MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    return self->GetCity();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_raw_ptr_set_city(void* object_pointer, const char* city)
{
    MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    self->SetCity(city);
}

MIXEDSEMANTIC2_API unsigned int MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_raw_ptr_get_state_const(void* object_pointer)
{
    const MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    return self->GetState();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_raw_ptr_set_state(void* object_pointer, unsigned int state)
{
    MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    self->SetState(state);
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_raw_ptr_delete(void* object_pointer)
{
    delete static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_copy_default()
{
    return new MixedSemantic2::AddressImpl();
}

MIXEDSEMANTIC2_API const char* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_copy_get_street_name_const(void* object_pointer)
{
    const MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    return self->GetStreetName();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_copy_set_street_name(void* object_pointer, const char* street_name)
{
    MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    self->SetStreetName(street_name);
}

MIXEDSEMANTIC2_API const char* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_copy_get_city_const(void* object_pointer)
{
    const MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    return self->GetCity();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_copy_set_city(void* object_pointer, const char* city)
{
    MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    self->SetCity(city);
}

MIXEDSEMANTIC2_API unsigned int MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_copy_get_state_const(void* object_pointer)
{
    const MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    return self->GetState();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_copy_set_state(void* object_pointer, unsigned int state)
{
    MixedSemantic2::AddressImpl* self = static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
    self->SetState(state);
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_copy_copy(void* object_pointer)
{
    return new MixedSemantic2::AddressImpl(*static_cast<MixedSemantic2::AddressImpl*>(object_pointer));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_address_copy_delete(void* object_pointer)
{
    delete static_cast<MixedSemantic2::AddressImpl*>(object_pointer);
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_default()
{
    return new MixedSemantic2::PersonImpl();
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_get_address_const(void* object_pointer)
{
    const MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    return self->GetAddress();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_set_address(void* object_pointer, void* address)
{
    MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    self->SetAddress(static_cast<MixedSemantic2::AddressImpl*>(address));
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_get_name(void* object_pointer)
{
    MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    return &(self->GetName());
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_set_name(void* object_pointer, void* name)
{
    MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    self->SetName(*static_cast<MixedSemantic2::NameImpl*>(name));
}

MIXEDSEMANTIC2_API unsigned int MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_get_day_const(void* object_pointer)
{
    const MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    return self->GetDay();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_set_day(void* object_pointer, unsigned int day)
{
    MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    self->SetDay(day);
}

MIXEDSEMANTIC2_API unsigned int MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_get_month_const(void* object_pointer)
{
    const MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    return self->GetMonth();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_set_month(void* object_pointer, unsigned int month)
{
    MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    self->SetMonth(month);
}

MIXEDSEMANTIC2_API unsigned int MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_get_year_const(void* object_pointer)
{
    const MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    return self->GetYear();
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_set_year(void* object_pointer, unsigned int year)
{
    MixedSemantic2::PersonImpl* self = static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
    self->SetYear(year);
}

MIXEDSEMANTIC2_API void* MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_copy(void* object_pointer)
{
    return new MixedSemantic2::PersonImpl(*static_cast<MixedSemantic2::PersonImpl*>(object_pointer));
}

MIXEDSEMANTIC2_API void MIXEDSEMANTIC2_API_CONVENTION mixed_semantic2_person_copy_delete(void* object_pointer)
{
    delete static_cast<MixedSemantic2::PersonImpl*>(object_pointer);
}
