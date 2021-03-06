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
#include "MappedTypes.h"

#ifdef _WIN32
    #ifdef __GNUC__
        #define MAPPEDTYPES_API extern "C" __attribute__ ((dllexport))
        #define MAPPEDTYPES_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define MAPPEDTYPES_API extern "C" __declspec(dllexport)
        #define MAPPEDTYPES_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define MAPPEDTYPES_API extern "C" __attribute__ ((visibility ("default")))
    #else
        #define MAPPEDTYPES_API extern "C"
    #endif
    #ifdef __i386__
        #define MAPPEDTYPES_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define MAPPEDTYPES_API_CONVENTION
    #endif /* __i386__ */
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define MAPPEDTYPES_API extern "C" __attribute__ ((visibility ("default")))
    #else
        #define MAPPEDTYPES_API extern "C"
    #endif
    #ifdef __i386__
        #define MAPPEDTYPES_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define MAPPEDTYPES_API_CONVENTION
    #endif /* __i386__ */
#else
    #error "Unknown platform"
#endif

int AutoGen_Internal_MappedTypes_MappedTypesGetMajorVersionImpl()
{
    return 1;
}

int AutoGen_Internal_MappedTypes_MappedTypesGetMinorVersionImpl()
{
    return 0;
}

int AutoGen_Internal_MappedTypes_MappedTypesGetPatchVersionImpl()
{
    return 0;
}

MAPPEDTYPES_API int32_t MAPPEDTYPES_API_CONVENTION mapped_types_get_major_version()
{
    return static_cast<int32_t>(AutoGen_Internal_MappedTypes_MappedTypesGetMajorVersionImpl());
}

MAPPEDTYPES_API int32_t MAPPEDTYPES_API_CONVENTION mapped_types_get_minor_version()
{
    return static_cast<int32_t>(AutoGen_Internal_MappedTypes_MappedTypesGetMinorVersionImpl());
}

MAPPEDTYPES_API int32_t MAPPEDTYPES_API_CONVENTION mapped_types_get_patch_version()
{
    return static_cast<int32_t>(AutoGen_Internal_MappedTypes_MappedTypesGetPatchVersionImpl());
}

MAPPEDTYPES_API void* MAPPEDTYPES_API_CONVENTION mapped_types_person_default()
{
    return new MappedTypes::PersonImpl();
}

MAPPEDTYPES_API uint8_t MAPPEDTYPES_API_CONVENTION mapped_types_person_is_man_const(void* object_pointer)
{
    const MappedTypes::PersonImpl* self = static_cast<MappedTypes::PersonImpl*>(object_pointer);
    return static_cast<uint8_t>(self->IsMan());
}

MAPPEDTYPES_API void MAPPEDTYPES_API_CONVENTION mapped_types_person_set_sex(void* object_pointer, uint8_t Sex)
{
    MappedTypes::PersonImpl* self = static_cast<MappedTypes::PersonImpl*>(object_pointer);
    self->SetSex((Sex ? true : false));
}

MAPPEDTYPES_API int32_t MAPPEDTYPES_API_CONVENTION mapped_types_person_get_age_const(void* object_pointer)
{
    const MappedTypes::PersonImpl* self = static_cast<MappedTypes::PersonImpl*>(object_pointer);
    return static_cast<int32_t>(self->GetAge());
}

MAPPEDTYPES_API void MAPPEDTYPES_API_CONVENTION mapped_types_person_set_age(void* object_pointer, int32_t age)
{
    MappedTypes::PersonImpl* self = static_cast<MappedTypes::PersonImpl*>(object_pointer);
    self->SetAge(static_cast<int>(age));
}

MAPPEDTYPES_API const char* MAPPEDTYPES_API_CONVENTION mapped_types_person_get_first_name_const(void* object_pointer)
{
    const MappedTypes::PersonImpl* self = static_cast<MappedTypes::PersonImpl*>(object_pointer);
    return self->GetFirstName().c_str();
}

MAPPEDTYPES_API void MAPPEDTYPES_API_CONVENTION mapped_types_person_set_first_name(void* object_pointer, const char* first_name)
{
    MappedTypes::PersonImpl* self = static_cast<MappedTypes::PersonImpl*>(object_pointer);
    self->SetFirstName(std::string(first_name));
}

MAPPEDTYPES_API const char* MAPPEDTYPES_API_CONVENTION mapped_types_person_get_second_name_const(void* object_pointer)
{
    const MappedTypes::PersonImpl* self = static_cast<MappedTypes::PersonImpl*>(object_pointer);
    return self->GetSecondName();
}

MAPPEDTYPES_API void MAPPEDTYPES_API_CONVENTION mapped_types_person_set_second_name(void* object_pointer, const char* second_name)
{
    MappedTypes::PersonImpl* self = static_cast<MappedTypes::PersonImpl*>(object_pointer);
    self->SetSecondName(second_name);
}

MAPPEDTYPES_API void* MAPPEDTYPES_API_CONVENTION mapped_types_person_copy(void* object_pointer)
{
    return new MappedTypes::PersonImpl(*static_cast<MappedTypes::PersonImpl*>(object_pointer));
}

MAPPEDTYPES_API void MAPPEDTYPES_API_CONVENTION mapped_types_person_delete(void* object_pointer)
{
    delete static_cast<MappedTypes::PersonImpl*>(object_pointer);
}

MAPPEDTYPES_API void* MAPPEDTYPES_API_CONVENTION mapped_types_device_default()
{
    return new MappedTypes::DeviceImpl();
}

MAPPEDTYPES_API const char* MAPPEDTYPES_API_CONVENTION mapped_types_device_get_name_const(void* object_pointer)
{
    const MappedTypes::DeviceImpl* self = static_cast<MappedTypes::DeviceImpl*>(object_pointer);
    return self->GetName().c_str();
}

MAPPEDTYPES_API void MAPPEDTYPES_API_CONVENTION mapped_types_device_set_name(void* object_pointer, const char* name)
{
    MappedTypes::DeviceImpl* self = static_cast<MappedTypes::DeviceImpl*>(object_pointer);
    self->SetName(std::string(name));
}

MAPPEDTYPES_API uint32_t MAPPEDTYPES_API_CONVENTION mapped_types_device_is_busy_const(void* object_pointer)
{
    const MappedTypes::DeviceImpl* self = static_cast<MappedTypes::DeviceImpl*>(object_pointer);
    return static_cast<uint32_t>(self->IsBusy());
}

MAPPEDTYPES_API void MAPPEDTYPES_API_CONVENTION mapped_types_device_set_busy(void* object_pointer, uint32_t busy)
{
    MappedTypes::DeviceImpl* self = static_cast<MappedTypes::DeviceImpl*>(object_pointer);
    self->SetBusy((busy ? true : false));
}

MAPPEDTYPES_API void* MAPPEDTYPES_API_CONVENTION mapped_types_device_copy(void* object_pointer)
{
    return new MappedTypes::DeviceImpl(*static_cast<MappedTypes::DeviceImpl*>(object_pointer));
}

MAPPEDTYPES_API void MAPPEDTYPES_API_CONVENTION mapped_types_device_delete(void* object_pointer)
{
    delete static_cast<MappedTypes::DeviceImpl*>(object_pointer);
}
