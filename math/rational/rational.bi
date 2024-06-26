#ifdef _MATH_BI_
    #ifndef _MATH_RATIONAL_BI_
        #define _MATH_RATIONAL_BI_
        namespace math
            type rational
                public:
                    declare constructor ()
                    declare constructor (byref as const longint, byref as const longint => 1ll)
                    declare constructor (byref as const rational)
                    
                    declare       operator +=   (byref as const longint)
                    declare       operator +=   (byref as const rational)
                    declare       operator -=   (byref as const longint)
                    declare       operator -=   (byref as const rational)
                    declare       operator *=   (byref as const longint)
                    declare       operator *=   (byref as const rational)
                    declare       operator /=   (byref as const longint)
                    declare       operator /=   (byref as const rational)
                    declare       operator ^=   (byref as const longint)
                    declare const operator cast () as real
                    declare const operator cast () as string
                    declare       operator let  (byref as const longint)
                    declare       operator let  (byref as const rational)
                    
                    declare const property d          () as longint
                    declare       property d          (byref as const longint)
                    declare const property n          () as longint
                    declare       property n          (byref as const longint)
                    declare const property opposite   () as rational
                    declare const property reciprocal () as rational
                    
                    declare       sub      reduce ()
                    declare const function toJSON (byref as const boolean => false) as string
                private:
                    as longint _n, _ ' Numerator.
                               _d    ' Denominator.
            end type
            
            declare operator +    (byref as const longint , byref as const rational) as rational
            declare operator +    (byref as const real    , byref as const rational) as real
            declare operator +    (byref as const rational, byref as const longint)  as rational
            declare operator +    (byref as const rational, byref as const real)     as real
            declare operator +    (byref as const rational, byref as const rational) as rational
            declare operator -    (byref as const rational)                          as rational
            declare operator -    (byref as const longint , byref as const rational) as rational
            declare operator -    (byref as const real    , byref as const rational) as real
            declare operator -    (byref as const rational, byref as const longint)  as rational
            declare operator -    (byref as const rational, byref as const real)     as real
            declare operator -    (byref as const rational, byref as const rational) as rational
            declare operator *    (byref as const longint , byref as const rational) as rational
            declare operator *    (byref as const real    , byref as const rational) as real
            declare operator *    (byref as const rational, byref as const longint)  as rational
            declare operator *    (byref as const rational, byref as const real   )  as real
            declare operator *    (byref as const rational, byref as const rational) as rational
            declare operator /    (byref as const longint , byref as const rational) as rational
            declare operator /    (byref as const real    , byref as const rational) as real
            declare operator /    (byref as const rational, byref as const longint)  as rational
            declare operator /    (byref as const rational, byref as const real)     as real
            declare operator /    (byref as const rational, byref as const rational) as rational
            declare operator ^    (byref as const real    , byref as const rational) as real
            declare operator ^    (byref as const rational, byref as const longint)  as rational
            declare operator ^    (byref as const rational, byref as const real)     as real
            declare operator <    (byref as const longint , byref as const rational) as boolean
            declare operator <    (byref as const rational, byref as const longint)  as boolean
            declare operator <    (byref as const rational, byref as const rational) as boolean
            declare operator <=   (byref as const longint , byref as const rational) as boolean
            declare operator <=   (byref as const real    , byref as const rational) as boolean
            declare operator <=   (byref as const rational, byref as const longint)  as boolean
            declare operator <=   (byref as const rational, byref as const real)     as boolean
            declare operator <=   (byref as const rational, byref as const rational) as boolean
            declare operator =    (byref as const longint , byref as const rational) as boolean
            declare operator =    (byref as const real    , byref as const rational) as boolean
            declare operator =    (byref as const rational, byref as const longint)  as boolean
            declare operator =    (byref as const rational, byref as const real)     as boolean
            declare operator =    (byref as const rational, byref as const rational) as boolean
            declare operator <>   (byref as const longint , byref as const rational) as boolean
            declare operator <>   (byref as const real    , byref as const rational) as boolean
            declare operator <>   (byref as const rational, byref as const longint)  as boolean
            declare operator <>   (byref as const rational, byref as const real)     as boolean
            declare operator <>   (byref as const rational, byref as const rational) as boolean
            declare operator >=   (byref as const longint , byref as const rational) as boolean
            declare operator >=   (byref as const real    , byref as const rational) as boolean
            declare operator >=   (byref as const rational, byref as const longint)  as boolean
            declare operator >=   (byref as const rational, byref as const real)     as boolean
            declare operator >=   (byref as const rational, byref as const rational) as boolean
            declare operator >    (byref as const longint , byref as const rational) as boolean
            declare operator >    (byref as const real    , byref as const rational) as boolean
            declare operator >    (byref as const rational, byref as const longint)  as boolean
            declare operator >    (byref as const rational, byref as const real)     as boolean
            declare operator >    (byref as const rational, byref as const rational) as boolean
            declare operator abs  (byref as const rational) as rational
            declare operator acos (byref as const rational) as real
            declare operator asin (byref as const rational) as real
            declare operator atn  (byref as const rational) as real
            declare operator cos  (byref as const rational) as real
            declare operator log  (byref as const rational) as real
            declare operator sgn  (byref as const rational) as rational
            declare operator sin  (byref as const rational) as real
            declare operator tan  (byref as const rational) as real
            
            declare function acosh   (byref as const rational) as real
            declare function acot    (byref as const rational) as real
            declare function acoth   (byref as const rational) as real
            #ifdef MATH_EXTENDED_TRIGONOMETRY
            declare function acrd    (byref as const rational) as real
            #endif
            declare function acsc    (byref as const rational) as real
            'declare function acsch   (byref as const rational) as real
            #ifdef MATH_EXTENDED_TRIGONOMETRY
            declare function acvcos  (byref as const rational) as real
            declare function acvsin  (byref as const rational) as real
            declare function aexcsc  (byref as const rational) as real
            declare function aexsec  (byref as const rational) as real
            declare function ahcvcos (byref as const rational) as real
            declare function ahcvsin (byref as const rational) as real
            declare function ahvcos  (byref as const rational) as real
            declare function ahvsin  (byref as const rational) as real
            #endif
            declare function asec    (byref as const rational) as real
            declare function asech   (byref as const rational) as real
            declare function asinh   (byref as const rational) as real
            declare function atan    overload (byref as const real    , byref as const rational) as real
            declare function atan             (byref as const rational, byref as const real)     as real
            declare function atan             (byref as const rational, byref as const rational) as real
            declare function atanh   (byref as const rational) as real
            #ifdef MATH_EXTENDED_TRIGONOMETRY
            declare function avcos   (byref as const rational) as real
            declare function avsin   (byref as const rational) as real
            #endif
            declare function cmp     (byref as const real    , byref as const rational, byref as const real => epsilon) as boolean
            declare function cmp     (byref as const rational, byref as const real    , byref as const real => epsilon) as boolean
            declare function cmp     (byref as const rational, byref as const rational, byref as const real => epsilon) as boolean
            declare function cosh    (byref as const rational) as real
            declare function cot     (byref as const rational) as real
            declare function coth    (byref as const rational) as real
            #ifdef MATH_EXTENDED_TRIGONOMETRY
            declare function crd     (byref as const rational) as real
            #endif
            declare function csc     (byref as const rational) as real
            declare function csch    (byref as const rational) as real
            #ifdef MATH_EXTENDED_TRIGONOMETRY
            declare function cvcos   (byref as const rational) as real
            declare function cvsin   (byref as const rational) as real
            declare function excsc   (byref as const rational) as real
            declare function exsec   (byref as const rational) as real
            declare function hcvcos  (byref as const rational) as real
            declare function hcvsin  (byref as const rational) as real
            declare function hvcos   (byref as const rational) as real
            declare function hvsin   (byref as const rational) as real
            #endif
            declare function lerp    (byref as const real    , byref as const rational, byref as const real)                                 as real
            #ifdef _EASING_BI_
            declare function lerp    (byref as const real    , byref as const rational, byref as const real,       as const easing.equation) as real
            declare function lerp    (byref as const real    , byref as const rational, byref as const real, byref as const easing.curve)    as real
            #endif
            declare function lerp    (byref as const rational, byref as const real    , byref as const real)                                 as real
            #ifdef _EASING_BI_
            declare function lerp    (byref as const rational, byref as const real    , byref as const real,       as const easing.equation) as real
            declare function lerp    (byref as const rational, byref as const real    , byref as const real, byref as const easing.curve)    as real
            #endif
            declare function lerp    (byref as const rational, byref as const rational, byref as const real)                                 as rational
            #ifdef _EASING_BI_
            declare function lerp    (byref as const rational, byref as const rational, byref as const real,       as const easing.equation) as rational
            declare function lerp    (byref as const rational, byref as const rational, byref as const real, byref as const easing.curve)    as rational
            #endif
            declare function log10   (byref as const rational) as real
            declare function log1p   (byref as const rational) as real
            declare function log2    (byref as const rational) as real
            declare function logb    (byref as const real    , byref as const rational) as real
            declare function logb    (byref as const rational, byref as const real)     as real
            declare function logb    (byref as const rational, byref as const rational) as real
            declare function sec     (byref as const rational) as real
            declare function sech    (byref as const rational) as real
            declare function sinh    (byref as const rational) as real
            declare function tanh    (byref as const rational) as real
            #ifdef MATH_EXTENDED_TRIGONOMETRY
            declare function vcos    (byref as const rational) as real
            declare function vsin    (byref as const rational) as real
            #endif
        end namespace
        #include "rational_constructors.bas"
        #include "rational_intrinsic_operators.bas"
        #include "rational_properties.bas"
        #include "rational_methods.bas"
        #include "rational_extrinsic_operators.bas"
        #include "rational_functions.bas"
    #endif
#endif