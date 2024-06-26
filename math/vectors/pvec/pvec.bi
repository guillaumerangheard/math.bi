#ifdef _MATH_BI_
    #ifndef _MATH_PVEC_BI_
        #define _MATH_PVEC_BI_
        namespace math
            type pvec
                public:
                    declare constructor ()
                    #ifdef _MATH_ANGLE_BI_
                    #ifdef _MATH_RATIONAL_BI_
                    declare constructor (byref as const rational, byref as const angleUnit => defaultAngleUnit)
                    #endif
                    declare constructor (byref as const real    , byref as const angleUnit => defaultAngleUnit)
                    declare constructor (byref as const angle)
                    #ifdef _MATH_RATIONAL_BI_
                    declare constructor (byref as const rational                          , byref as const rational)
                    declare constructor (byref as const rational                          , byref as const real)
                    declare constructor (byref as const real                              , byref as const rational)
                    #endif
                    declare constructor (byref as const real                              , byref as const real)
                    #ifdef _MATH_RATIONAL_BI_
                    declare constructor (byref as const rational, byref as const angleUnit, byref as const rational)
                    declare constructor (byref as const rational, byref as const angleUnit, byref as const real)
                    declare constructor (byref as const real    , byref as const angleUnit, byref as const rational)
                    #endif
                    declare constructor (byref as const real    , byref as const angleUnit, byref as const real)
                    #ifdef _MATH_RATIONAL_BI_
                    declare constructor (byref as const angle                             , byref as const rational)
                    #endif
                    declare constructor (byref as const angle                             , byref as const real)
                    #else
                    #ifdef _MATH_RATIONAL_BI_
                    declare constructor (byref as const rational)
                    #endif
                    declare constructor (byref as const real)
                    #ifdef _MATH_RATIONAL_BI_
                    declare constructor (byref as const rational, byref as const rational)
                    declare constructor (byref as const rational, byref as const real)
                    declare constructor (byref as const real    , byref as const rational)
                    #endif
                    declare constructor (byref as const real    , byref as const real)
                    #endif
                    declare constructor (byref as const vec2)
                    declare constructor (byref as const pvec)
                    
                    declare       operator +=   (byref as const vec2)
                    declare       operator +=   (byref as const pvec)
                    declare       operator -=   (byref as const vec2)
                    declare       operator -=   (byref as const pvec)
                    #ifdef _MATH_RATIONAL_BI_
                    declare       operator *=   (byref as const rational)
                    #endif
                    declare       operator *=   (byref as const real)
                    declare       operator *=   (byref as const vec2)
                    declare       operator *=   (byref as const pvec)
                    #ifdef _MATH_RATIONAL_BI_
                    declare       operator /=   (byref as const rational)
                    #endif
                    declare       operator /=   (byref as const real)
                    declare       operator /=   (byref as const vec2)
                    declare       operator /=   (byref as const pvec)
                    declare const operator cast () as vec2
                    declare const operator cast () as string
                    declare       operator let  (byref as const vec2)
                    declare       operator let  (byref as const pvec)
                    
                    #ifdef _MATH_ANGLE_BI_
                    declare const property azimuth   () as angle
                    #ifdef _MATH_RATIONAL_BI_
                    declare       property azimuth   (byref as const rational)
                    #endif
                    declare       property azimuth   (byref as const real)
                    declare       property azimuth   (byref as const angle)
                    #endif
                    declare const property ChNorm () as real
                    declare const property MaNorm () as real
                    declare const property rho    () as real
                    declare       property rho    (byref as const real)
                    declare const property sqNorm () as real
                    declare const property theta  () as real
                    #ifdef _MATH_RATIONAL_BI_
                    declare       property theta  (byref as const rational)
                    #endif
                    declare       property theta  (byref as const real)
                    declare const property x      () as real
                    declare       property x      (byref as const real)
                    declare const property y      () as real
                    declare       property y      (byref as const real)
                    
                    declare static function fromCartesian          (byref as const real, byref as const real) as pvec
                    declare const  function isNull        overload ()                    as boolean
                    declare const  function isNull                 (byref as const real) as boolean
                    declare const  function isUnit        overload ()                    as boolean
                    declare const  function isUnit                 (byref as const real) as boolean
                    declare const  function MiNorm                 (byref as const real => 2d) as real
                    #ifdef _RNG_BI_
                    
                    #endif
                    declare        sub      normalise              ()
                    #ifdef _RNG_BI_
                    
                    #endif
                    declare const  function toJSON                 (byref as const boolean => false) as string
                    declare const  function unitX                  () as pvec
                    declare const  function unitY                  () as pvec
                private:
                    as real _a, _ ' Azimuth in radians.
                            _r    ' Length.
            end type
            
            #ifdef MATH_FORCE_CARTESIAN
                #define pv_rt vec2
            #else
                #define pv_rt pvec
            #endif
            declare operator +  (byref as const vec2    , byref as const pvec)     as pv_rt
            declare operator +  (byref as const pvec    , byref as const vec2)     as pv_rt
            declare operator +  (byref as const pvec    , byref as const pvec)     as pvec
            declare operator -  (byref as const pvec)                              as pvec
            declare operator -  (byref as const vec2    , byref as const pvec)     as pv_rt
            declare operator -  (byref as const pvec    , byref as const vec2)     as pv_rt
            declare operator -  (byref as const pvec    , byref as const pvec)     as pvec
            #ifdef _MATH_RATIONAL_BI_
            declare operator *  (byref as const rational, byref as const pvec)     as pvec
            #endif
            declare operator *  (byref as const real    , byref as const pvec)     as pvec
            #ifdef _MATH_RATIONAL_BI_
            declare operator *  (byref as const pvec    , byref as const rational) as pvec
            #endif
            declare operator *  (byref as const pvec    , byref as const real)     as pvec
            declare operator *  (byref as const vec2    , byref as const pvec)     as pv_rt
            declare operator *  (byref as const pvec    , byref as const vec2)     as pv_rt
            declare operator *  (byref as const pvec    , byref as const pvec)     as pvec
            #ifdef _MATH_RATIONAL_BI_
            declare operator /  (byref as const pvec    , byref as const rational) as pvec
            #endif
            declare operator /  (byref as const pvec    , byref as const real)     as pvec
            declare operator /  (byref as const vec2    , byref as const pvec)     as pv_rt
            declare operator /  (byref as const pvec    , byref as const vec2)     as pv_rt
            declare operator /  (byref as const pvec    , byref as const pvec)     as pvec
            declare operator =  (byref as const pvec    , byref as const pvec)     as boolean
            declare operator <> (byref as const pvec    , byref as const pvec)     as boolean
            
            declare function cmp   (byref as const vec2, byref as const pvec, byref as const real => epsilon) as boolean
            declare function cmp   (byref as const pvec, byref as const vec2, byref as const real => epsilon) as boolean
            declare function cmp   (byref as const pvec, byref as const pvec, byref as const real => epsilon) as boolean
            declare function cross (byref as const vec2, byref as const pvec) as real
            declare function cross (byref as const pvec, byref as const vec2) as real
            declare function cross (byref as const pvec, byref as const pvec) as real
            declare function dot   (byref as const vec2, byref as const pvec) as real
            declare function dot   (byref as const pvec, byref as const vec2) as real
            declare function dot   (byref as const pvec, byref as const pvec) as real
            declare function lerp  (byref as const vec2, byref as const pvec, byref as const real)                                 as pv_rt
            #ifdef _EASING_BI_
            declare function lerp  (byref as const vec2, byref as const pvec, byref as const real,       as const easing.equation) as pv_rt
            declare function lerp  (byref as const vec2, byref as const pvec, byref as const real, byref as const easing.curve)    as pv_rt
            #endif
            declare function lerp  (byref as const pvec, byref as const vec2, byref as const real)                                 as pv_rt
            #ifdef _EASING_BI_
            declare function lerp  (byref as const pvec, byref as const vec2, byref as const real,       as const easing.equation) as pv_rt
            declare function lerp  (byref as const pvec, byref as const vec2, byref as const real, byref as const easing.curve)    as pv_rt
            #endif
            declare function lerp  (byref as const pvec, byref as const pvec, byref as const real)                                 as pvec
            #ifdef _EASING_BI_
            declare function lerp  (byref as const pvec, byref as const pvec, byref as const real,       as const easing.equation) as pvec
            declare function lerp  (byref as const pvec, byref as const pvec, byref as const real, byref as const easing.curve)    as pvec
            #endif
        end namespace
        #include "pvec_constructors.bas"
        #include "pvec_intrinsic_operators.bas"
        #include "pvec_properties.bas"
        #include "pvec_methods.bas"
        #include "pvec_extrinsic_operators.bas"
        #include "pvec_functions.bas"
        #undef pv_rt
    #endif
#endif