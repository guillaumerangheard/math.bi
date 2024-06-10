#ifdef _MATH_BI_
    #ifndef _MATH_COMPLEX_ARRAY_BI_
        #define _MATH_COMPLEX_ARRAY_
        namespace math
            type complexArray extends baseArray
                public:
                    declare constructor ()
                    declare constructor (byref as const integer)
                    declare constructor (byref as const integer, as sub (byref as complex)                        , byref as const boolean => false)
                    declare constructor (byref as const integer, as sub (byref as complex, byref as const integer), byref as const boolean => false)
                    #ifdef _MATH_ARRAY_BI_
                    declare constructor (byref as const array)
                    declare constructor (byref as const array, byref as const array)
                    #endif
                    declare constructor (byref as const complexArray)
                    declare destructor  ()
                    
                    declare operator &= (byref as const real)
                    #ifdef _MATH_ARRAY_BI_
                    declare operator &= (byref as const array)
                    #endif
                    declare operator &= (byref as const complex)
                    declare operator &= (byref as const complexArray)
                    declare operator [] (byref as const integer) byref as complex
                    declare operator += (byref as const real)
                    #ifdef _MATH_ARRAY_BI_
                    declare operator += (byref as const array)
                    #endif
                    declare operator += (byref as const complex)
                    declare operator += (byref as const complexArray)
                    declare operator -= (byref as const real)
                    #ifdef _MATH_ARRAY_BI_
                    declare operator -= (byref as const array)
                    #endif
                    declare operator -= (byref as const complex)
                    declare operator -= (byref as const complexArray)
                    declare operator *= (byref as const real)
                    #ifdef _MATH_ARRAY_BI_
                    declare operator *= (byref as const array)
                    #endif
                    declare operator *= (byref as const complex)
                    declare operator *= (byref as const complexArray)
                    declare operator /= (byref as const real)
                    #ifdef _MATH_ARRAY_BI_
                    declare operator /= (byref as const array)
                    #endif
                    declare operator /= (byref as const complex)
                    declare operator /= (byref as const complexArray)
                    declare operator ^= (byref as const real)
                    #ifdef _MATH_ARRAY_BI_
                    declare operator ^= (byref as const array)
                    #endif
                    declare const operator cast () as string
                    #ifdef _MATH_ARRAY_BI_
                    declare       operator let  (byref as const array)
                    #endif
                    declare       operator let  (byref as const complexArray)
                    
                    
                    declare const property avg    () as complex
                    declare const property data   () as complex const ptr
                    declare       property length (byref as const integer)
                    'declare const property max    () as complex
                    'declare const property min    () as complex
                    
                    declare       function forEach      overload (as sub      (byref as complex)                                   , byref as const boolean => false) as boolean
                    declare       function forEach               (as function (byref as complex)                         as boolean, byref as const boolean => false) as boolean
                    declare       function forEach               (as sub      (byref as complex, byref as const integer)           , byref as const boolean => false) as boolean
                    declare       function forEach               (as function (byref as complex, byref as const integer) as boolean, byref as const boolean => false) as boolean
                    #macro ca_f(_a_)
                    declare       function forEach##_a_ overload (as sub      (byref as real)                                   , byref as const boolean => false) as boolean
                    declare       function forEach##_a_          (as function (byref as real)                         as boolean, byref as const boolean => false) as boolean
                    declare       function forEach##_a_          (as sub      (byref as real, byref as const integer)           , byref as const boolean => false) as boolean
                    declare       function forEach##_a_          (as function (byref as real, byref as const integer) as boolean, byref as const boolean => false) as boolean
                    #endmacro
                    ca_f(I)
                    ca_f(R)
                    #undef ca_f
                    #ifndef _MATH_ARRAY_BI_
                    declare const function map                   (byref as complexArray, as function (byref as const complex) as complex) as boolean
                    #else
                    declare const function map          overload (byref as complexArray         , as function (byref as const complex) as complex) as boolean
                    ' ...
                    #macro ca_m(_a_)
                    declare const function map##_a_     overload (byref as array)                                            as boolean
                    declare const function map##_a_              (byref as array, as function (byref as const real) as real) as boolean
                    #endmacro
                    ca_m(I)
                    ca_m(R)
                    #undef ca_m
                    #endif
                    declare const function toJSON                (byref a as const boolean => false) as string
                protected:
                    as complex ptr _p ' Payload.
                    as complex     _d ' Dummy value.
            end type
        end namespace
        #include "complexArray_constructors.bas"
        #include "complexArray_operators.bas"
        #include "complexArray_properties.bas"
        #include "complexArray_methods.bas"
    #endif
#endif