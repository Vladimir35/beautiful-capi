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

#ifndef PRINTERNS_CAPI_INCLUDED
#define PRINTERNS_CAPI_INCLUDED

#include <stddef.h>

#ifdef __cplusplus
    #define PRINTERNS_CAPI_PREFIX extern "C"
#else /* __cplusplus */
    #define PRINTERNS_CAPI_PREFIX
#endif /* __cplusplus */

#ifdef _WIN32
    #ifdef __GNUC__
        #define PRINTERNS_API PRINTERNS_CAPI_PREFIX __attribute__ ((dllimport))
        #define PRINTERNS_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define PRINTERNS_API PRINTERNS_CAPI_PREFIX __declspec(dllimport)
        #define PRINTERNS_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define PRINTERNS_API PRINTERNS_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define PRINTERNS_API PRINTERNS_CAPI_PREFIX
    #endif
    #ifdef __i386__
        #define PRINTERNS_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define PRINTERNS_API_CONVENTION
    #endif /* __i386__ */
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define PRINTERNS_API PRINTERNS_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define PRINTERNS_API PRINTERNS_CAPI_PREFIX
    #endif
    #ifdef __i386__
        #define PRINTERNS_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define PRINTERNS_API_CONVENTION
    #endif /* __i386__ */
#else
    #error "Unknown platform"
#endif

#define PRINTERNS_MAJOR_VERSION 1
#define PRINTERNS_MINOR_VERSION 0
#define PRINTERNS_PATCH_VERSION 0

#ifdef __cplusplus
    #ifdef _MSC_VER
        #if _MSC_VER >= 1900
            #define PRINTERNS_NOEXCEPT noexcept
        #else /* _MSC_VER >= 1900 */
            #define PRINTERNS_NOEXCEPT
        #endif /* _MSC_VER >= 1900 */
        #if _MSC_VER >= 1600
            #define PRINTERNS_CPP_COMPILER_HAS_RVALUE_REFERENCES
        #endif /* _MSC_VER >= 1600 */
        #if _MSC_VER >= 1800
            #define PRINTERNS_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
        #endif /* _MSC_VER >= 1800 */
    #else /* _MSC_VER */
        #if __cplusplus >= 201103L
            #define PRINTERNS_NOEXCEPT noexcept
            #define PRINTERNS_CPP_COMPILER_HAS_RVALUE_REFERENCES
            #define PRINTERNS_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
        #else /* __cplusplus >= 201103L */
            #define PRINTERNS_NOEXCEPT
        #endif /* __cplusplus >= 201103L */
    #endif /* _MSC_VER */
#endif /* __cplusplus */

#ifndef PRINTERNS_CAPI_USE_DYNAMIC_LOADER

    PRINTERNS_API int PRINTERNS_API_CONVENTION printer_ns_get_major_version();
    PRINTERNS_API int PRINTERNS_API_CONVENTION printer_ns_get_minor_version();
    PRINTERNS_API int PRINTERNS_API_CONVENTION printer_ns_get_patch_version();
    PRINTERNS_API void* PRINTERNS_API_CONVENTION printer_ns_printer_default();
    PRINTERNS_API void PRINTERNS_API_CONVENTION printer_ns_printer_show(void* object_pointer, void* name);
    PRINTERNS_API void PRINTERNS_API_CONVENTION printer_ns_printer_show_1(void* object_pointer, void* person);
    PRINTERNS_API void PRINTERNS_API_CONVENTION printer_ns_printer_show_2(void* object_pointer, void* address);
    PRINTERNS_API void* PRINTERNS_API_CONVENTION printer_ns_printer_get_comp_c_const(void* object_pointer);
    PRINTERNS_API void* PRINTERNS_API_CONVENTION printer_ns_printer_copy(void* object_pointer);
    PRINTERNS_API void PRINTERNS_API_CONVENTION printer_ns_printer_delete(void* object_pointer);

    #ifdef __cplusplus

    #include <stdexcept>
    #include <sstream>

    namespace PrinterNS
    {
        class Initialization
        {
        public:
            Initialization()
            {
                const int major_version = printer_ns_get_major_version();
                const int minor_version = printer_ns_get_minor_version();
                const int patch_version = printer_ns_get_patch_version();
                if (major_version != PRINTERNS_MAJOR_VERSION || minor_version != PRINTERNS_MINOR_VERSION || patch_version != PRINTERNS_PATCH_VERSION)
                {
                    std::stringstream error_message;
                    error_message << "Incorrect version of library. ";
                    error_message << "Expected version is " << PRINTERNS_MAJOR_VERSION << "." << PRINTERNS_MINOR_VERSION << "." << PRINTERNS_PATCH_VERSION << ". ";
                    error_message << "Found version is " << major_version << "." << minor_version << "." << patch_version << ".";
                    throw std::runtime_error(error_message.str());
                }
            }
        };
    }

    #endif /* __cplusplus */

#else /* PRINTERNS_CAPI_USE_DYNAMIC_LOADER */

    typedef int (PRINTERNS_API_CONVENTION *printer_ns_get_major_version_function_type)();
    typedef int (PRINTERNS_API_CONVENTION *printer_ns_get_minor_version_function_type)();
    typedef int (PRINTERNS_API_CONVENTION *printer_ns_get_patch_version_function_type)();
    typedef void* (PRINTERNS_API_CONVENTION *printer_ns_printer_default_function_type)();
    typedef void (PRINTERNS_API_CONVENTION *printer_ns_printer_show_function_type)(void* object_pointer, void* name);
    typedef void (PRINTERNS_API_CONVENTION *printer_ns_printer_show_1_function_type)(void* object_pointer, void* person);
    typedef void (PRINTERNS_API_CONVENTION *printer_ns_printer_show_2_function_type)(void* object_pointer, void* address);
    typedef void* (PRINTERNS_API_CONVENTION *printer_ns_printer_get_comp_c_const_function_type)(void* object_pointer);
    typedef void* (PRINTERNS_API_CONVENTION *printer_ns_printer_copy_function_type)(void* object_pointer);
    typedef void (PRINTERNS_API_CONVENTION *printer_ns_printer_delete_function_type)(void* object_pointer);

    #ifdef PRINTERNS_CAPI_DEFINE_FUNCTION_POINTERS

        #ifdef printer_ns_get_major_version_define_function_pointer_var
            printer_ns_get_major_version_define_function_pointer_var
        #else
            printer_ns_get_major_version_function_type printer_ns_get_major_version = 0;
        #endif
        #ifdef printer_ns_get_minor_version_define_function_pointer_var
            printer_ns_get_minor_version_define_function_pointer_var
        #else
            printer_ns_get_minor_version_function_type printer_ns_get_minor_version = 0;
        #endif
        #ifdef printer_ns_get_patch_version_define_function_pointer_var
            printer_ns_get_patch_version_define_function_pointer_var
        #else
            printer_ns_get_patch_version_function_type printer_ns_get_patch_version = 0;
        #endif
        #ifdef printer_ns_printer_default_define_function_pointer_var
            printer_ns_printer_default_define_function_pointer_var
        #else
            printer_ns_printer_default_function_type printer_ns_printer_default = 0;
        #endif
        #ifdef printer_ns_printer_show_define_function_pointer_var
            printer_ns_printer_show_define_function_pointer_var
        #else
            printer_ns_printer_show_function_type printer_ns_printer_show = 0;
        #endif
        #ifdef printer_ns_printer_show_1_define_function_pointer_var
            printer_ns_printer_show_1_define_function_pointer_var
        #else
            printer_ns_printer_show_1_function_type printer_ns_printer_show_1 = 0;
        #endif
        #ifdef printer_ns_printer_show_2_define_function_pointer_var
            printer_ns_printer_show_2_define_function_pointer_var
        #else
            printer_ns_printer_show_2_function_type printer_ns_printer_show_2 = 0;
        #endif
        #ifdef printer_ns_printer_get_comp_c_const_define_function_pointer_var
            printer_ns_printer_get_comp_c_const_define_function_pointer_var
        #else
            printer_ns_printer_get_comp_c_const_function_type printer_ns_printer_get_comp_c_const = 0;
        #endif
        #ifdef printer_ns_printer_copy_define_function_pointer_var
            printer_ns_printer_copy_define_function_pointer_var
        #else
            printer_ns_printer_copy_function_type printer_ns_printer_copy = 0;
        #endif
        #ifdef printer_ns_printer_delete_define_function_pointer_var
            printer_ns_printer_delete_define_function_pointer_var
        #else
            printer_ns_printer_delete_function_type printer_ns_printer_delete = 0;
        #endif

    #else /* PRINTERNS_CAPI_DEFINE_FUNCTION_POINTERS */

        extern printer_ns_get_major_version_function_type printer_ns_get_major_version;
        extern printer_ns_get_minor_version_function_type printer_ns_get_minor_version;
        extern printer_ns_get_patch_version_function_type printer_ns_get_patch_version;
        extern printer_ns_printer_default_function_type printer_ns_printer_default;
        extern printer_ns_printer_show_function_type printer_ns_printer_show;
        extern printer_ns_printer_show_1_function_type printer_ns_printer_show_1;
        extern printer_ns_printer_show_2_function_type printer_ns_printer_show_2;
        extern printer_ns_printer_get_comp_c_const_function_type printer_ns_printer_get_comp_c_const;
        extern printer_ns_printer_copy_function_type printer_ns_printer_copy;
        extern printer_ns_printer_delete_function_type printer_ns_printer_delete;

    #endif /* PRINTERNS_CAPI_DEFINE_FUNCTION_POINTERS */

    #ifdef __cplusplus

    #include <stdexcept>
    #include <sstream>

    #ifdef _WIN32
        #include <Windows.h>
    #else /* _WIN32 */
        #include <dlfcn.h>
    #endif /* _WIN32 */

    namespace PrinterNS
    {
        class Initialization
        {
            #ifdef _WIN32
                HINSTANCE handle;
            #else /* _WIN32 */
                void* handle;
            #endif /* _WIN32 */

            template<class FunctionPointerType>
            void load_function(FunctionPointerType& to_init, const char* name)
            {
                #ifdef _WIN32
                    to_init = reinterpret_cast<FunctionPointerType>(GetProcAddress(handle, name));
                #else /* _WIN32 */
                    to_init = reinterpret_cast<FunctionPointerType>(dlsym(handle, name));
                #endif /* _WIN32 */
                if (!to_init)
                {
                    std::stringstream error_message;
                    error_message << "Can't obtain function " << name;
                    throw std::runtime_error(error_message.str());
                }
            }

            void load_module(const char* shared_library_name)
            {
                if (!shared_library_name) throw std::runtime_error("Null library name was passed");
                #ifdef _WIN32
                    handle = LoadLibraryA(shared_library_name);
                #else /* _WIN32 */
                    handle = dlopen(shared_library_name, RTLD_NOW);
                #endif /* _WIN32 */
                if (!handle)
                {
                    std::stringstream error_message;
                    error_message << "Can't load shared library " << shared_library_name;
                    throw std::runtime_error(error_message.str());
                }
                #ifdef printer_ns_get_major_version_load_function_call
                    printer_ns_get_major_version_load_function_call
                #else /* printer_ns_get_major_version_load_function_call */
                    load_function<printer_ns_get_major_version_function_type>(printer_ns_get_major_version, "printer_ns_get_major_version");
                #endif /* printer_ns_get_major_version_load_function_call */
                #ifdef printer_ns_get_minor_version_load_function_call
                    printer_ns_get_minor_version_load_function_call
                #else /* printer_ns_get_minor_version_load_function_call */
                    load_function<printer_ns_get_minor_version_function_type>(printer_ns_get_minor_version, "printer_ns_get_minor_version");
                #endif /* printer_ns_get_minor_version_load_function_call */
                #ifdef printer_ns_get_patch_version_load_function_call
                    printer_ns_get_patch_version_load_function_call
                #else /* printer_ns_get_patch_version_load_function_call */
                    load_function<printer_ns_get_patch_version_function_type>(printer_ns_get_patch_version, "printer_ns_get_patch_version");
                #endif /* printer_ns_get_patch_version_load_function_call */
                #ifdef printer_ns_printer_default_load_function_call
                    printer_ns_printer_default_load_function_call
                #else /* printer_ns_printer_default_load_function_call */
                    load_function<printer_ns_printer_default_function_type>(printer_ns_printer_default, "printer_ns_printer_default");
                #endif /* printer_ns_printer_default_load_function_call */
                #ifdef printer_ns_printer_show_load_function_call
                    printer_ns_printer_show_load_function_call
                #else /* printer_ns_printer_show_load_function_call */
                    load_function<printer_ns_printer_show_function_type>(printer_ns_printer_show, "printer_ns_printer_show");
                #endif /* printer_ns_printer_show_load_function_call */
                #ifdef printer_ns_printer_show_1_load_function_call
                    printer_ns_printer_show_1_load_function_call
                #else /* printer_ns_printer_show_1_load_function_call */
                    load_function<printer_ns_printer_show_1_function_type>(printer_ns_printer_show_1, "printer_ns_printer_show_1");
                #endif /* printer_ns_printer_show_1_load_function_call */
                #ifdef printer_ns_printer_show_2_load_function_call
                    printer_ns_printer_show_2_load_function_call
                #else /* printer_ns_printer_show_2_load_function_call */
                    load_function<printer_ns_printer_show_2_function_type>(printer_ns_printer_show_2, "printer_ns_printer_show_2");
                #endif /* printer_ns_printer_show_2_load_function_call */
                #ifdef printer_ns_printer_get_comp_c_const_load_function_call
                    printer_ns_printer_get_comp_c_const_load_function_call
                #else /* printer_ns_printer_get_comp_c_const_load_function_call */
                    load_function<printer_ns_printer_get_comp_c_const_function_type>(printer_ns_printer_get_comp_c_const, "printer_ns_printer_get_comp_c_const");
                #endif /* printer_ns_printer_get_comp_c_const_load_function_call */
                #ifdef printer_ns_printer_copy_load_function_call
                    printer_ns_printer_copy_load_function_call
                #else /* printer_ns_printer_copy_load_function_call */
                    load_function<printer_ns_printer_copy_function_type>(printer_ns_printer_copy, "printer_ns_printer_copy");
                #endif /* printer_ns_printer_copy_load_function_call */
                #ifdef printer_ns_printer_delete_load_function_call
                    printer_ns_printer_delete_load_function_call
                #else /* printer_ns_printer_delete_load_function_call */
                    load_function<printer_ns_printer_delete_function_type>(printer_ns_printer_delete, "printer_ns_printer_delete");
                #endif /* printer_ns_printer_delete_load_function_call */
                const int major_version = printer_ns_get_major_version();
                const int minor_version = printer_ns_get_minor_version();
                const int patch_version = printer_ns_get_patch_version();
                if (major_version != PRINTERNS_MAJOR_VERSION || minor_version != PRINTERNS_MINOR_VERSION || patch_version != PRINTERNS_PATCH_VERSION)
                {
                    std::stringstream error_message;
                    error_message << "Incorrect version of " << shared_library_name << " library. ";
                    error_message << "Expected version is " << PRINTERNS_MAJOR_VERSION << "." << PRINTERNS_MINOR_VERSION << "." << PRINTERNS_PATCH_VERSION << ". ";
                    error_message << "Found version is " << major_version << "." << minor_version << "." << patch_version << ".";
                    throw std::runtime_error(error_message.str());
                }
            }

            Initialization();
            Initialization(const Initialization&);
            #ifdef PRINTERNS_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
                Initialization(Initialization &&) = delete;
            #endif /* PRINTERNS_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE */
        public:
            Initialization(const char* shared_library_name)
            {
                load_module(shared_library_name);
            }
            ~Initialization()
            {
                #ifdef _WIN32
                    FreeLibrary(handle);
                #else /* _WIN32 */
                    dlclose(handle);
                #endif /* _WIN32 */
                #ifdef printer_ns_get_major_version_zero_function_pointer
                    printer_ns_get_major_version_zero_function_pointer
                #else /* printer_ns_get_major_version_zero_function_pointer */
                    printer_ns_get_major_version = 0;
                #endif /* printer_ns_get_major_version_zero_function_pointer */
                #ifdef printer_ns_get_minor_version_zero_function_pointer
                    printer_ns_get_minor_version_zero_function_pointer
                #else /* printer_ns_get_minor_version_zero_function_pointer */
                    printer_ns_get_minor_version = 0;
                #endif /* printer_ns_get_minor_version_zero_function_pointer */
                #ifdef printer_ns_get_patch_version_zero_function_pointer
                    printer_ns_get_patch_version_zero_function_pointer
                #else /* printer_ns_get_patch_version_zero_function_pointer */
                    printer_ns_get_patch_version = 0;
                #endif /* printer_ns_get_patch_version_zero_function_pointer */
                #ifdef printer_ns_printer_default_zero_function_pointer
                    printer_ns_printer_default_zero_function_pointer
                #else /* printer_ns_printer_default_zero_function_pointer */
                    printer_ns_printer_default = 0;
                #endif /* printer_ns_printer_default_zero_function_pointer */
                #ifdef printer_ns_printer_show_zero_function_pointer
                    printer_ns_printer_show_zero_function_pointer
                #else /* printer_ns_printer_show_zero_function_pointer */
                    printer_ns_printer_show = 0;
                #endif /* printer_ns_printer_show_zero_function_pointer */
                #ifdef printer_ns_printer_show_1_zero_function_pointer
                    printer_ns_printer_show_1_zero_function_pointer
                #else /* printer_ns_printer_show_1_zero_function_pointer */
                    printer_ns_printer_show_1 = 0;
                #endif /* printer_ns_printer_show_1_zero_function_pointer */
                #ifdef printer_ns_printer_show_2_zero_function_pointer
                    printer_ns_printer_show_2_zero_function_pointer
                #else /* printer_ns_printer_show_2_zero_function_pointer */
                    printer_ns_printer_show_2 = 0;
                #endif /* printer_ns_printer_show_2_zero_function_pointer */
                #ifdef printer_ns_printer_get_comp_c_const_zero_function_pointer
                    printer_ns_printer_get_comp_c_const_zero_function_pointer
                #else /* printer_ns_printer_get_comp_c_const_zero_function_pointer */
                    printer_ns_printer_get_comp_c_const = 0;
                #endif /* printer_ns_printer_get_comp_c_const_zero_function_pointer */
                #ifdef printer_ns_printer_copy_zero_function_pointer
                    printer_ns_printer_copy_zero_function_pointer
                #else /* printer_ns_printer_copy_zero_function_pointer */
                    printer_ns_printer_copy = 0;
                #endif /* printer_ns_printer_copy_zero_function_pointer */
                #ifdef printer_ns_printer_delete_zero_function_pointer
                    printer_ns_printer_delete_zero_function_pointer
                #else /* printer_ns_printer_delete_zero_function_pointer */
                    printer_ns_printer_delete = 0;
                #endif /* printer_ns_printer_delete_zero_function_pointer */
            }
        };
    }

    #endif /* __cplusplus */

#endif /* PRINTERNS_CAPI_USE_DYNAMIC_LOADER */

#endif /* PRINTERNS_CAPI_INCLUDED */

