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
            declare operator +    (byref as const rational, byref as const longint)  as rational
            declare operator +    (byref as const rational, byref as const rational) as rational
            declare operator -    (byref as const rational)                          as rational
            declare operator -    (byref as const longint , byref as const rational) as rational
            declare operator -    (byref as const rational, byref as const longint)  as rational
            declare operator -    (byref as const rational, byref as const rational) as rational
            declare operator *    (byref as const longint , byref as const rational) as rational
            declare operator *    (byref as const rational, byref as const longint)  as rational
            declare operator *    (byref as const rational, byref as const rational) as rational
            declare operator /    (byref as const longint , byref as const rational) as rational
            declare operator /    (byref as const rational, byref as const longint)  as rational
            declare operator /    (byref as const rational, byref as const rational) as rational
            declare operator ^    (byref as const rational, byref as const longint)  as rational
            declare operator <    (byref as const longint , byref as const rational) as boolean
            declare operator <    (byref as const rational, byref as const longint)  as boolean
            declare operator <    (byref as const rational, byref as const rational) as boolean
            declare operator <=   (byref as const longint , byref as const rational) as boolean
            declare operator <=   (byref as const rational, byref as const longint)  as boolean
            declare operator <=   (byref as const rational, byref as const rational) as boolean
            declare operator =    (byref as const longint , byref as const rational) as boolean
            declare operator =    (byref as const rational, byref as const longint)  as boolean
            declare operator =    (byref as const rational, byref as const rational) as boolean
            declare operator <>   (byref as const longint , byref as const rational) as boolean
            declare operator <>   (byref as const rational, byref as const longint)  as boolean
            declare operator <>   (byref as const rational, byref as const rational) as boolean
            declare operator >=   (byref as const longint , byref as const rational) as boolean
            declare operator >=   (byref as const rational, byref as const longint)  as boolean
            declare operator >=   (byref as const rational, byref as const rational) as boolean
            declare operator >    (byref as const longint , byref as const rational) as boolean
            declare operator >    (byref as const rational, byref as const longint)  as boolean
            declare operator >    (byref as const rational, byref as const rational) as boolean
            declare operator abs  (byref as const rational) as rational
            declare operator acos (byref as const rational) as real
            declare operator asin (byref as const rational) as real
            declare operator atn  (byref as const rational) as real
            declare operator cos  (byref as const rational) as real
            declare operator sin  (byref as const rational) as real
            declare operator tan  (byref as const rational) as real
            
            'declare function acosh (byref as const rational) as real
            'declare function asinh (byref as const rational) as real
            'declare function atanh (byref as const rational) as real
            'declare function lerp  (byref as const rational, byref as const rational, byref as const real) as rational
        end namespace
        #include "rational_constructors.bas"
        #include "rational_intrinsic_operators.bas"
        #include "rational_properties.bas"
        #include "rational_methods.bas"
        #include "rational_extrinsic_operators.bas"
    #endif
#endif