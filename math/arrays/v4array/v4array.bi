#ifdef _MATH_VEC4_BI_
    #ifndef _MATH_V4ARRAY_BI_
        #define _MATH_V4ARRAY_BI_
        namespace math
            type v4array extends baseArray
                public:
                    declare constructor ()
                    #ifdef _MATH_ARRAY_BI_
                    declare constructor (byref as const array, byref as const array, byref as const array, byref as const array)
                    #endif
                    #ifdef _MATH_V2ARRAY_BI_
                    declare constructor (byref a as const v2array)
                    #ifdef _MATH_ARRAY_BI_
                    declare constructor (byref as const v2array                    , byref as const array, byref as const array)
                    #endif
                    #endif
                    #ifdef _MATH_PVARRAY_BI_
                    declare constructor (byref as const pvarray)
                    #ifdef _MATH_ARRAY_BI_
                    declare constructor (byref as const pvarray                    , byref as const array, byref as const array)
                    #endif
                    #endif
                    #ifdef _MATH_V3ARRAY_BI_
                    declare constructor (byref as const v3array)
                    #ifdef _MATH_ARRAY_BI_
                    declare constructor (byref as const v3array                                          , byref as const array)
                    #endif
                    #endif
                    #ifdef _MATH_CVARRAY_BI_
                    declare constructor (byref as const cvarray)
                    #ifdef _MATH_ARRAY_BI_
                    declare constructor (byref as const cvarray                                          , byref as const array)
                    #endif
                    #endif
                    #ifdef _MATH_SVARRAY_BI_
                    declare constructor (byref as const svarray)
                    #ifdef _MATH_ARRAY_BI_
                    declare constructor (byref as const svarray                                          , byref as const array)
                    #endif
                    #endif
                    declare constructor (byref as const v4array)
                    declare destructor  ()
                    
                    declare       operator &=   (byref as const vec4)
                    declare       operator &=   (byref as const v4array)
                    declare       operator []   (byref as const integer) byref as vec4
                    declare       operator +=   (byref as const vec4)
                    declare       operator +=   (byref as const v4array)
                    declare       operator -=   (byref as const vec4)
                    declare       operator -=   (byref as const v4array)
                    declare       operator *=   (byref as const real)
                    #ifdef _MATH_ARRAY_BI_
                    declare       operator *=   (byref as const array)
                    #endif
                    declare       operator *=   (byref as const vec4)
                    declare       operator *=   (byref as const v4array)
                    declare       operator /=   (byref as const real)
                    #ifdef _MATH_ARRAY_BI_
                    declare       operator /=   (byref as const array)
                    #endif
                    declare       operator /=   (byref as const vec4)
                    declare       operator /=   (byref as const v4array)
                    declare const operator cast () as string
                    #ifdef _MATH_V2ARRAY_BI_
                    declare       operator let  (byref as const v2array)
                    #endif
                    #ifdef _MATH_PVARRAY_BI_
                    declare       operator let  (byref as const pvarray)
                    #endif
                    #ifdef _MATH_V3ARRAY_BI_
                    declare       operator let  (byref as const v3array)
                    #endif
                    #ifdef _MATH_CVARRAY_BI_
                    declare       operator let  (byref as const cvarray)
                    #endif
                    #ifdef _MATH_SVARRAY_BI_
                    declare       operator let  (byref as const svarray)
                    #endif
                    declare       operator let  (byref as const v4array)
                    
                    declare const property data   () as vec4 const ptr
                    declare       property length (byref as const integer)
                    declare const property xMax   () as real
                    declare const property xMin   () as real
                    declare const property yMax   () as real
                    declare const property yMin   () as real
                    declare const property zMax   () as real
                    declare const property zMin   () as real
                    declare const property wMax   () as real
                    declare const property wMin   () as real
                    
                    declare       function forEach      overload (as sub      (byref as vec4)                                   , byref as const boolean => false) as boolean
                    declare       function forEach               (as function (byref as vec4)                         as boolean, byref as const boolean => false) as boolean
                    declare       function forEach               (as sub      (byref as vec4, byref as const integer)           , byref as const boolean => false) as boolean
                    declare       function forEach               (as function (byref as vec4, byref as const integer) as boolean, byref as const boolean => false) as boolean
                    #macro v4a_f(_a_)
                    declare       function forEach##_a_ overload (as sub      (byref as real)                                   , byref as const boolean => false) as boolean
                    declare       function forEach##_a_          (as function (byref as real)                         as boolean, byref as const boolean => false) as boolean
                    declare       function forEach##_a_          (as sub      (byref as real, byref as const integer)           , byref as const boolean => false) as boolean
                    declare       function forEach##_a_          (as function (byref as real, byref as const integer) as boolean, byref as const boolean => false) as boolean
                    #endmacro
                    v4a_f(X)
                    v4a_f(Y)
                    v4a_f(Z)
                    v4a_f(W)
                    #undef v4a_f
                    declare       function map                   (byref as v4array, as function (byref as const vec4) as vec4) as boolean
                    #macro v4a_m(_a_)
                    declare       function map##_a_     overload (byref as array)                                            as boolean
                    declare       function map##_a_              (byref as array, as function (byref as const real) as real) as boolean
                    #endmacro
                    v4a_m(X)
                    v4a_m(Y)
                    v4a_m(Z)
                    v4a_m(W)
                    #undef v4a_m
                    declare       function normalise             () as boolean
                    declare const function toJSON                (byref a as const boolean => false) as string
                protected:
                    as vec4 ptr _p ' Payload.
                    as vec4     _d ' Dummy value.
            end type
        end namespace
        '#include "v4array_constructors.bas"
        '#include "v4array_operators.bas"
        '#include "v4array_properties.bas"
        '#include "v4array_methods.bas"
    #endif
#endif