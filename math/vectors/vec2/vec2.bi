#ifdef _MATH_BI_
    #ifndef _MATH_VEC2_BI_
        #define _MATH_VEC2_BI_
        namespace math
            type vec2
                as real x, y
                
                declare constructor ()
                declare constructor (byref as const real, byref as const real)
                declare constructor (byref as const vec2)
                
                declare       operator +=   (byref as const vec2)
                declare       operator -=   (byref as const vec2)
                declare       operator *=   (byref as const real)
                declare       operator *=   (byref as const vec2)
                declare       operator /=   (byref as const real)
                declare       operator /=   (byref as const vec2)
                declare const operator cast () as string
                declare       operator let  (byref as const vec2)
                
                declare const property ChNorm () as real
                declare const property MaNorm () as real
                declare const property norm   () as real
                declare       property norm   (byref as const real)
                declare const property sqNorm () as real
                declare const property theta  () as real
                declare       property theta  (byref as const real)
                
                #ifdef _MATH_ANGLE_BI_
                declare static function fromPolar overload (byref as const real                          , byref as const real) as vec2
                declare static function fromPolar          (byref as const real, byref as const angleUnit, byref as const real) as vec2
                declare static function fromPolar          (byref as const angle                         , byref as const real) as vec2
                #else
                declare static function fromPolar          (byref as const real, byref as const real) as vec2
                #endif
                declare const  function isNull    overload ()                    as boolean
                declare const  function isNull             (byref as const real) as boolean
                declare const  function isUnit    overload ()                    as boolean
                declare const  function isUnit             (byref as const real) as boolean
                declare const  function MiNorm             (byref as const real => 2d) as real
                declare        sub      normalise          ()
                declare static function random    overload ()                                                                                   as vec2
                declare static function random             (byref as const real)                                                                as vec2
                declare static function random             (byref as const real, byref as const real)                                           as vec2
                declare static function random             (byref as const real, byref as const real, byref as const real, byref as const real) as vec2
                #ifdef _MATH_ANGLE_BI_
                declare        sub      rotate    overload (byref as const real, byref as const angleUnit => defaultAngleUnit)
                declare        sub      rotate             (byref as const math.angle)
                #else
                declare        sub      rotate             (byref as const real)
                #endif
                declare const  function toJSON             (byref as const boolean => false) as string
                declare static function unitX              () as vec2
                declare static function unitY              () as vec2
            end type
            
            declare operator +  (byref as const vec2 , byref as const vec2)  as vec2
            declare operator -  (byref as const vec2)                        as vec2
            declare operator -  (byref as const vec2 , byref as const vec2)  as vec2
            declare operator *  (byref as const vec2 , byref as const real)  as vec2
            declare operator *  (byref as const real , byref as const vec2)  as vec2
            declare operator *  (byref as const vec2 , byref as const vec2)  as vec2
            declare operator /  (byref as const vec2 , byref as const real)  as vec2
            declare operator /  (byref as const vec2 , byref as const vec2)  as vec2
            declare operator =  (byref as const vec2 , byref as const vec2)  as boolean
            declare operator <> (byref as const vec2 , byref as const vec2)  as boolean
            
            declare function cmp   (byref as const vec2, byref as const vec2, byref as const real => epsilon) as boolean
            declare function cross (byref as const vec2, byref as const vec2) as real
            declare function dot   (byref as const vec2, byref as const vec2) as real
            declare function lerp  (byref as const vec2, byref as const vec2, byref as const real)                                 as vec2
            #ifdef _EASING_BI_
            declare function lerp  (byref as const vec2, byref as const vec2, byref as const real,       as const easing.equation) as vec2
            declare function lerp  (byref as const vec2, byref as const vec2, byref as const real, byref as const easing.curve)    as vec2
            #endif
        end namespace
        #include "vec2_constructors.bas"
        #include "vec2_intrinsic_operators.bas"
        #include "vec2_properties.bas"
        #include "vec2_methods.bas"
        #include "vec2_extrinsic_operators.bas"
        #include "vec2_functions.bas"
    #endif
#endif