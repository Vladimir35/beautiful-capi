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

#ifndef BEAUTIFUL_CAPI_TEST_FORWARD_HOLDER_INCLUDED
#define BEAUTIFUL_CAPI_TEST_FORWARD_HOLDER_INCLUDED

#ifdef __cplusplus

namespace beautiful_capi_Test
{
    template<typename WrappedObjType>
    class forward_pointer_holder
    {
        void* m_pointer;
        bool m_object_was_created;
        const bool m_add_ref;
    public:
        forward_pointer_holder(void* pointer, bool add_ref)
         : m_object_was_created(false), m_pointer(pointer), m_add_ref(add_ref)
        {
        }
        ~forward_pointer_holder()
        {
            if (m_object_was_created)
            {
                reinterpret_cast<WrappedObjType*>(this)->~WrappedObjType();
            }
        }
        operator WrappedObjType()
        {
            return WrappedObjType(m_pointer, m_add_ref);
        }
        WrappedObjType* operator->()
        {
            m_object_was_created = true;
            return new(this) WrappedObjType(m_pointer, m_add_ref);
        }
        void* get_raw_pointer() const
        {
            return m_pointer;
        }
    };
}

#endif /* __cplusplus */

#endif /* BEAUTIFUL_CAPI_TEST_FORWARD_HOLDER_INCLUDED */

#ifndef EXAMPLE_INCLUDED
#define EXAMPLE_INCLUDED

#include <memory>

#ifndef EXAMPLE_CAPI_INCLUDED
#define EXAMPLE_CAPI_INCLUDED

#ifdef __cplusplus
    #define EXAMPLE_CAPI_PREFIX extern "C"
#else
    #define EXAMPLE_CAPI_PREFIX
#endif

#ifdef _WIN32
    #ifdef __GNUC__
        #define EXAMPLE_API EXAMPLE_CAPI_PREFIX __attribute__ ((dllimport))
        #define EXAMPLE_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define EXAMPLE_API EXAMPLE_CAPI_PREFIX __declspec(dllimport)
        #define EXAMPLE_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define EXAMPLE_API EXAMPLE_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define EXAMPLE_API EXAMPLE_CAPI_PREFIX
    #endif
    #if defined __i386__
        #define EXAMPLE_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define EXAMPLE_API_CONVENTION
    #endif
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define EXAMPLE_API EXAMPLE_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define EXAMPLE_API EXAMPLE_CAPI_PREFIX
    #endif
    #if defined __i386__
        #define EXAMPLE_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define EXAMPLE_API_CONVENTION
    #endif
#else
    #error "Unknown platform"
#endif

EXAMPLE_API void* EXAMPLE_API_CONVENTION example_geometry_brep_body_copy(void* object_pointer);
EXAMPLE_API void* EXAMPLE_API_CONVENTION example_geometry_brep_body_new();
EXAMPLE_API void EXAMPLE_API_CONVENTION example_geometry_brep_body_delete(void* object_pointer);
EXAMPLE_API const char* EXAMPLE_API_CONVENTION example_geometry_brep_body_getname(void* object_pointer);
EXAMPLE_API void EXAMPLE_API_CONVENTION example_geometry_brep_body_setname(void* object_pointer, const char* value);
EXAMPLE_API void* EXAMPLE_API_CONVENTION example_geometry_sphere_copy(void* object_pointer);
EXAMPLE_API void* EXAMPLE_API_CONVENTION example_geometry_sphere_new();
EXAMPLE_API void EXAMPLE_API_CONVENTION example_geometry_sphere_delete(void* object_pointer);
EXAMPLE_API double EXAMPLE_API_CONVENTION example_geometry_sphere_getradius(void* object_pointer);
EXAMPLE_API void EXAMPLE_API_CONVENTION example_geometry_sphere_setradius(void* object_pointer, double value);
EXAMPLE_API void* EXAMPLE_API_CONVENTION example_scene_node_copy(void* object_pointer);
EXAMPLE_API void* EXAMPLE_API_CONVENTION example_scene_node_new();
EXAMPLE_API void EXAMPLE_API_CONVENTION example_scene_node_delete(void* object_pointer);
EXAMPLE_API const char* EXAMPLE_API_CONVENTION example_scene_node_getname(void* object_pointer);
EXAMPLE_API void EXAMPLE_API_CONVENTION example_scene_node_setname(void* object_pointer, const char* value);
EXAMPLE_API void* EXAMPLE_API_CONVENTION example_printer_copy(void* object_pointer);
EXAMPLE_API void* EXAMPLE_API_CONVENTION example_printer_new();
EXAMPLE_API void EXAMPLE_API_CONVENTION example_printer_delete(void* object_pointer);
EXAMPLE_API void EXAMPLE_API_CONVENTION example_printer_show(void* object_pointer, const char* text);

#endif /* EXAMPLE_CAPI_INCLUDED */

#ifndef EXAMPLE_FWD_INCLUDED
#define EXAMPLE_FWD_INCLUDED

#ifdef __cplusplus


namespace Example
{
    class Printer;
    typedef beautiful_capi_Test::forward_pointer_holder<Printer> PrinterFwdPtr;
    namespace Geometry
    {
        class Sphere;
        typedef beautiful_capi_Test::forward_pointer_holder<Sphere> SphereFwdPtr;
        namespace Brep
        {
            class Body;
            typedef beautiful_capi_Test::forward_pointer_holder<Body> BodyFwdPtr;
        }
    }
    namespace Scene
    {
        class Node;
        typedef beautiful_capi_Test::forward_pointer_holder<Node> NodeFwdPtr;
    }
}

#endif /* __cplusplus */

#endif /* EXAMPLE_FWD_INCLUDED */

#ifdef __cplusplus

namespace Example { 

template<typename TargetType, typename SourceType>
TargetType down_cast(const SourceType&);

template<typename TargetType, typename SourceType>
TargetType down_cast(const SourceType&);

template<typename TargetType, typename SourceType>
TargetType down_cast(const SourceType&);

template<typename TargetType, typename SourceType>
TargetType down_cast(const SourceType&);

}

#endif /* __cplusplus */

#endif /* EXAMPLE_INCLUDED */

#ifndef EXAMPLE_GEOMETRY_INCLUDED
#define EXAMPLE_GEOMETRY_INCLUDED


#ifdef __cplusplus

namespace Example { namespace Geometry { 

}}

#endif /* __cplusplus */

#endif /* EXAMPLE_GEOMETRY_INCLUDED */

#ifndef EXAMPLE_GEOMETRY_BREP_INCLUDED
#define EXAMPLE_GEOMETRY_BREP_INCLUDED


#ifdef __cplusplus

namespace Example { namespace Geometry { namespace Brep { 

}}}

#endif /* __cplusplus */

#endif /* EXAMPLE_GEOMETRY_BREP_INCLUDED */

#ifndef EXAMPLE_GEOMETRY_BREP_BODY_INCLUDED
#define EXAMPLE_GEOMETRY_BREP_BODY_INCLUDED


#ifdef __cplusplus

namespace Example { namespace Geometry { namespace Brep { 

class Body
{
protected:
    void* mObject;
    void SetObject(void* object_pointer)
    {
        mObject = object_pointer;
    }
public:
    Body(const Body& other)
    {
        if (other.mObject)
        {
            SetObject(example_geometry_brep_body_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    Body(void *object_pointer, bool copy_object)
    {
        if (object_pointer && copy_object)
        {
            SetObject(example_geometry_brep_body_copy(object_pointer));
        }
        else
        {
            SetObject(object_pointer);
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
    Body* operator->()
    {
        return this;
    }
    const Body* operator->() const
    {
        return this;
    }
    void* Detach()
    {
        void* result = mObject;
        SetObject(0);
        return result;
    }
    Body operator=(const Body& other)
    {
        if (mObject != other.mObject)
        {
            if (mObject)
            {
                example_geometry_brep_body_delete(mObject);
                SetObject(0);
            }
            if (other.mObject)
            {
                SetObject(example_geometry_brep_body_copy(other.mObject));
            }
            else
            {
                SetObject(0);
            }
        }
        return *this;
    }
    Body()
    {
        SetObject(example_geometry_brep_body_new());
    }
    ~Body()
    {
        if (mObject)
        {
            example_geometry_brep_body_delete(mObject);
            SetObject(0);
        }
    }
    const char* GetName()
    {
        return example_geometry_brep_body_getname(mObject);
    }
    void SetName(const char* value)
    {
        example_geometry_brep_body_setname(mObject, value);
    }
};

}}}

#endif /* __cplusplus */

#endif /* EXAMPLE_GEOMETRY_BREP_BODY_INCLUDED */

#ifndef EXAMPLE_GEOMETRY_SPHERE_INCLUDED
#define EXAMPLE_GEOMETRY_SPHERE_INCLUDED


#ifdef __cplusplus

namespace Example { namespace Geometry { 

class Sphere
{
protected:
    void* mObject;
    void SetObject(void* object_pointer)
    {
        mObject = object_pointer;
    }
public:
    Sphere(const Sphere& other)
    {
        if (other.mObject)
        {
            SetObject(example_geometry_sphere_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    Sphere(void *object_pointer, bool copy_object)
    {
        if (object_pointer && copy_object)
        {
            SetObject(example_geometry_sphere_copy(object_pointer));
        }
        else
        {
            SetObject(object_pointer);
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
    Sphere* operator->()
    {
        return this;
    }
    const Sphere* operator->() const
    {
        return this;
    }
    void* Detach()
    {
        void* result = mObject;
        SetObject(0);
        return result;
    }
    Sphere operator=(const Sphere& other)
    {
        if (mObject != other.mObject)
        {
            if (mObject)
            {
                example_geometry_sphere_delete(mObject);
                SetObject(0);
            }
            if (other.mObject)
            {
                SetObject(example_geometry_sphere_copy(other.mObject));
            }
            else
            {
                SetObject(0);
            }
        }
        return *this;
    }
    Sphere()
    {
        SetObject(example_geometry_sphere_new());
    }
    ~Sphere()
    {
        if (mObject)
        {
            example_geometry_sphere_delete(mObject);
            SetObject(0);
        }
    }
    double GetRadius()
    {
        return example_geometry_sphere_getradius(mObject);
    }
    void SetRadius(double value)
    {
        example_geometry_sphere_setradius(mObject, value);
    }
};

}}

#endif /* __cplusplus */

#endif /* EXAMPLE_GEOMETRY_SPHERE_INCLUDED */

#ifndef EXAMPLE_SCENE_INCLUDED
#define EXAMPLE_SCENE_INCLUDED


#ifdef __cplusplus

namespace Example { namespace Scene { 

}}

#endif /* __cplusplus */

#endif /* EXAMPLE_SCENE_INCLUDED */

#ifndef EXAMPLE_SCENE_NODE_INCLUDED
#define EXAMPLE_SCENE_NODE_INCLUDED


#ifdef __cplusplus

namespace Example { namespace Scene { 

class Node
{
protected:
    void* mObject;
    void SetObject(void* object_pointer)
    {
        mObject = object_pointer;
    }
public:
    Node(const Node& other)
    {
        if (other.mObject)
        {
            SetObject(example_scene_node_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    Node(void *object_pointer, bool copy_object)
    {
        if (object_pointer && copy_object)
        {
            SetObject(example_scene_node_copy(object_pointer));
        }
        else
        {
            SetObject(object_pointer);
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
    Node* operator->()
    {
        return this;
    }
    const Node* operator->() const
    {
        return this;
    }
    void* Detach()
    {
        void* result = mObject;
        SetObject(0);
        return result;
    }
    Node operator=(const Node& other)
    {
        if (mObject != other.mObject)
        {
            if (mObject)
            {
                example_scene_node_delete(mObject);
                SetObject(0);
            }
            if (other.mObject)
            {
                SetObject(example_scene_node_copy(other.mObject));
            }
            else
            {
                SetObject(0);
            }
        }
        return *this;
    }
    Node()
    {
        SetObject(example_scene_node_new());
    }
    ~Node()
    {
        if (mObject)
        {
            example_scene_node_delete(mObject);
            SetObject(0);
        }
    }
    const char* GetName()
    {
        return example_scene_node_getname(mObject);
    }
    void SetName(const char* value)
    {
        example_scene_node_setname(mObject, value);
    }
};

}}

#endif /* __cplusplus */

#endif /* EXAMPLE_SCENE_NODE_INCLUDED */

#ifndef EXAMPLE_PRINTER_INCLUDED
#define EXAMPLE_PRINTER_INCLUDED


#ifdef __cplusplus

namespace Example { 

class Printer
{
protected:
    void* mObject;
    void SetObject(void* object_pointer)
    {
        mObject = object_pointer;
    }
public:
    Printer(const Printer& other)
    {
        if (other.mObject)
        {
            SetObject(example_printer_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    Printer(void *object_pointer, bool copy_object)
    {
        if (object_pointer && copy_object)
        {
            SetObject(example_printer_copy(object_pointer));
        }
        else
        {
            SetObject(object_pointer);
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
    Printer* operator->()
    {
        return this;
    }
    const Printer* operator->() const
    {
        return this;
    }
    void* Detach()
    {
        void* result = mObject;
        SetObject(0);
        return result;
    }
    Printer operator=(const Printer& other)
    {
        if (mObject != other.mObject)
        {
            if (mObject)
            {
                example_printer_delete(mObject);
                SetObject(0);
            }
            if (other.mObject)
            {
                SetObject(example_printer_copy(other.mObject));
            }
            else
            {
                SetObject(0);
            }
        }
        return *this;
    }
    Printer()
    {
        SetObject(example_printer_new());
    }
    ~Printer()
    {
        if (mObject)
        {
            example_printer_delete(mObject);
            SetObject(0);
        }
    }
    void Show(const char* text)
    {
        example_printer_show(mObject, text);
    }
};

}

#endif /* __cplusplus */

#endif /* EXAMPLE_PRINTER_INCLUDED */

#ifndef SAMPLE_INCLUDED
#define SAMPLE_INCLUDED


#ifndef SAMPLE_CAPI_INCLUDED
#define SAMPLE_CAPI_INCLUDED

#ifdef __cplusplus
    #define SAMPLE_CAPI_PREFIX extern "C"
#else
    #define SAMPLE_CAPI_PREFIX
#endif

#ifdef _WIN32
    #ifdef __GNUC__
        #define SAMPLE_API SAMPLE_CAPI_PREFIX __attribute__ ((dllimport))
        #define SAMPLE_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define SAMPLE_API SAMPLE_CAPI_PREFIX __declspec(dllimport)
        #define SAMPLE_API_CONVENTION __cdecl
    #endif
#elif __APPLE__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define SAMPLE_API SAMPLE_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define SAMPLE_API SAMPLE_CAPI_PREFIX
    #endif
    #if defined __i386__
        #define SAMPLE_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define SAMPLE_API_CONVENTION
    #endif
#elif __unix__ || __linux__
    #if defined(__GNUC__) && __GNUC__ >= 4
        #define SAMPLE_API SAMPLE_CAPI_PREFIX __attribute__ ((visibility ("default")))
    #else
        #define SAMPLE_API SAMPLE_CAPI_PREFIX
    #endif
    #if defined __i386__
        #define SAMPLE_API_CONVENTION __attribute__ ((cdecl))
    #else
        #define SAMPLE_API_CONVENTION
    #endif
#else
    #error "Unknown platform"
#endif

SAMPLE_API void* SAMPLE_API_CONVENTION sample_data_copy(void* object_pointer);
SAMPLE_API void* SAMPLE_API_CONVENTION sample_data_new();
SAMPLE_API void SAMPLE_API_CONVENTION sample_data_delete(void* object_pointer);
SAMPLE_API int SAMPLE_API_CONVENTION sample_data_getdata(void* object_pointer);
SAMPLE_API void SAMPLE_API_CONVENTION sample_data_setdata(void* object_pointer, int value);

#endif /* SAMPLE_CAPI_INCLUDED */

#ifndef SAMPLE_FWD_INCLUDED
#define SAMPLE_FWD_INCLUDED

#ifdef __cplusplus


namespace Sample
{
    class Data;
    typedef beautiful_capi_Test::forward_pointer_holder<Data> DataFwdPtr;
}

#endif /* __cplusplus */

#endif /* SAMPLE_FWD_INCLUDED */

#ifdef __cplusplus

namespace Sample { 

template<typename TargetType, typename SourceType>
TargetType down_cast(const SourceType&);

}

#endif /* __cplusplus */

#endif /* SAMPLE_INCLUDED */

#ifndef SAMPLE_DATA_INCLUDED
#define SAMPLE_DATA_INCLUDED


#ifdef __cplusplus

namespace Sample { 

class Data
{
protected:
    void* mObject;
    void SetObject(void* object_pointer)
    {
        mObject = object_pointer;
    }
public:
    Data(const Data& other)
    {
        if (other.mObject)
        {
            SetObject(sample_data_copy(other.mObject));
        }
        else
        {
            SetObject(0);
        }
    }
    Data(void *object_pointer, bool copy_object)
    {
        if (object_pointer && copy_object)
        {
            SetObject(sample_data_copy(object_pointer));
        }
        else
        {
            SetObject(object_pointer);
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
    Data* operator->()
    {
        return this;
    }
    const Data* operator->() const
    {
        return this;
    }
    void* Detach()
    {
        void* result = mObject;
        SetObject(0);
        return result;
    }
    Data operator=(const Data& other)
    {
        if (mObject != other.mObject)
        {
            if (mObject)
            {
                sample_data_delete(mObject);
                SetObject(0);
            }
            if (other.mObject)
            {
                SetObject(sample_data_copy(other.mObject));
            }
            else
            {
                SetObject(0);
            }
        }
        return *this;
    }
    Data()
    {
        SetObject(sample_data_new());
    }
    ~Data()
    {
        if (mObject)
        {
            sample_data_delete(mObject);
            SetObject(0);
        }
    }
    int GetData()
    {
        return sample_data_getdata(mObject);
    }
    void SetData(int value)
    {
        sample_data_setdata(mObject, value);
    }
};

}

#endif /* __cplusplus */

#endif /* SAMPLE_DATA_INCLUDED */
