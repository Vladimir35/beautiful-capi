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

namespace Example
{
    public class IShape : global::System.IDisposable
    {
        private global::System.Runtime.InteropServices.HandleRef capi_ptr;
        protected bool capi_owned;
        
        internal IShape(global::System.IntPtr c_ptr, bool owned)
        {
            capi_owned = owned;
            capi_ptr = new global::System.Runtime.InteropServices.HandleRef(this, c_ptr);
        }
        
        internal static global::System.Runtime.InteropServices.HandleRef getCPtr(IShape obj)
        {
            return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.capi_ptr;
        }
        
        ~IShape()
        {
            Dispose();
        }
        
        public virtual void Dispose()
        {
            lock(this)
            {
                if (capi_ptr.Handle != global::System.IntPtr.Zero)
                {
                    if (capi_owned)
                    {
                        capi_owned = false;
                        DownCastPINVOKE.Invoke_example_ishape_release(capi_ptr);
                    }
                    capi_ptr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
                }
                global::System.GC.SuppressFinalize(this);
            }
        }
        
        public  void Show()
        {
            DownCastPINVOKE.Invoke_example_ishape_show(capi_ptr);
        }
    }
}