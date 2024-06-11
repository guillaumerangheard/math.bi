#ifdef _MATH_VEC3_BI_
    #ifndef _MATH_V3ARRAY_BI_
        #define _MATH_V3ARRAY_BI_
        namespace math
            type v3array extends baseArray
                public:
                    declare constructor ()
                    declare constructor (byref as const integer)
                    declare constructor (byref as const integer, as sub (byref as vec3)                        , byref as const boolean => false)
                    declare constructor (byref as const integer, as sub (byref as vec3, byref as const integer), byref as const boolean => false)
                    #ifdef _MATH_ARRAY_BI_
                    declare constructor (byref as const array, byref as const array, byref as const array)
                    #ifdef _MATH_V2ARRAY_BI_
                    declare constructor (byref as const v2array                    , byref as const array)
                    #endif
                    #endif
                    declare constructor (byref as const v3array)
                    declare destructor  ()
                    
                    declare       operator &=   (byref as const vec2)
                    #ifdef _MATH_V2ARRAY_BI_
                    declare       operator &=   (byref as const v2array)
                    #endif
                    #ifdef _MATH_PVEC_BI_
                    declare       operator &=   (byref as const pvec)
                    #endif
                    #ifdef _MATH_PVARRAY_BI_
                    declare       operator &=   (byref as const pvarray)
                    #endif
                    declare       operator &=   (byref as const vec3)
                    declare       operator &=   (byref as const v3array)
                    #ifdef _MATH_CVEC_BI_
                    declare       operator &=   (byref as const cvec)
                    #endif
                    #ifdef _MATH_SVEC_BI_
                    declare       operator &=   (byref as const svec)
                    #endif
                    declare       operator []   (byref as const integer) byref as vec3
                    declare       operator +=   (byref as const vec3)
                    #ifdef _MATH_CVEC_BI_
                    declare       operator +=   (byref as const cvec)
                    #endif
                    #ifdef _MATH_SVEC_BI_
                    declare       operator +=   (byref as const svec)
                    #endif
                    declare       operator +=   (byref as const v3array)
                    declare       operator -=   (byref as const vec3)
                    #ifdef _MATH_CVEC_BI_
                    declare       operator -=   (byref as const cvec)
                    #endif
                    #ifdef _MATH_SVEC_BI_
                    declare       operator -=   (byref as const svec)
                    #endif
                    declare       operator -=   (byref as const v3array)
                    declare       operator *=   (byref as const real)
                    #ifdef _MATH_ARRAY_BI_
                    declare       operator *=   (byref as const array)
                    #endif
                    declare       operator *=   (byref as const vec3)
                    #ifdef _MATH_CVEC_BI_
                    declare       operator *=   (byref as const cvec)
                    #endif
                    #ifdef _MATH_SVEC_BI_
                    declare       operator *=   (byref as const svec)
                    #endif
                    declare       operator *=   (byref as const v3array)
                    declare       operator /=   (byref as const real)
                    #ifdef _MATH_ARRAY_BI_
                    declare       operator /=   (byref as const array)
                    #endif
                    declare       operator /=   (byref as const vec3)
                    #ifdef _MATH_CVEC_BI_
                    declare       operator /=   (byref as const cvec)
                    #endif
                    #ifdef _MATH_SVEC_BI_
                    declare       operator /=   (byref as const svec)
                    #endif
                    declare       operator /=   (byref as const v3array)
                    declare const operator cast () as string
                    #ifdef _MATH_V2ARRAY_BI_
                    declare       operator let  (byref as const v2array)
                    #endif
                    declare       operator let  (byref as const v3array)
                    
                    declare const property data   () as vec3 const ptr
                    declare       property length (byref as const integer)
                    declare const property xMax   () as real
                    declare const property xMin   () as real
                    declare const property yMax   () as real
                    declare const property yMin   () as real
                    declare const property zMax   () as real
                    declare const property zMin   () as real
                    
                    declare       function forEach overload (as sub      (byref as vec3)                                   , byref as const boolean => false) as boolean
                    declare       function forEach          (as function (byref as vec3)                         as boolean, byref as const boolean => false) as boolean
                    declare       function forEach          (as sub      (byref as vec3, byref as const integer)           , byref as const boolean => false) as boolean
                    declare       function forEach          (as function (byref as vec3, byref as const integer) as boolean, byref as const boolean => false) as boolean
                    #macro v3a_f(_a_)
                    declare       function forEach##_a_ overload (as sub      (byref as real)                                   , byref as const boolean => false) as boolean
                    declare       function forEach##_a_          (as function (byref as real)                         as boolean, byref as const boolean => false) as boolean
                    declare       function forEach##_a_          (as sub      (byref as real, byref as const integer)           , byref as const boolean => false) as boolean
                    declare       function forEach##_a_          (as function (byref as real, byref as const integer) as boolean, byref as const boolean => false) as boolean
                    #endmacro
                    v3a_f(X)
                    v3a_f(Y)
                    v3a_f(Z)
                    #undef v3a_f
                    declare       function map                   (byref as v3array, as function (byref as const vec3) as vec3) as boolean
                    #ifdef _MATH_ARRAY_BI_
                    #macro v3a_m(_a_)
                    declare       function map##_a_     overload (byref as array)                                            as boolean
                    declare       function map##_a_              (byref as array, as function (byref as const real) as real) as boolean
                    #endmacro
                    v3a_m(X)
                    v3a_m(Y)
                    v3a_m(Z)
                    #undef v3a_m
                    #endif
                    declare       function normalise             () as boolean
                    declare const function toJSON                (byref as const boolean => false) as string
                private:
                    as vec3 ptr _p ' Payload.
                    as vec3     _d ' Dummy value.
            end type
        end namespace
        #include "v3array_constructors.bas"
        #include "v3array_operators.bas"
        '#include "v3array_properties.bas"
        '#include "v3array_methods.bas"
    #endif
#endif