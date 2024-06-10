#ifdef _MATH_VEC2_BI_
    #ifndef _MATH_V2ARRAY_BI_
        #define _MATH_V2ARRAY_BI_
        namespace math
            type v2array extends baseArray
                public:
                    declare constructor ()
                    declare constructor (byref as const integer)
                    declare constructor (byref as const integer, as sub (byref as vec2)                        , byref as const boolean => false)
                    declare constructor (byref as const integer, as sub (byref as vec2, byref as const integer), byref as const boolean => false)
                    #ifdef _MATH_ARRAY_BI_
                    declare constructor (byref as const array, byref as const array)
                    #endif
                    declare constructor (byref as const v2array)
                    declare destructor  ()
                    
                    declare       operator &=   (byref as const vec2)
                    #ifdef _MATH_PVEC_BI_
                    declare       operator &=   (byref as const pvec)
                    #endif
                    declare       operator &=   (byref as const v2array)
                    declare       operator []   (byref as const integer) byref as vec2
                    declare       operator +=   (byref as const vec2)
                    #ifdef _MATH_PVEC_BI_
                    declare       operator +=   (byref as const pvec)
                    #endif
                    declare       operator +=   (byref as const v2array)
                    declare       operator -=   (byref as const vec2)
                    #ifdef _MATH_PVEC_BI_
                    declare       operator -=   (byref as const pvec)
                    #endif
                    declare       operator -=   (byref as const v2array)
                    declare       operator *=   (byref as const real)
                    #ifdef _MATH_ARRAY_BI_
                    declare       operator *=   (byref as const array)
                    #endif
                    declare       operator *=   (byref as const vec2)
                    #ifdef _MATH_PVEC_BI_
                    declare       operator *=   (byref as const pvec)
                    #endif
                    declare       operator *=   (byref as const v2array)
                    declare       operator /=   (byref as const real)
                    #ifdef _MATH_ARRAY_BI_
                    declare       operator /=   (byref as const array)
                    #endif
                    declare       operator /=   (byref as const vec2)
                    #ifdef _MATH_PVEC_BI_
                    declare       operator /=   (byref as const pvec)
                    #endif
                    declare       operator /=   (byref as const v2array)
                    declare const operator cast () as string
                    declare       operator let  (byref as const v2array)
                    
                    declare const property data   () as vec2 const ptr
                    declare       property length (byref as const integer)
                    declare const property xMax   () as real
                    declare const property xMin   () as real
                    declare const property yMax   () as real
                    declare const property yMin   () as real
                    
                    declare       function forEach       overload (as sub      (byref as vec2)                                   , byref as const boolean => false) as boolean
                    declare       function forEach                (as function (byref as vec2)                         as boolean, byref as const boolean => false) as boolean
                    declare       function forEach                (as sub      (byref as vec2, byref as const integer)           , byref as const boolean => false) as boolean
                    declare       function forEach                (as function (byref as vec2, byref as const integer) as boolean, byref as const boolean => false) as boolean
                    #macro v2a_f(_a_)
                    declare       function forEach##_a_  overload (as sub      (byref as real)                                   , byref as const boolean => false) as boolean
                    declare       function forEach##_a_           (as function (byref as real)                         as boolean, byref as const boolean => false) as boolean
                    declare       function forEach##_a_           (as sub      (byref as real, byref as const integer)           , byref as const boolean => false) as boolean
                    declare       function forEach##_a_           (as function (byref as real, byref as const integer) as boolean, byref as const boolean => false) as boolean
                    #endmacro
                    v2a_f(X)
                    v2a_f(Y)
                    #undef v2a_f
                    declare const function map                    (byref as v2array, as function (byref as const vec2) as vec2) as boolean
                    ' ...?
                    #ifdef _MATH_ARRAY_BI_
                    #macro v2a_m(_a_)
                    declare const function map##_a_      overload (byref as array)                                            as boolean
                    declare const function map##_a_               (byref as array, as function (byref as const real) as real) as boolean
                    #endmacro
                    v2a_m(X)
                    v2a_m(Y)
                    #undef v2a_m
                    #endif
                    declare const function toJSON                 (byref as const boolean => false) as string
                protected:
                    as vec2 ptr _p ' Payload.
                    as vec2     _d ' Dummy value.
            end type
        end namespace
        #include "v2array_constructors.bas"
        #include "v2array_operators.bas"
        #include "v2array_properties.bas"
        '#include "v2array_methods.bas"
    #endif
#endif