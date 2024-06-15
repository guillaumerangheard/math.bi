#ifdef _MATH_BI_
    #ifndef _MATH_ANGLE_BI_
        #include "units.bi"
        #define _MATH_ANGLE_BI_
        namespace math
            type angle
                public:
                    as angleUnit unit
                    
                    declare constructor ()
                    declare constructor (byref as const real, byref as const angleUnit => defaultAngleUnit)
                    declare constructor (byref as const angle)
                    
                    declare       operator +=   (byref as const real)
                    declare       operator +=   (byref as const angle)
                    declare       operator -=   (byref as const real)
                    declare       operator -=   (byref as const angle)
                    declare       operator *=   (byref as const real)
                    declare       operator /=   (byref as const real)
                    declare const operator cast () as string
                    declare       operator let  (byref as const real)
                    declare       operator let  (byref as const angle)
                    
                    declare const property cosecant      () as real
                    declare const property cosine        () as real
                    declare const property cosh          () as real
                    declare const property cotangent     () as real
                    declare const property covercosine   () as real
                    declare const property coversine     () as real
                    declare const property excosecant    () as real
                    declare const property exsecant      () as real
                    declare const property hacovercosine () as real
                    declare const property hacoversine   () as real
                    declare const property havercosine   () as real
                    declare const property haversine     () as real
                    declare const property octant        () as real
                    declare const property phi           () as real
                    declare       property phi           (byref as const real)
                    declare const property quadrant      () as real
                    declare const property secant        () as real
                    declare const property sextant       () as real
                    declare const property sine          () as real
                    declare const property sinh          () as real
                    declare const property tangent       () as real
                    declare const property tanh          () as real
                    declare const property value         () as real
                    declare       property value         (byref as const real)
                    declare const property vercosine     () as real
                    declare const property versine       () as real
                    
                    declare static function convert             (byref as const real, byref as const angleUnit, byref as const angleUnit => defaultAngleUnit) as real
                    declare const  function isAcute    overload ()                    as boolean
                    declare const  function isAcute             (byref as const real) as boolean
                    declare const  function isFull     overload ()                    as boolean
                    declare const  function isFull              (byref as const real) as boolean
                    declare const  function isNull     overload ()                    as boolean
                    declare const  function isNull              (byref as const real) as boolean
                    declare const  function isOblique  overload ()                    as boolean
                    declare const  function isOblique           (byref as const real) as boolean
                    declare const  function isObtuse   overload ()                    as boolean
                    declare const  function isObtuse            (byref as const real) as boolean
                    declare const  function isReflex   overload ()                    as boolean
                    declare const  function isReflex            (byref as const real) as boolean
                    declare const  function isRight    overload ()                    as boolean
                    declare const  function isRight             (byref as const real) as boolean
                    declare const  function isStraight overload ()                    as boolean
                    declare const  function isStraight          (byref as const real) as boolean
                    declare const  function ntant               (byref as const integer) as real
                    declare static function random     overload ()                                                                                             as angle
                    declare static function random                                                             (byref as const real)                           as angle
                    declare static function random                                                             (byref as const real, byref as const angleUnit) as angle
                    declare static function random                                                             (byref as const angle)                          as angle
                    declare static function random              (byref as const real                          , byref as const real)                           as angle
                    declare static function random              (byref as const real                          , byref as const real, byref as const angleUnit) as angle
                    declare static function random              (byref as const real                          , byref as const angle)                          as angle
                    declare static function random              (byref as const real, byref as const angleUnit, byref as const real)                           as angle
                    declare static function random              (byref as const real, byref as const angleUnit, byref as const real, byref as const angleUnit) as angle
                    declare static function random              (byref as const real, byref as const angleUnit, byref as const angle)                          as angle
                    declare static function random              (byref as const angle                         , byref as const real)                           as angle
                    declare static function random              (byref as const angle                         , byref as const real, byref as const angleUnit) as angle
                    declare static function random              (byref as const angle                         , byref as const angle)                          as angle
                    declare static function render     overload (byref as const real)                           as string
                    declare static function render              (byref as const real, byref as const angleUnit) as string
                    declare const  function render              ()                                              as string
                private:
                    as real _v ' Value in turns.
            end type
            
            declare operator +  (byref as const real , byref as const angle) as angle
            declare operator +  (byref as const angle, byref as const real)  as angle
            declare operator +  (byref as const angle, byref as const angle) as angle
            declare operator -  (byref as const angle)                       as angle
            declare operator -  (byref as const real , byref as const angle) as angle
            declare operator -  (byref as const angle, byref as const real)  as angle
            declare operator -  (byref as const angle, byref as const angle) as angle
            declare operator *  (byref as const real , byref as const angle) as angle
            declare operator *  (byref as const angle, byref as const real)  as angle
            declare operator /  (byref as const angle, byref as const real)  as angle
            declare operator <  (byref as const angle, byref as const real)  as boolean
            declare operator <  (byref as const real , byref as const angle) as boolean
            declare operator <  (byref as const angle, byref as const angle) as boolean
            declare operator <= (byref as const angle, byref as const real)  as boolean
            declare operator <= (byref as const real , byref as const angle) as boolean
            declare operator <= (byref as const angle, byref as const angle) as boolean
            declare operator =  (byref as const angle, byref as const real)  as boolean
            declare operator =  (byref as const real , byref as const angle) as boolean
            declare operator =  (byref as const angle, byref as const angle) as boolean
            declare operator <> (byref as const angle, byref as const real)  as boolean
            declare operator <> (byref as const real , byref as const angle) as boolean
            declare operator <> (byref as const angle, byref as const angle) as boolean
            declare operator >= (byref as const angle, byref as const real)  as boolean
            declare operator >= (byref as const real , byref as const angle) as boolean
            declare operator >= (byref as const angle, byref as const angle) as boolean
            declare operator >  (byref as const angle, byref as const real)  as boolean
            declare operator >  (byref as const real , byref as const angle) as boolean
            declare operator >  (byref as const angle, byref as const angle) as boolean
            
            declare function eq   (byref as const real , byref as const angle, byref as const real => epsilon) as boolean
            declare function eq   (byref as const angle, byref as const real , byref as const real => epsilon) as boolean
            declare function eq   (byref as const angle, byref as const angle, byref as const real => epsilon) as boolean
            declare function lerp (byref as const angle, byref as const angle, byref as const real) as angle
            #ifdef _EASING_BI_
            declare function lerp (byref as const angle, byref as const angle, byref as const real,       as const easing.equation) as angle
            declare function lerp (byref as const angle, byref as const angle, byref as const real, byref as const easing.curve)    as angle
            #endif
        end namespace
        #include "angle_constructors.bas"
        #include "angle_intrinsic_operators.bas"
        #include "angle_properties.bas"
        #include "angle_methods.bas"
        #include "angle_extrinsic_operators.bas"
        #include "angle_functions.bas"
    #endif
#endif