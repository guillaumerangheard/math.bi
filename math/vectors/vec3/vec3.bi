#ifdef _MATH_BI_
    #ifndef _MATH_VEC3_BI_
        #define _MATH_VEC3_BI_
        namespace math
            type vec3
                as real x, y, z
                
                declare constructor ()
                declare constructor (byref as const real, byref as const real, byref as const real => 0d)
                declare constructor (byref as const vec2                     , byref as const real => 0d)
                #ifdef _MATH_PVEC_BI_
                declare constructor (byref as const pvec                     , byref as const real => 0d)
                #endif
                declare constructor (byref as const vec3)
                
                declare       operator +=   (byref as const vec3)
                declare       operator -=   (byref as const vec3)
                declare       operator *=   (byref as const real)
                declare       operator *=   (byref as const vec3)
                declare       operator /=   (byref as const real)
                declare       operator /=   (byref as const vec3)
                declare const operator cast () as string
                declare       operator let  (byref as const vec2)
                #ifdef _MATH_PVEC_BI_
                declare       operator let  (byref as const pvec)
                #endif
                declare       operator let  (byref as const vec3)
                
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
                
                declare const  function MiNorm    (byref as const real => 2.0) as real
                declare const  function toJSON    (byref as const boolean => false) as string
                declare static function unitX     () as vec3
                declare static function unitY     () as vec3
                declare static function unitZ     () as vec3
            end type
            
            declare operator +  (byref as const vec3, byref as const vec3) as vec3
            declare operator -  (byref as const vec3)                      as vec3
            declare operator -  (byref as const vec3, byref as const vec3) as vec3
            declare operator *  (byref as const vec3, byref as const real) as vec3
            declare operator *  (byref as const real, byref as const vec3) as vec3
            declare operator *  (byref as const vec3, byref as const vec3) as vec3
            declare operator /  (byref as const vec3, byref as const real) as vec3
            declare operator /  (byref as const vec3, byref as const vec3) as vec3
            declare operator =  (byref as const vec3, byref as const vec3) as boolean
            declare operator <> (byref as const vec3, byref as const vec3) as boolean
            
            declare function cross (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as vec3
            declare function cross (byref as const real, byref as const real, byref as const real, byref as const vec2                     , byref as const real) as vec3
            #ifdef _MATH_PVEC_BI_
            declare function cross (byref as const real, byref as const real, byref as const real, byref as const pvec                     , byref as const real) as vec3
            #endif
            declare function cross (byref as const real, byref as const real, byref as const real, byref as const vec3)                                           as vec3
            declare function cross (byref as const vec2                     , byref as const real, byref as const real, byref as const real, byref as const real) as vec3
            declare function cross (byref as const vec2                     , byref as const real, byref as const vec2                     , byref as const real) as vec3
            #ifdef _MATH_PVEC_BI_
            declare function cross (byref as const vec2                     , byref as const real, byref as const pvec                     , byref as const real) as vec3
            #endif
            declare function cross (byref as const vec2                     , byref as const real, byref as const vec3)                                           as vec3
            #ifdef _MATH_PVEC_BI_
            declare function cross (byref as const pvec                     , byref as const real, byref as const real, byref as const real, byref as const real) as vec3
            declare function cross (byref as const pvec                     , byref as const real, byref as const vec2                     , byref as const real) as vec3
            declare function cross (byref as const pvec                     , byref as const real, byref as const pvec                     , byref as const real) as vec3
            declare function cross (byref as const pvec                     , byref as const real, byref as const vec3)                                           as vec3
            #endif
            declare function cross (byref as const vec3                                          , byref as const real, byref as const real, byref as const real) as vec3
            declare function cross (byref as const vec3                                          , byref as const vec2                     , byref as const real) as vec3
            #ifdef _MATH_PVEC_BI_
            declare function cross (byref as const vec3                                          , byref as const pvec                     , byref as const real) as vec3
            #endif
            declare function cross (byref as const vec3                                          , byref as const vec3)                                           as vec3
            declare function dot   (byref as const real, byref as const real, byref as const real, byref as const vec3)                                           as real
            declare function dot   (byref as const vec2                     , byref as const real, byref as const vec3)                                           as real
            #ifdef _MATH_PVEC_BI_
            declare function dot   (byref as const pvec                     , byref as const real, byref as const vec3)                                           as real
            #endif
            declare function dot   (byref as const vec3                                          , byref as const real, byref as const real, byref as const real) as real
            declare function dot   (byref as const vec3                                          , byref as const vec2                     , byref as const real) as real
            #ifdef _MATH_PVEC_BI_
            declare function dot   (byref as const vec3                                          , byref as const pvec                     , byref as const real) as real
            #endif
            declare function dot   (byref as const vec3                                          , byref as const vec3)                                           as real
            declare function dot   (byref as const real, byref as const real, byref as const real, byref as const real, byref as const vec3                                          , byref as const real) as real
            declare function dot   (byref as const vec2                     , byref as const real, byref as const real, byref as const vec3                                          , byref as const real) as real
            #ifdef _MATH_PVEC_BI_
            declare function dot   (byref as const pvec                     , byref as const real, byref as const real, byref as const vec3                                          , byref as const real) as real
            #endif
            declare function dot   (byref as const vec3                                          , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
            declare function dot   (byref as const vec3                                          , byref as const real, byref as const vec2                     , byref as const real, byref as const real) as real
            #ifdef _MATH_PVEC_BI_
            declare function dot   (byref as const vec3                                          , byref as const real, byref as const pvec                     , byref as const real, byref as const real) as real
            #endif
            declare function dot   (byref as const vec3                                          , byref as const real, byref as const vec3                                          , byref as const real) as real
            declare function eq    (byref as const real, byref as const real, byref as const real, byref as const vec3                                          , byref as const real => epsilon) as boolean
            declare function eq    (byref as const vec2                     , byref as const real, byref as const vec3                                          , byref as const real => epsilon) as boolean
            #ifdef _MATH_PVEC_BI_
            declare function eq    (byref as const pvec                     , byref as const real, byref as const vec3                                          , byref as const real => epsilon) as boolean
            #endif
            declare function eq    (byref as const vec3                                          , byref as const real, byref as const real, byref as const real, byref as const real => epsilon) as boolean
            declare function eq    (byref as const vec3                                          , byref as const vec2                     , byref as const real, byref as const real => epsilon) as boolean
            #ifdef _MATH_PVEC_BI_
            declare function eq    (byref as const vec3                                          , byref as const pvec                     , byref as const real, byref as const real => epsilon) as boolean
            #endif
            declare function eq    (byref as const vec3                                          , byref as const vec3                                          , byref as const real => epsilon) as boolean
            declare function eq    (byref as const real, byref as const real, byref as const real, byref as const real, byref as const vec3                                          , byref as const real, byref as const real => epsilon) as boolean
            declare function eq    (byref as const vec2                     , byref as const real, byref as const real, byref as const vec3                                          , byref as const real, byref as const real => epsilon) as boolean
            #ifdef _MATH_PVEC_BI_
            declare function eq    (byref as const pvec                     , byref as const real, byref as const real, byref as const vec3                                          , byref as const real, byref as const real => epsilon) as boolean
            #endif
            declare function eq    (byref as const vec3                                          , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real => epsilon) as boolean
            declare function eq    (byref as const vec3                                          , byref as const real, byref as const vec2                     , byref as const real, byref as const real, byref as const real => epsilon) as boolean
            #ifdef _MATH_PVEC_BI_
            declare function eq    (byref as const vec3                                          , byref as const real, byref as const pvec                     , byref as const real, byref as const real, byref as const real => epsilon) as boolean
            #endif
            declare function eq    (byref as const vec3                                          , byref as const real, byref as const vec3                                          , byref as const real, byref as const real => epsilon) as boolean
            declare function lerp  (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const easing.curve)    as vec3
            #endif
            declare function lerp  (byref as const real, byref as const real, byref as const real, byref as const vec2                     , byref as const real, byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const real, byref as const real, byref as const real, byref as const vec2                     , byref as const real, byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const real, byref as const real, byref as const real, byref as const vec2                     , byref as const real, byref as const real, byref as const easing.curve)    as vec3
            #endif
            #ifdef _MATH_PVEC_BI_
            declare function lerp  (byref as const real, byref as const real, byref as const real, byref as const pvec                     , byref as const real, byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const real, byref as const real, byref as const real, byref as const pvec                     , byref as const real, byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const real, byref as const real, byref as const real, byref as const pvec                     , byref as const real, byref as const real, byref as const easing.curve)    as vec3
            #endif
            #endif
            declare function lerp  (byref as const real, byref as const real, byref as const real, byref as const vec3                                          , byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const real, byref as const real, byref as const real, byref as const vec3                                          , byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const real, byref as const real, byref as const real, byref as const vec3                                          , byref as const real, byref as const easing.curve)    as vec3
            #endif
            declare function lerp  (byref as const vec2                     , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const vec2                     , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const vec2                     , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const easing.curve)    as vec3
            #endif
            declare function lerp  (byref as const vec2                     , byref as const real, byref as const vec2                     , byref as const real, byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const vec2                     , byref as const real, byref as const vec2                     , byref as const real, byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const vec2                     , byref as const real, byref as const vec2                     , byref as const real, byref as const real, byref as const easing.curve)    as vec3
            #endif
            #ifdef _MATH_PVEC_BI_
            declare function lerp  (byref as const vec2                     , byref as const real, byref as const pvec                     , byref as const real, byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const vec2                     , byref as const real, byref as const pvec                     , byref as const real, byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const vec2                     , byref as const real, byref as const pvec                     , byref as const real, byref as const real, byref as const easing.curve)    as vec3
            #endif
            #endif
            declare function lerp  (byref as const vec2                     , byref as const real, byref as const vec3                                          , byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const vec2                     , byref as const real, byref as const vec3                                          , byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const vec2                     , byref as const real, byref as const vec3                                          , byref as const real, byref as const easing.curve)    as vec3
            #endif
            #ifdef _MATH_PVEC_BI_
            declare function lerp  (byref as const pvec                     , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const pvec                     , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const pvec                     , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const easing.curve)    as vec3
            #endif
            declare function lerp  (byref as const pvec                     , byref as const real, byref as const vec2                     , byref as const real, byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const pvec                     , byref as const real, byref as const vec2                     , byref as const real, byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const pvec                     , byref as const real, byref as const vec2                     , byref as const real, byref as const real, byref as const easing.curve)    as vec3
            #endif
            declare function lerp  (byref as const pvec                     , byref as const real, byref as const pvec                     , byref as const real, byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const pvec                     , byref as const real, byref as const pvec                     , byref as const real, byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const pvec                     , byref as const real, byref as const pvec                     , byref as const real, byref as const real, byref as const easing.curve)    as vec3
            #endif
            declare function lerp  (byref as const pvec                     , byref as const real, byref as const vec3                                          , byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const pvec                     , byref as const real, byref as const vec3                                          , byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const pvec                     , byref as const real, byref as const vec3                                          , byref as const real, byref as const easing.curve)    as vec3
            #endif
            #endif
            declare function lerp  (byref as const vec3                                          , byref as const real, byref as const real, byref as const real, byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const vec3                                          , byref as const real, byref as const real, byref as const real, byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const vec3                                          , byref as const real, byref as const real, byref as const real, byref as const real, byref as const easing.curve)    as vec3
            #endif
            declare function lerp  (byref as const vec3                                          , byref as const vec2                     , byref as const real, byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const vec3                                          , byref as const vec2                     , byref as const real, byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const vec3                                          , byref as const vec2                     , byref as const real, byref as const real, byref as const easing.curve)    as vec3
            #endif
            #ifdef _MATH_PVEC_BI_
            declare function lerp  (byref as const vec3                                          , byref as const pvec                     , byref as const real, byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const vec3                                          , byref as const pvec                     , byref as const real, byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const vec3                                          , byref as const pvec                     , byref as const real, byref as const real, byref as const easing.curve)    as vec3
            #endif
            #endif
            declare function lerp  (byref as const vec3                                          , byref as const vec3                                          , byref as const real)                     as vec3
            #ifdef _EASING_BI_
            declare function lerp  (byref as const vec3                                          , byref as const vec3                                          , byref as const real,       as const easing.equation) as vec3
            declare function lerp  (byref as const vec3                                          , byref as const vec3                                          , byref as const real, byref as const easing.curve)    as vec3
            #endif
        end namespace
        #include "vec3_constructors.bas"
        #include "vec3_intrinsic_operators.bas"
        #include "vec3_properties.bas"
        #include "vec3_methods.bas"
        #include "vec3_extrinsic_operators.bas"
        #include "vec3_functions.bas"
    #endif
#endif