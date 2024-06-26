#ifdef _MATH_BI_
    #ifndef _MATH_VEC4_BI_
        #define _MATH_VEC4_BI_
        namespace math
            type vec4
                as real x, y, z, w
                
                declare constructor ()
                #ifdef _MATH_RATIONAL_BI_
                declare constructor (byref as const rational, byref as const rational, byref as const rational, byref as const rational)
                declare constructor (byref as const rational, byref as const rational, byref as const rational, byref as const real => 0d)
                declare constructor (byref as const rational, byref as const rational, byref as const real    , byref as const rational)
                declare constructor (byref as const rational, byref as const rational, byref as const real    , byref as const real => 0d)
                declare constructor (byref as const rational, byref as const real    , byref as const rational, byref as const rational)
                declare constructor (byref as const rational, byref as const real    , byref as const rational, byref as const real => 0d)
                declare constructor (byref as const rational, byref as const real    , byref as const real    , byref as const rational)
                declare constructor (byref as const rational, byref as const real    , byref as const real    , byref as const real => 0d)
                declare constructor (byref as const real    , byref as const rational, byref as const rational, byref as const rational)
                declare constructor (byref as const real    , byref as const rational, byref as const rational, byref as const real => 0d)
                declare constructor (byref as const real    , byref as const rational, byref as const real    , byref as const rational)
                declare constructor (byref as const real    , byref as const rational, byref as const real    , byref as const real => 0d)
                declare constructor (byref as const real    , byref as const real    , byref as const rational, byref as const rational)
                declare constructor (byref as const real    , byref as const real    , byref as const rational, byref as const real => 0d)
                declare constructor (byref as const real    , byref as const real    , byref as const real    , byref as const rational)
                #endif
                declare constructor (byref as const real    , byref as const real    , byref as const real    , byref as const real => 0d)
                #ifdef _MATH_RATIONAL_BI_
                declare constructor (byref as const vec2                             , byref as const rational, byref as const rational)
                declare constructor (byref as const vec2                             , byref as const rational, byref as const real => 0d)
                declare constructor (byref as const vec2                             , byref as const real    , byref as const rational)
                #endif
                declare constructor (byref as const vec2                             , byref as const real    , byref as const real => 0d)
                #ifdef _MATH_PVEC_BI_
                #ifdef _MATH_RATIONAL_BI_
                declare constructor (byref as const pvec                             , byref as const rational, byref as const rational)
                declare constructor (byref as const pvec                             , byref as const rational, byref as const real => 0d)
                declare constructor (byref as const pvec                             , byref as const real    , byref as const rational)
                #endif
                declare constructor (byref as const pvec                             , byref as const real    , byref as const real => 0d)
                #endif
                #ifdef _MATH_RATIONAL_BI_
                declare constructor (byref as const vec3                                                      , byref as const rational)
                #endif
                declare constructor (byref as const vec3                                                      , byref as const real => 0d)
                #ifdef _MATH_CVEC_BI_
                #ifdef _MATH_RATIONAL_BI_
                declare constructor (byref as const cvec                                                      , byref as const rational)
                #endif
                declare constructor (byref as const cvec                                                      , byref as const real => 0d)
                #endif
                #ifdef _MATH_SVEC_BI_
                #ifdef _MATH_RATIONAL_BI_
                declare constructor (byref as const svec                                                      , byref as const rational)
                #endif
                declare constructor (byref as const svec                                                      , byref as const real => 0d)
                #endif
                declare constructor (byref as const vec4)
                
                declare       operator +=   (byref as const vec4)
                declare       operator -=   (byref as const vec4)
                #ifdef _MATH_RATIONAL_BI_
                declare       operator *=   (byref as const rational)
                #endif
                declare       operator *=   (byref as const real)
                declare       operator *=   (byref as const vec4)
                #ifdef _MATH_RATIONAL_BI_
                declare       operator /=   (byref as const rational)
                #endif
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
                #ifdef _MATH_RATIONAL_BI_
                declare       property norm   (byref as const rational)
                #endif
                declare       property norm   (byref as const real)
                declare const property sqNorm () as real
                declare const property theta  () as real
                #ifdef _MATH_RATIONAL_BI_
                declare       property theta  (byref as const rational)
                #endif
                declare       property theta  (byref as const real)
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
                
                declare const  function isNull    overload ()                    as boolean
                declare const  function isNull             (byref as const real) as boolean
                declare const  function isUnit    overload ()                    as boolean
                declare const  function isUnit             (byref as const real) as boolean
                declare const  function MiNorm             (byref as const real => 2d) as real
                declare        sub      normalise          ()
                declare const  function toJSON             (byref as const boolean => false) as string
                declare static function unitX              () as vec4
                declare static function unitY              () as vec4
                declare static function unitZ              () as vec4
                declare static function unitW              () as vec4
            end type
            
            declare operator +  (byref as const vec4    , byref as const vec4)     as vec4
            declare operator -  (byref as const vec4)                              as vec4
            declare operator -  (byref as const vec4    , byref as const vec4)     as vec4
            #ifdef _MATH_RATIONAL_BI_
            declare operator *  (byref as const rational, byref as const vec4)     as vec4
            #endif
            declare operator *  (byref as const real    , byref as const vec4)     as vec4
            #ifdef _MATH_RATIONAL_BI_
            declare operator *  (byref as const vec4    , byref as const rational) as vec4
            #endif
            declare operator *  (byref as const vec4    , byref as const real)     as vec4
            declare operator *  (byref as const vec4    , byref as const vec4)     as vec4
            #ifdef _MATH_RATIONAL_BI_
            declare operator /  (byref as const vec4    , byref as const rational) as vec4
            #endif
            declare operator /  (byref as const vec4    , byref as const real)     as vec4
            declare operator /  (byref as const vec4    , byref as const vec4)     as vec4
            declare operator =  (byref as const vec4    , byref as const vec4)     as boolean
            declare operator <> (byref as const vec4    , byref as const vec4)     as boolean
            
            declare function cmp  (byref as const vec4, byref as const vec4, byref as const real => epsilon) as boolean
            declare function dot  (byref as const vec4, byref as const vec4) as real
            declare function lerp (byref as const vec4, byref as const vec4, byref as const real)                                 as vec4
            #ifdef _EASING_BI_
            declare function lerp (byref as const vec4, byref as const vec4, byref as const real,       as const easing.equation) as vec4
            declare function lerp (byref as const vec4, byref as const vec4, byref as const real, byref as const easing.curve)    as vec4
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