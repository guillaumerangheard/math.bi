#ifdef _MATH_BI_
    #ifndef _MATH_CVEC_BI_
        #define _MATH_CVEC_BI_
        namespace math
            type cvec
                public:
                    as real z
                    
                    declare constructor ()
                    declare constructor (byref as const real                          , byref as const real, byref as const real => 0d)
                    #ifdef _MATH_ANGLE_BI_
                    declare constructor (byref as const real, byref as const angleUnit, byref as const real, byref as const real => 0d)
                    declare constructor (byref as const angle                         , byref as const real, byref as const real => 0d)
                    #endif
                    declare constructor (byref as const vec2                                               , byref as const real => 0d)
                    #ifdef _MATH_PVEC_BI_
                    declare constructor (byref as const pvec                                               , byref as const real => 0d)
                    #endif
                    declare constructor (byref as const vec3)
                    declare constructor (byref as const cvec)
                    
                    declare       operator +=   (byref as const vec3)
                    declare       operator +=   (byref as const cvec)
                    declare       operator -=   (byref as const vec3)
                    declare       operator -=   (byref as const cvec)
                    declare       operator *=   (byref as const real)
                    declare       operator *=   (byref as const vec3)
                    declare       operator *=   (byref as const cvec)
                    declare       operator /=   (byref as const real)
                    declare       operator /=   (byref as const vec3)
                    declare       operator /=   (byref as const cvec)
                    declare const operator cast () as string
                    declare       operator let  (byref as const vec2)
                    #ifdef _MATH_PVEC_BI_
                    declare       operator let  (byref as const pvec)
                    #endif
                    declare       operator let  (byref as const vec3)
                    declare       operator let  (byref as const cvec)
                    
                    declare const property ChNorm () as real
                    declare const property MaNorm () as real
                    declare const property norm   () as real
                    declare       property norm   (byref as const real)
                    declare const property sqNorm () as real
                    declare const property x      () as real
                    declare       property x      (byref as const real)
                    declare const property xy     () as vec2
                    declare       property xy     (byref as const vec2)
                    #ifdef _MATH_PVEC_BI_
                    declare       property xy     (byref as const pvec)
                    #endif
                    declare const property y      () as real
                    declare       property y      (byref as const real)
                    
                    declare static function fromCartesian          (byref as const real, byref as const real, byref as const real => 0d) as cvec
                    declare const  function isNull        overload ()                    as boolean
                    declare const  function isNull                 (byref as const real) as boolean
                    declare const  function isUnit        overload ()                    as boolean
                    declare const  function isUnit                 (byref as const real) as boolean
                    declare const  function MiNorm                 (byref as const real => 2d) as real
                    declare        sub      normalise              ()
                    declare const  function toJSON                 (byref as const boolean => false) as string
                    declare static function unitX                  () as cvec
                    declare static function unitY                  () as cvec
                    declare static function unitZ                  () as cvec
                private:
                    as real _a, _ ' Azimuth in radians.
                            _r    ' Radius.
            end type
            
            #ifdef MATH_FORCE_CARTESIAN
                #define cv_rt vec3
            #else
                #define cv_rt cvec
            #endif
            
            declare operator +  (byref as const vec3, byref as const cvec) as cv_rt
            declare operator +  (byref as const cvec, byref as const vec3) as cv_rt
            declare operator +  (byref as const cvec, byref as const cvec) as cvec
            declare operator -  (byref as const cvec)                      as cvec
            declare operator -  (byref as const vec3, byref as const cvec) as cv_rt
            declare operator -  (byref as const cvec, byref as const vec3) as cv_rt
            declare operator -  (byref as const cvec, byref as const cvec) as cvec
            declare operator *  (byref as const cvec, byref as const real) as cvec
            declare operator *  (byref as const real, byref as const cvec) as cvec
            declare operator *  (byref as const vec3, byref as const cvec) as cv_rt
            declare operator *  (byref as const cvec, byref as const vec3) as cv_rt
            declare operator *  (byref as const cvec, byref as const cvec) as cvec
            declare operator /  (byref as const cvec, byref as const real) as cvec
            declare operator /  (byref as const vec3, byref as const cvec) as cv_rt
            declare operator /  (byref as const cvec, byref as const vec3) as cv_rt
            declare operator /  (byref as const cvec, byref as const cvec) as cvec
            declare operator =  (byref as const cvec, byref as const cvec) as boolean
            declare operator <> (byref as const cvec, byref as const cvec) as boolean
            
            declare function cross (byref as const real, byref as const real, byref as const real, byref as const cvec)                                           as cv_rt
            declare function cross (byref as const vec2                     , byref as const real, byref as const cvec)                                           as cv_rt
            #ifdef _MATH_PVEC_BI_
            declare function cross (byref as const pvec                     , byref as const real, byref as const cvec)                                           as cv_rt
            #endif
            declare function cross (byref as const vec3                                          , byref as const cvec)                                           as cv_rt
            declare function cross (byref as const cvec                                          , byref as const real, byref as const real, byref as const real) as cv_rt
            declare function cross (byref as const cvec                                          , byref as const vec2                     , byref as const real) as cv_rt
            #ifdef _MATH_PVEC_BI_
            declare function cross (byref as const cvec                                          , byref as const pvec                     , byref as const real) as cv_rt
            #endif
            declare function cross (byref as const cvec                                          , byref as const vec3)                                           as cv_rt
            declare function cross (byref as const cvec                                          , byref as const cvec)                                           as cv_rt
            declare function dot   (byref as const real, byref as const real, byref as const real, byref as const cvec)                                           as real
            declare function dot   (byref as const vec2                     , byref as const real, byref as const cvec)                                           as real
            #ifdef _MATH_PVEC_BI_
            declare function dot   (byref as const pvec                     , byref as const real, byref as const cvec)                                           as real
            #endif
            declare function dot   (byref as const vec3                                          , byref as const cvec)                                           as real
            declare function dot   (byref as const cvec                                          , byref as const real, byref as const real, byref as const real) as real
            declare function dot   (byref as const cvec                                          , byref as const vec2                     , byref as const real) as real
            #ifdef _MATH_PVEC_BI_
            declare function dot   (byref as const cvec                                          , byref as const pvec                     , byref as const real) as real
            #endif
            declare function dot   (byref as const cvec                                          , byref as const vec3)                                           as real
            declare function dot   (byref as const cvec                                          , byref as const cvec)                                           as real
            declare function dot   (byref as const real, byref as const real, byref as const real, byref as const real, byref as const cvec                                          , byref as const real) as real
            declare function dot   (byref as const vec2                     , byref as const real, byref as const real, byref as const cvec                                          , byref as const real) as real
            #ifdef _MATH_PVEC_BI_
            declare function dot   (byref as const pvec                     , byref as const real, byref as const real, byref as const cvec                                          , byref as const real) as real
            #endif
            declare function dot   (byref as const vec3                                          , byref as const real, byref as const cvec                                          , byref as const real) as real
            declare function dot   (byref as const cvec                                          , byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
            declare function dot   (byref as const cvec                                          , byref as const real, byref as const vec2                     , byref as const real, byref as const real) as real
            #ifdef _MATH_PVEC_BI_
            declare function dot   (byref as const cvec                                          , byref as const real, byref as const pvec                     , byref as const real, byref as const real) as real
            #endif
            declare function dot   (byref as const cvec                                          , byref as const real, byref as const vec3                                          , byref as const real) as real
            declare function dot   (byref as const cvec                                          , byref as const real, byref as const cvec                                          , byref as const real) as real
        end namespace
        #include "cvec_constructors.bas"
        #include "cvec_intrinsic_operators.bas"
        #include "cvec_properties.bas"
        #include "cvec_methods.bas"
        #undef cv_rt
    #endif
#endif