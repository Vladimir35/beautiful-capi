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

#ifndef COMPC_CAPI_INCLUDED
#define COMPC_CAPI_INCLUDED

#include <stddef.h>

#ifdef __cplusplus
    #define COMPC_CAPI_PREFIX extern "C"
#else /* __cplusplus */
    #define COMPC_CAPI_PREFIX
#endif /* __cplusplus */

#ifdef _WIN32
    #ifdef __GNUC__
        #define COMPC_API COMPC_CAPI_PREFIX __attribute__ ((dllimport))
        #define COMPC_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define COMPC_API COMPC_CAPI_PREFIX __declspec(dllimport)
        #define COMPC_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define COMPC_API COMPC_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define COMPC_API COMPC_CAPI_PREFIX
    #endif
    #ifdef __i386__
        #define COMPC_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define COMPC_API_CONVENTION
    #endif /* __i386__ */
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define COMPC_API COMPC_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define COMPC_API COMPC_CAPI_PREFIX
    #endif
    #ifdef __i386__
        #define COMPC_API_CONVENTION __attribute__ ((cdecl))
    #else /* __i386__ */
        #define COMPC_API_CONVENTION
    #endif /* __i386__ */
#else
    #error "Unknown platform"
#endif

#define COMPC_MAJOR_VERSION 1
#define COMPC_MINOR_VERSION 0
#define COMPC_PATCH_VERSION 0

#ifdef __cplusplus
    #ifdef _MSC_VER
        #if _MSC_VER >= 1900
            #define COMPC_NOEXCEPT noexcept
        #else /* _MSC_VER >= 1900 */
            #define COMPC_NOEXCEPT
        #endif /* _MSC_VER >= 1900 */
        #if _MSC_VER >= 1600
            #define COMPC_CPP_COMPILER_HAS_RVALUE_REFERENCES
        #endif /* _MSC_VER >= 1600 */
        #if _MSC_VER >= 1800
            #define COMPC_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
        #endif /* _MSC_VER >= 1800 */
    #else /* _MSC_VER */
        #if __cplusplus >= 201103L
            #define COMPC_NOEXCEPT noexcept
            #define COMPC_CPP_COMPILER_HAS_RVALUE_REFERENCES
            #define COMPC_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
        #else /* __cplusplus >= 201103L */
            #define COMPC_NOEXCEPT
        #endif /* __cplusplus >= 201103L */
    #endif /* _MSC_VER */
#endif /* __cplusplus */

#ifndef COMPC_CAPI_USE_DYNAMIC_LOADER

    COMPC_API int COMPC_API_CONVENTION comp_c_get_major_version();
    COMPC_API int COMPC_API_CONVENTION comp_c_get_minor_version();
    COMPC_API int COMPC_API_CONVENTION comp_c_get_patch_version();
    COMPC_API void* COMPC_API_CONVENTION comp_c_component_c_default();
    COMPC_API void* COMPC_API_CONVENTION comp_c_component_c_get_a_const(void* object_pointer);
    COMPC_API void COMPC_API_CONVENTION comp_c_component_c_set_a(void* object_pointer, void* a);
    COMPC_API void* COMPC_API_CONVENTION comp_c_component_c_get_b_const(void* object_pointer);
    COMPC_API void COMPC_API_CONVENTION comp_c_component_c_set_b(void* object_pointer, void* b);
    COMPC_API void* COMPC_API_CONVENTION comp_c_component_c_get_c_const(void* object_pointer);
    COMPC_API void COMPC_API_CONVENTION comp_c_component_c_set_c(void* object_pointer, void* c);
    COMPC_API void COMPC_API_CONVENTION comp_c_component_c_add_ref(void* object_pointer);
    COMPC_API void COMPC_API_CONVENTION comp_c_component_c_release(void* object_pointer);

    #ifdef __cplusplus

    #include <stdexcept>
    #include <sstream>

    namespace CompC
    {
        class Initialization
        {
        public:
            Initialization()
            {
                const int major_version = comp_c_get_major_version();
                const int minor_version = comp_c_get_minor_version();
                const int patch_version = comp_c_get_patch_version();
                if (major_version != COMPC_MAJOR_VERSION || minor_version != COMPC_MINOR_VERSION || patch_version != COMPC_PATCH_VERSION)
                {
                    std::stringstream error_message;
                    error_message << "Incorrect version of library. ";
                    error_message << "Expected version is " << COMPC_MAJOR_VERSION << "." << COMPC_MINOR_VERSION << "." << COMPC_PATCH_VERSION << ". ";
                    error_message << "Found version is " << major_version << "." << minor_version << "." << patch_version << ".";
                    throw std::runtime_error(error_message.str());
                }
            }
        };
    }

    #endif /* __cplusplus */

#else /* COMPC_CAPI_USE_DYNAMIC_LOADER */

    typedef int (COMPC_API_CONVENTION *comp_c_get_major_version_function_type)();
    typedef int (COMPC_API_CONVENTION *comp_c_get_minor_version_function_type)();
    typedef int (COMPC_API_CONVENTION *comp_c_get_patch_version_function_type)();
    typedef void* (COMPC_API_CONVENTION *comp_c_component_c_default_function_type)();
    typedef void* (COMPC_API_CONVENTION *comp_c_component_c_get_a_const_function_type)(void* object_pointer);
    typedef void (COMPC_API_CONVENTION *comp_c_component_c_set_a_function_type)(void* object_pointer, void* a);
    typedef void* (COMPC_API_CONVENTION *comp_c_component_c_get_b_const_function_type)(void* object_pointer);
    typedef void (COMPC_API_CONVENTION *comp_c_component_c_set_b_function_type)(void* object_pointer, void* b);
    typedef void* (COMPC_API_CONVENTION *comp_c_component_c_get_c_const_function_type)(void* object_pointer);
    typedef void (COMPC_API_CONVENTION *comp_c_component_c_set_c_function_type)(void* object_pointer, void* c);
    typedef void (COMPC_API_CONVENTION *comp_c_component_c_add_ref_function_type)(void* object_pointer);
    typedef void (COMPC_API_CONVENTION *comp_c_component_c_release_function_type)(void* object_pointer);

    #ifdef COMPC_CAPI_DEFINE_FUNCTION_POINTERS

        #ifdef comp_c_get_major_version_define_function_pointer_var
            comp_c_get_major_version_define_function_pointer_var
        #else
            comp_c_get_major_version_function_type comp_c_get_major_version = 0;
        #endif
        #ifdef comp_c_get_minor_version_define_function_pointer_var
            comp_c_get_minor_version_define_function_pointer_var
        #else
            comp_c_get_minor_version_function_type comp_c_get_minor_version = 0;
        #endif
        #ifdef comp_c_get_patch_version_define_function_pointer_var
            comp_c_get_patch_version_define_function_pointer_var
        #else
            comp_c_get_patch_version_function_type comp_c_get_patch_version = 0;
        #endif
        #ifdef comp_c_component_c_default_define_function_pointer_var
            comp_c_component_c_default_define_function_pointer_var
        #else
            comp_c_component_c_default_function_type comp_c_component_c_default = 0;
        #endif
        #ifdef comp_c_component_c_get_a_const_define_function_pointer_var
            comp_c_component_c_get_a_const_define_function_pointer_var
        #else
            comp_c_component_c_get_a_const_function_type comp_c_component_c_get_a_const = 0;
        #endif
        #ifdef comp_c_component_c_set_a_define_function_pointer_var
            comp_c_component_c_set_a_define_function_pointer_var
        #else
            comp_c_component_c_set_a_function_type comp_c_component_c_set_a = 0;
        #endif
        #ifdef comp_c_component_c_get_b_const_define_function_pointer_var
            comp_c_component_c_get_b_const_define_function_pointer_var
        #else
            comp_c_component_c_get_b_const_function_type comp_c_component_c_get_b_const = 0;
        #endif
        #ifdef comp_c_component_c_set_b_define_function_pointer_var
            comp_c_component_c_set_b_define_function_pointer_var
        #else
            comp_c_component_c_set_b_function_type comp_c_component_c_set_b = 0;
        #endif
        #ifdef comp_c_component_c_get_c_const_define_function_pointer_var
            comp_c_component_c_get_c_const_define_function_pointer_var
        #else
            comp_c_component_c_get_c_const_function_type comp_c_component_c_get_c_const = 0;
        #endif
        #ifdef comp_c_component_c_set_c_define_function_pointer_var
            comp_c_component_c_set_c_define_function_pointer_var
        #else
            comp_c_component_c_set_c_function_type comp_c_component_c_set_c = 0;
        #endif
        #ifdef comp_c_component_c_add_ref_define_function_pointer_var
            comp_c_component_c_add_ref_define_function_pointer_var
        #else
            comp_c_component_c_add_ref_function_type comp_c_component_c_add_ref = 0;
        #endif
        #ifdef comp_c_component_c_release_define_function_pointer_var
            comp_c_component_c_release_define_function_pointer_var
        #else
            comp_c_component_c_release_function_type comp_c_component_c_release = 0;
        #endif

    #else /* COMPC_CAPI_DEFINE_FUNCTION_POINTERS */

        extern comp_c_get_major_version_function_type comp_c_get_major_version;
        extern comp_c_get_minor_version_function_type comp_c_get_minor_version;
        extern comp_c_get_patch_version_function_type comp_c_get_patch_version;
        extern comp_c_component_c_default_function_type comp_c_component_c_default;
        extern comp_c_component_c_get_a_const_function_type comp_c_component_c_get_a_const;
        extern comp_c_component_c_set_a_function_type comp_c_component_c_set_a;
        extern comp_c_component_c_get_b_const_function_type comp_c_component_c_get_b_const;
        extern comp_c_component_c_set_b_function_type comp_c_component_c_set_b;
        extern comp_c_component_c_get_c_const_function_type comp_c_component_c_get_c_const;
        extern comp_c_component_c_set_c_function_type comp_c_component_c_set_c;
        extern comp_c_component_c_add_ref_function_type comp_c_component_c_add_ref;
        extern comp_c_component_c_release_function_type comp_c_component_c_release;

    #endif /* COMPC_CAPI_DEFINE_FUNCTION_POINTERS */

    #ifdef __cplusplus

    #include <stdexcept>
    #include <sstream>

    #ifdef _WIN32
        #include <Windows.h>
    #else /* _WIN32 */
        #include <dlfcn.h>
    #endif /* _WIN32 */

    namespace CompC
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
                #ifdef comp_c_get_major_version_load_function_call
                    comp_c_get_major_version_load_function_call
                #else /* comp_c_get_major_version_load_function_call */
                    load_function<comp_c_get_major_version_function_type>(comp_c_get_major_version, "comp_c_get_major_version");
                #endif /* comp_c_get_major_version_load_function_call */
                #ifdef comp_c_get_minor_version_load_function_call
                    comp_c_get_minor_version_load_function_call
                #else /* comp_c_get_minor_version_load_function_call */
                    load_function<comp_c_get_minor_version_function_type>(comp_c_get_minor_version, "comp_c_get_minor_version");
                #endif /* comp_c_get_minor_version_load_function_call */
                #ifdef comp_c_get_patch_version_load_function_call
                    comp_c_get_patch_version_load_function_call
                #else /* comp_c_get_patch_version_load_function_call */
                    load_function<comp_c_get_patch_version_function_type>(comp_c_get_patch_version, "comp_c_get_patch_version");
                #endif /* comp_c_get_patch_version_load_function_call */
                #ifdef comp_c_component_c_default_load_function_call
                    comp_c_component_c_default_load_function_call
                #else /* comp_c_component_c_default_load_function_call */
                    load_function<comp_c_component_c_default_function_type>(comp_c_component_c_default, "comp_c_component_c_default");
                #endif /* comp_c_component_c_default_load_function_call */
                #ifdef comp_c_component_c_get_a_const_load_function_call
                    comp_c_component_c_get_a_const_load_function_call
                #else /* comp_c_component_c_get_a_const_load_function_call */
                    load_function<comp_c_component_c_get_a_const_function_type>(comp_c_component_c_get_a_const, "comp_c_component_c_get_a_const");
                #endif /* comp_c_component_c_get_a_const_load_function_call */
                #ifdef comp_c_component_c_set_a_load_function_call
                    comp_c_component_c_set_a_load_function_call
                #else /* comp_c_component_c_set_a_load_function_call */
                    load_function<comp_c_component_c_set_a_function_type>(comp_c_component_c_set_a, "comp_c_component_c_set_a");
                #endif /* comp_c_component_c_set_a_load_function_call */
                #ifdef comp_c_component_c_get_b_const_load_function_call
                    comp_c_component_c_get_b_const_load_function_call
                #else /* comp_c_component_c_get_b_const_load_function_call */
                    load_function<comp_c_component_c_get_b_const_function_type>(comp_c_component_c_get_b_const, "comp_c_component_c_get_b_const");
                #endif /* comp_c_component_c_get_b_const_load_function_call */
                #ifdef comp_c_component_c_set_b_load_function_call
                    comp_c_component_c_set_b_load_function_call
                #else /* comp_c_component_c_set_b_load_function_call */
                    load_function<comp_c_component_c_set_b_function_type>(comp_c_component_c_set_b, "comp_c_component_c_set_b");
                #endif /* comp_c_component_c_set_b_load_function_call */
                #ifdef comp_c_component_c_get_c_const_load_function_call
                    comp_c_component_c_get_c_const_load_function_call
                #else /* comp_c_component_c_get_c_const_load_function_call */
                    load_function<comp_c_component_c_get_c_const_function_type>(comp_c_component_c_get_c_const, "comp_c_component_c_get_c_const");
                #endif /* comp_c_component_c_get_c_const_load_function_call */
                #ifdef comp_c_component_c_set_c_load_function_call
                    comp_c_component_c_set_c_load_function_call
                #else /* comp_c_component_c_set_c_load_function_call */
                    load_function<comp_c_component_c_set_c_function_type>(comp_c_component_c_set_c, "comp_c_component_c_set_c");
                #endif /* comp_c_component_c_set_c_load_function_call */
                #ifdef comp_c_component_c_add_ref_load_function_call
                    comp_c_component_c_add_ref_load_function_call
                #else /* comp_c_component_c_add_ref_load_function_call */
                    load_function<comp_c_component_c_add_ref_function_type>(comp_c_component_c_add_ref, "comp_c_component_c_add_ref");
                #endif /* comp_c_component_c_add_ref_load_function_call */
                #ifdef comp_c_component_c_release_load_function_call
                    comp_c_component_c_release_load_function_call
                #else /* comp_c_component_c_release_load_function_call */
                    load_function<comp_c_component_c_release_function_type>(comp_c_component_c_release, "comp_c_component_c_release");
                #endif /* comp_c_component_c_release_load_function_call */
                const int major_version = comp_c_get_major_version();
                const int minor_version = comp_c_get_minor_version();
                const int patch_version = comp_c_get_patch_version();
                if (major_version != COMPC_MAJOR_VERSION || minor_version != COMPC_MINOR_VERSION || patch_version != COMPC_PATCH_VERSION)
                {
                    std::stringstream error_message;
                    error_message << "Incorrect version of " << shared_library_name << " library. ";
                    error_message << "Expected version is " << COMPC_MAJOR_VERSION << "." << COMPC_MINOR_VERSION << "." << COMPC_PATCH_VERSION << ". ";
                    error_message << "Found version is " << major_version << "." << minor_version << "." << patch_version << ".";
                    throw std::runtime_error(error_message.str());
                }
            }

            Initialization();
            Initialization(const Initialization&);
            #ifdef COMPC_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE
                Initialization(Initialization &&) = delete;
            #endif /* COMPC_CPP_COMPILER_HAS_MOVE_CONSTRUCTOR_DELETE */
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
                #ifdef comp_c_get_major_version_zero_function_pointer
                    comp_c_get_major_version_zero_function_pointer
                #else /* comp_c_get_major_version_zero_function_pointer */
                    comp_c_get_major_version = 0;
                #endif /* comp_c_get_major_version_zero_function_pointer */
                #ifdef comp_c_get_minor_version_zero_function_pointer
                    comp_c_get_minor_version_zero_function_pointer
                #else /* comp_c_get_minor_version_zero_function_pointer */
                    comp_c_get_minor_version = 0;
                #endif /* comp_c_get_minor_version_zero_function_pointer */
                #ifdef comp_c_get_patch_version_zero_function_pointer
                    comp_c_get_patch_version_zero_function_pointer
                #else /* comp_c_get_patch_version_zero_function_pointer */
                    comp_c_get_patch_version = 0;
                #endif /* comp_c_get_patch_version_zero_function_pointer */
                #ifdef comp_c_component_c_default_zero_function_pointer
                    comp_c_component_c_default_zero_function_pointer
                #else /* comp_c_component_c_default_zero_function_pointer */
                    comp_c_component_c_default = 0;
                #endif /* comp_c_component_c_default_zero_function_pointer */
                #ifdef comp_c_component_c_get_a_const_zero_function_pointer
                    comp_c_component_c_get_a_const_zero_function_pointer
                #else /* comp_c_component_c_get_a_const_zero_function_pointer */
                    comp_c_component_c_get_a_const = 0;
                #endif /* comp_c_component_c_get_a_const_zero_function_pointer */
                #ifdef comp_c_component_c_set_a_zero_function_pointer
                    comp_c_component_c_set_a_zero_function_pointer
                #else /* comp_c_component_c_set_a_zero_function_pointer */
                    comp_c_component_c_set_a = 0;
                #endif /* comp_c_component_c_set_a_zero_function_pointer */
                #ifdef comp_c_component_c_get_b_const_zero_function_pointer
                    comp_c_component_c_get_b_const_zero_function_pointer
                #else /* comp_c_component_c_get_b_const_zero_function_pointer */
                    comp_c_component_c_get_b_const = 0;
                #endif /* comp_c_component_c_get_b_const_zero_function_pointer */
                #ifdef comp_c_component_c_set_b_zero_function_pointer
                    comp_c_component_c_set_b_zero_function_pointer
                #else /* comp_c_component_c_set_b_zero_function_pointer */
                    comp_c_component_c_set_b = 0;
                #endif /* comp_c_component_c_set_b_zero_function_pointer */
                #ifdef comp_c_component_c_get_c_const_zero_function_pointer
                    comp_c_component_c_get_c_const_zero_function_pointer
                #else /* comp_c_component_c_get_c_const_zero_function_pointer */
                    comp_c_component_c_get_c_const = 0;
                #endif /* comp_c_component_c_get_c_const_zero_function_pointer */
                #ifdef comp_c_component_c_set_c_zero_function_pointer
                    comp_c_component_c_set_c_zero_function_pointer
                #else /* comp_c_component_c_set_c_zero_function_pointer */
                    comp_c_component_c_set_c = 0;
                #endif /* comp_c_component_c_set_c_zero_function_pointer */
                #ifdef comp_c_component_c_add_ref_zero_function_pointer
                    comp_c_component_c_add_ref_zero_function_pointer
                #else /* comp_c_component_c_add_ref_zero_function_pointer */
                    comp_c_component_c_add_ref = 0;
                #endif /* comp_c_component_c_add_ref_zero_function_pointer */
                #ifdef comp_c_component_c_release_zero_function_pointer
                    comp_c_component_c_release_zero_function_pointer
                #else /* comp_c_component_c_release_zero_function_pointer */
                    comp_c_component_c_release = 0;
                #endif /* comp_c_component_c_release_zero_function_pointer */
            }
        };
    }

    #endif /* __cplusplus */

#endif /* COMPC_CAPI_USE_DYNAMIC_LOADER */

#endif /* COMPC_CAPI_INCLUDED */

