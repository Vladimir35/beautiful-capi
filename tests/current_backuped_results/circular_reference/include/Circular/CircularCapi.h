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

#ifndef CIRCULAR_CAPI_INCLUDED
#define CIRCULAR_CAPI_INCLUDED

#ifdef __cplusplus
    #define CIRCULAR_CAPI_PREFIX extern "C"
#else
    #define CIRCULAR_CAPI_PREFIX
#endif

#ifdef _WIN32
    #ifdef __GNUC__
        #define CIRCULAR_API CIRCULAR_CAPI_PREFIX __attribute__ ((dllimport))
        #define CIRCULAR_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define CIRCULAR_API CIRCULAR_CAPI_PREFIX __declspec(dllimport)
        #define CIRCULAR_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define CIRCULAR_API CIRCULAR_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define CIRCULAR_API CIRCULAR_CAPI_PREFIX
    #endif
    #if defined __i386__
        #define CIRCULAR_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define CIRCULAR_API_CONVENTION
    #endif
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define CIRCULAR_API CIRCULAR_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define CIRCULAR_API CIRCULAR_CAPI_PREFIX
    #endif
    #if defined __i386__
        #define CIRCULAR_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define CIRCULAR_API_CONVENTION
    #endif
#else
    #error "Unknown platform"
#endif

CIRCULAR_API void* CIRCULAR_API_CONVENTION circular_classa_default();
CIRCULAR_API void CIRCULAR_API_CONVENTION circular_classa_delete(void* object_pointer);
CIRCULAR_API void CIRCULAR_API_CONVENTION circular_classa_setb(void* object_pointer, void* value);
CIRCULAR_API void* CIRCULAR_API_CONVENTION circular_classa_getb(void* object_pointer);
CIRCULAR_API void* CIRCULAR_API_CONVENTION circular_classb_default();
CIRCULAR_API void CIRCULAR_API_CONVENTION circular_classb_delete(void* object_pointer);
CIRCULAR_API void CIRCULAR_API_CONVENTION circular_classb_seta(void* object_pointer, void* value);
CIRCULAR_API void* CIRCULAR_API_CONVENTION circular_classb_geta(void* object_pointer);

#endif /* CIRCULAR_CAPI_INCLUDED */

