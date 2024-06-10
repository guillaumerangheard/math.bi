#ifdef _MATH_BI_
    #ifndef _MATH_ARRAY_BI_
        #define _MATH_ARRAY_BI_
        namespace math
            type array extends baseArray
                public:
                    declare constructor ()
                    declare constructor (byref as const integer)
                    declare constructor (byref as const integer, as sub (byref as real)                        , byref as const boolean => false)
                    declare constructor (byref as const integer, as sub (byref as real, byref as const integer), byref as const boolean => false)
                    declare constructor (byref as const array)
                    declare destructor  ()
                    
                    declare       operator &=   (byref as const real)
                    declare       operator &=   (byref as const array)
                    declare       operator []   (byref as const integer) byref as real
                    declare       operator +=   (byref as const real)
                    declare       operator +=   (byref as const array)
                    declare       operator -=   (byref as const real)
                    declare       operator -=   (byref as const array)
                    declare       operator *=   (byref as const real)
                    declare       operator *=   (byref as const array)
                    declare       operator /=   (byref as const real)
                    declare       operator /=   (byref as const array)
                    declare       operator ^=   (byref as const real)
                    declare       operator ^=   (byref as const array)
                    declare const operator cast () as string
                    declare       operator let  (byref as const array)
                    
                    declare const property avg    () as real
                    declare const property data   () as real const ptr
                    declare       property length (byref as const integer)
                    declare const property max    () as real
                    declare const property min    () as real
                    
                    declare       function forEach overload (as sub      (byref as real)                                   , byref as const boolean => false) as boolean
                    declare       function forEach          (as function (byref as real)                         as boolean, byref as const boolean => false) as boolean
                    declare       function forEach          (as sub      (byref as real, byref as const integer)           , byref as const boolean => false) as boolean
                    declare       function forEach          (as function (byref as real, byref as const integer) as boolean, byref as const boolean => false) as boolean
                    declare       function map     overload (byref as array, as function (byref as const real)                         as real) as boolean
                    declare       function map              (byref as array, as function (byref as const real, byref as const integer) as real) as boolean
                    declare const function toJSON           () as string
                protected:
                    as real ptr _p ' Payload.
                    as real     _d ' Dummy value.
            end type
        end namespace
        #include "array_constructors.bas"
        #include "array_operators.bas"
        #include "array_properties.bas"
        #include "array_methods.bas"
    #endif
#endif