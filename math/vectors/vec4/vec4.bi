#ifdef _MATH_BI_
    #ifndef _MATH_VEC4_BI_
        #define _MATH_VEC4_BI_
        namespace math
            type vec4
                as real x, y, z, w
                
                declare constructor ()
                declare constructor (byref as const real, byref as const real, byref as const real, byref as const real => 0d)
                declare constructor (byref as const vec2                     , byref as const real, byref as const real => 0d)
                #ifdef _MATH_PVEC_BI_
                declare constructor (byref as const pvec                     , byref as const real, byref as const real => 0d)
                #endif
                declare constructor (byref as const vec3                                          , byref as const real => 0d)
                #ifdef _MATH_CVEC_BI_
                declare constructor (byref as const cvec                                          , byref as const real => 0d)
                #endif
                #ifdef _MATH_SVEC_BI_
                declare constructor (byref as const svec                                          , byref as const real => 0d)
                #endif
                declare constructor (byref as const vec4)
                
                declare       operator +=   (byref as const vec4)
                declare       operator -=   (byref as const vec4)
                declare       operator *=   (byref as const real)
                declare       operator *=   (byref as const vec4)
                declare       operator /=   (byref as const real)
                declare       operator /=   (byref as const vec4)
                declare const operator cast () as string
                declare       operator let  (byref as const vec2)
                #ifdef _MATH_PVEC_BI_
                declare       operator let  (byref as const pvec)
                #endif
                declare       operator let  (byref as const vec3)
                #ifdef _MATH_CVEC_BI_
                declare       operator let  (byref as const cvec)
                #endif
                #ifdef _MATH_SVEC_BI_
                declare       operator let  (byref as const svec)
                #endif
                declare       operator let  (byref as const vec4)
                
                declare const property ChNorm () as real
                declare const property MaNorm () as real
                declare const property norm   () as real
                declare       property norm   (byref as const real)
                declare const property phi    () as real
                declare       property phi    (byref as const real)
                declare const property sqNorm () as real
                declare const property xy     () as vec2
                declare       property xy     (byref as const vec2)
                #ifdef _MATH_PVEC_BI_
                declare       property xy     (byref as const pvec)
                #endif
                declare const property xyz    () as vec3
                declare       property xyz    (byref as const vec3)
                #ifdef _MATH_CVEC_BI_
                declare       property xyz    (byref as const cvec)
                #endif
                #ifdef _MATH_SVEC_BI_
                declare       property xyz    (byref as const svec)
                #endif
                
                declare const  function MiNorm             (byref as const real => 2d) as real
                declare static function normalise overload (byref as const real, byref as const real, byref as const real, byref as const real) as vec4
                declare static function normalise          (byref as const vec2                     , byref as const real, byref as const real) as vec4
                #ifdef _MATH_PVEC_BI_
                declare static function normalise          (byref as const pvec                     , byref as const real, byref as const real) as vec4
                #endif
                declare static function normalise          (byref as const vec3                                          , byref as const real) as vec4
                #ifdef _MATH_CVEC_BI_
                declare static function normalise          (byref as const cvec                                          , byref as const real) as vec4
                #endif
                #ifdef _MATH_SVEC_BI_
                declare static function normalise          (byref as const svec                                          , byref as const real) as vec4
                #endif
                declare static function normalise          (byref as const vec4)                                                                as vec4
                declare        sub      normalise          ()
                declare const  function toJSON             (byref as const boolean => false) as string
                declare static function unitX              () as vec4
                declare static function unitY              () as vec4
                declare static function unitZ              () as vec4
                declare static function unitW              () as vec4
            end type
            
            declare operator +  (byref as const vec4, byref as const vec4) as vec4
            declare operator -  (byref as const vec4)                      as vec4
            declare operator -  (byref as const vec4, byref as const vec4) as vec4
            declare operator *  (byref as const vec4, byref as const real) as vec4
            declare operator *  (byref as const real, byref as const vec4) as vec4
            declare operator *  (byref as const vec4, byref as const vec4) as vec4
            declare operator /  (byref as const vec4, byref as const real) as vec4
            declare operator /  (byref as const vec4, byref as const vec4) as vec4
            declare operator =  (byref as const vec4, byref as const vec4) as boolean
            declare operator <> (byref as const vec4, byref as const vec4) as boolean
            
            declare function dot  (byref as const real, byref as const real, byref as const real, byref as const real, byref as const vec4)                                                                as real
            declare function dot  (byref as const vec2                     , byref as const real, byref as const real, byref as const vec4)                                                                as real
            #ifdef _MATH_PVEC_BI_
            declare function dot  (byref as const pvec                     , byref as const real, byref as const real, byref as const vec4)                                                                as real
            #endif
            declare function dot  (byref as const vec3                                          , byref as const real, byref as const vec4)                                                                as real
            #ifdef _MATH_CVEC_BI_
            declare function dot  (byref as const cvec                                          , byref as const real, byref as const vec4)                                                                as real
            #endif
            #ifdef _MATH_SVEC_BI_
            declare function dot  (byref as const svec                                          , byref as const real, byref as const vec4)                                                                as real
            #endif
            declare function dot  (byref as const vec4                                                               , byref as const real, byref as const real, byref as const real, byref as const real) as real
            declare function dot  (byref as const vec4                                                               , byref as const vec2                     , byref as const real, byref as const real) as real
            #ifdef _MATH_PVEC_BI_
            declare function dot  (byref as const vec4                                                               , byref as const pvec                     , byref as const real, byref as const real) as real
            #endif
            declare function dot  (byref as const vec4                                                               , byref as const vec3                                          , byref as const real) as real
            #ifdef _MATH_CVEC_BI_
            declare function dot  (byref as const vec4                                                               , byref as const cvec                                          , byref as const real) as real
            #endif
            #ifdef _MATH_SVEC_BI_
            declare function dot  (byref as const vec4                                                               , byref as const svec                                          , byref as const real) as real
            #endif
            declare function dot  (byref as const vec4                                                               , byref as const vec4)                                                                as real
            declare function eq   (byref as const real, byref as const real, byref as const real, byref as const real, byref as const vec4                                                               , byref as const real => epsilon) as boolean
            declare function eq   (byref as const vec2                     , byref as const real, byref as const real, byref as const vec4                                                               , byref as const real => epsilon) as boolean
            #ifdef _MATH_PVEC_BI_
            declare function eq   (byref as const pvec                     , byref as const real, byref as const real, byref as const vec4                                                               , byref as const real => epsilon) as boolean
            #endif
            declare function eq   (byref as const vec3                                          , byref as const real, byref as const vec4                                                               , byref as const real => epsilon) as boolean
            #ifdef _MATH_CVEC_BI_
            declare function eq   (byref as const cvec                                          , byref as const real, byref as const vec4                                                               , byref as const real => epsilon) as boolean
            #endif
            #ifdef _MATH_SVEC_BI_
            declare function eq   (byref as const svec                                          , byref as const real, byref as const vec4                                                               , byref as const real => epsilon) as boolean
            #endif
            declare function eq   (byref as const vec4                                                               , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real => epsilon) as boolean
            declare function eq   (byref as const vec4                                                               , byref as const vec2                     , byref as const real, byref as const real, byref as const real => epsilon) as boolean
            #ifdef _MATH_PVEC_BI_
            declare function eq   (byref as const vec4                                                               , byref as const pvec                     , byref as const real, byref as const real, byref as const real => epsilon) as boolean
            #endif
            declare function eq   (byref as const vec4                                                               , byref as const vec3                                          , byref as const real, byref as const real => epsilon) as boolean
            #ifdef _MATH_CVEC_BI_
            declare function eq   (byref as const vec4                                                               , byref as const cvec                                          , byref as const real, byref as const real => epsilon) as boolean
            #endif
            #ifdef _MATH_SVEC_BI_
            declare function eq   (byref as const vec4                                                               , byref as const svec                                          , byref as const real, byref as const real => epsilon) as boolean
            #endif
            declare function eq   (byref as const vec4                                                               , byref as const vec4                                                               , byref as const real => epsilon) as boolean
            declare function lerp (byref as const real, byref as const real, byref as const real, byref as const real, byref as const vec4                                                               , byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const real, byref as const real, byref as const real, byref as const real, byref as const vec4                                                               , byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const real, byref as const real, byref as const real, byref as const real, byref as const vec4                                                               , byref as const real, byref as const easing.curve) as vec4
            #endif
            declare function lerp (byref as const vec2                     , byref as const real, byref as const real, byref as const vec4                                                               , byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const vec2                     , byref as const real, byref as const real, byref as const vec4                                                               , byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const vec2                     , byref as const real, byref as const real, byref as const vec4                                                               , byref as const real, byref as const easing.curve) as vec4
            #endif
            #ifdef _MATH_PVEC_BI_
            declare function lerp (byref as const pvec                     , byref as const real, byref as const real, byref as const vec4                                                               , byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const pvec                     , byref as const real, byref as const real, byref as const vec4                                                               , byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const pvec                     , byref as const real, byref as const real, byref as const vec4                                                               , byref as const real, byref as const easing.curve) as vec4
            #endif
            #endif
            declare function lerp (byref as const vec3                                          , byref as const real, byref as const vec4                                                               , byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const vec3                                          , byref as const real, byref as const vec4                                                               , byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const vec3                                          , byref as const real, byref as const vec4                                                               , byref as const real, byref as const easing.curve) as vec4
            #endif
            #ifdef _MATH_CVEC_BI_
            declare function lerp (byref as const cvec                                          , byref as const real, byref as const vec4                                                               , byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const cvec                                          , byref as const real, byref as const vec4                                                               , byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const cvec                                          , byref as const real, byref as const vec4                                                               , byref as const real, byref as const easing.curve) as vec4
            #endif
            #endif
            #ifdef _MATH_SVEC_BI_
            declare function lerp (byref as const svec                                          , byref as const real, byref as const vec4                                                               , byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const svec                                          , byref as const real, byref as const vec4                                                               , byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const svec                                          , byref as const real, byref as const vec4                                                               , byref as const real, byref as const easing.curve) as vec4
            #endif
            #endif
            declare function lerp (byref as const vec4                                                               , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const vec4                                                               , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const vec4                                                               , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const easing.curve) as vec4
            #endif
            declare function lerp (byref as const vec4                                                               , byref as const vec2                     , byref as const real, byref as const real, byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const vec4                                                               , byref as const vec2                     , byref as const real, byref as const real, byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const vec4                                                               , byref as const vec2                     , byref as const real, byref as const real, byref as const real, byref as const easing.curve) as vec4
            #endif
            #ifdef _MATH_PVEC_BI_
            declare function lerp (byref as const vec4                                                               , byref as const pvec                     , byref as const real, byref as const real, byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const vec4                                                               , byref as const pvec                     , byref as const real, byref as const real, byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const vec4                                                               , byref as const pvec                     , byref as const real, byref as const real, byref as const real, byref as const easing.curve) as vec4
            #endif
            #endif
            declare function lerp (byref as const vec4                                                               , byref as const vec3                                          , byref as const real, byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const vec4                                                               , byref as const vec3                                          , byref as const real, byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const vec4                                                               , byref as const vec3                                          , byref as const real, byref as const real, byref as const easing.curve) as vec4
            #endif
            #ifdef _MATH_CVEC_BI_
            declare function lerp (byref as const vec4                                                               , byref as const cvec                                          , byref as const real, byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const vec4                                                               , byref as const cvec                                          , byref as const real, byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const vec4                                                               , byref as const cvec                                          , byref as const real, byref as const real, byref as const easing.curve) as vec4
            #endif
            #endif
            #ifdef _MATH_SVEC_BI_
            declare function lerp (byref as const vec4                                                               , byref as const svec                                          , byref as const real, byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const vec4                                                               , byref as const svec                                          , byref as const real, byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const vec4                                                               , byref as const svec                                          , byref as const real, byref as const real, byref as const easing.curve) as vec4
            #endif
            #endif
            declare function lerp (byref as const vec4                                                               , byref as const vec4                                                               , byref as const real) as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const vec4                                                               , byref as const vec4                                                               , byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const vec4                                                               , byref as const vec4                                                               , byref as const real, byref as const easing.curve) as vec4
            #endif
        end namespace
        #include "vec4_constructors.bas"
        #include "vec4_intrinsic_operators.bas"
        #include "vec4_properties.bas"
        #include "vec4_methods.bas"
        #include "vec4_extrinsic_operators.bas"
        #include "vec4_functions.bas"
    #endif
#endif