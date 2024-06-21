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
                    
                    declare const property quadrant () as real
                    declare const property theta    () as real
                    declare       property theta    (byref as const real)
                    declare const property value    () as real
                    declare       property value    (byref as const real)
                    
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
            
            declare function cmp    (byref as const real , byref as const angle, byref as const real => epsilon) as boolean
            declare function cmp    (byref as const angle, byref as const real , byref as const real => epsilon) as boolean
            declare function cmp    (byref as const angle, byref as const angle, byref as const real => epsilon) as boolean
            'declare function cos    (byref as const angle) as real
            declare function cosh   (byref as const angle) as real
            declare function cot    (byref as const angle) as real
            declare function coth   (byref as const angle) as real
            declare function crd    (byref as const angle) as real
            declare function csc    (byref as const angle) as real
            declare function csch   (byref as const angle) as real
            declare function cvcos  (byref as const angle) as real
            declare function cvsin  (byref as const angle) as real
            
            declare function excsc  (byref as const angle) as real
            declare function exsec  (byref as const angle) as real
            declare function hcvcos (byref as const angle) as real
            declare function hcvsin (byref as const angle) as real
            declare function hvcos  (byref as const angle) as real
            declare function hvsin  (byref as const angle) as real
            declare function lerp   (byref as const angle, byref as const angle, byref as const real) as angle
            #ifdef _EASING_BI_
            declare function lerp   (byref as const angle, byref as const angle, byref as const real,       as const easing.equation) as angle
            declare function lerp   (byref as const angle, byref as const angle, byref as const real, byref as const easing.curve)    as angle
            #endif
            declare function sec    (byref as const angle) as real
            declare function sech   (byref as const angle) as real
            'declare function sin    (byref as const angle) as real
            declare function sinh   (byref as const angle) as real
            'declare function tan    (byref as const angle) as real
            declare function tanh   (byref as const angle) as real
            declare function vcos   (byref as const angle) as real
            declare function vsin   (byref as const angle) as real
        end namespace
        #include "angle_constructors.bas"
        #include "angle_intrinsic_operators.bas"
        #include "angle_properties.bas"
        #include "angle_methods.bas"
        #include "angle_extrinsic_operators.bas"
        #include "angle_functions.bas"
    #endif
#endif