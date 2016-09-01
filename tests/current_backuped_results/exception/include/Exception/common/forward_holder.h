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

#ifndef BEAUTIFUL_CAPI_EXCEPTION_FORWARD_HOLDER_INCLUDED
#define BEAUTIFUL_CAPI_EXCEPTION_FORWARD_HOLDER_INCLUDED

#ifdef __cplusplus

namespace beautiful_capi_Exception
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

#endif /* BEAUTIFUL_CAPI_EXCEPTION_FORWARD_HOLDER_INCLUDED */

