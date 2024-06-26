#ifdef _MATH_BI_
    #ifndef _MATH_COMPLEX_BI_
        #define _MATH_COMPLEX_BI_
        namespace math
            type complex
                as real r, i
                
                declare constructor ()
                declare constructor (byref as const real    , byref as const real => 0d)
                #ifdef _MATH_RATIONAL_BI_
                declare constructor (byref as const real    , byref as const rational)
                declare constructor (byref as const rational)
                declare constructor (byref as const rational, byref as const real)
                declare constructor (byref as const rational, byref as const rational)
                #endif
                declare constructor (byref as const complex)
                
                #ifdef _MATH_RATIONAL_BI_
                declare       operator +=   (byref as const rational)
                #endif
                declare       operator +=   (byref as const real)
                declare       operator +=   (byref as const complex)
                #ifdef _MATH_RATIONAL_BI_
                declare       operator -=   (byref as const rational)
                #endif
                declare       operator -=   (byref as const real)
                declare       operator -=   (byref as const complex)
                #ifdef _MATH_RATIONAL_BI_
                declare       operator *=   (byref as const rational)
                #endif
                declare       operator *=   (byref as const real)
                declare       operator *=   (byref as const complex)
                #ifdef _MATH_RATIONAL_BI_
                declare       operator /=   (byref as const rational)
                #endif
                declare       operator /=   (byref as const real)
                declare       operator /=   (byref as const complex)
                #ifdef _MATH_RATIONAL_BI_
                declare       operator ^=   (byref as const rational)
                #endif
                declare       operator ^=   (byref as const real)
                declare const operator cast () as string
                #ifdef _MATH_RATIONAL_BI_
                declare       operator let  (byref as const rational)
                #endif
                declare       operator let  (byref as const real)
                declare       operator let  (byref as const complex)
                
                declare const property argument    () as real
                declare const property conjugate   () as complex
                declare const property isImaginary () as boolean
                declare const property isReal      () as boolean
                declare const property modulus     () as real
                declare const property reciprocal  () as complex
                
                '#ifdef MATH_ANGLES
                'declare static function fromPolar overload (byref as const real                          , byref as const real) as complex
                'declare static function fromPolar          (byref as const real, byref as const angleUnit, byref as const real) as complex
                'declare static function fromPolar          (byref as const angle                         , byref as const real) as complex
                '#else
                'declare static function fromPolar          (byref as const real, byref as const real) as complex
                '#endif
                #ifdef _RNG_BI_
                declare static function random    overload ()                                               as complex
                declare static function random             (byref as const real)                            as complex
                declare static function random             (byref as const complex)                         as complex
                declare static function random             (byref as const real   , byref as const real)    as complex
                declare static function random             (byref as const real   , byref as const complex) as complex
                declare static function random             (byref as const complex, byref as const real)    as complex
                declare static function random             (byref as const complex, byref as const complex) as complex
                #endif
                declare const  function toJSON             (byref as const boolean => false) as string
            end type
            
            #ifdef _MATH_RATIONAL_BI_
            declare operator +   (byref as const rational, byref as const complex)  as complex
            #endif
            declare operator +   (byref as const real    , byref as const complex)  as complex
            #ifdef _MATH_RATIONAL_BI_
            declare operator +   (byref as const complex , byref as const rational) as complex
            #endif
            declare operator +   (byref as const complex , byref as const real)     as complex
            declare operator +   (byref as const complex , byref as const complex)  as complex
            declare operator -   (byref as const complex)                           as complex
            #ifdef _MATH_RATIONAL_BI_
            declare operator -   (byref as const rational, byref as const complex)  as complex
            #endif
            declare operator -   (byref as const real    , byref as const complex)  as complex
            #ifdef _MATH_RATIONAL_BI_
            declare operator -   (byref as const complex , byref as const rational) as complex
            #endif
            declare operator -   (byref as const complex , byref as const real)     as complex
            declare operator -   (byref as const complex , byref as const complex)  as complex
            #ifdef _MATH_RATIONAL_BI_
            declare operator *   (byref as const rational, byref as const complex)  as complex
            #endif
            declare operator *   (byref as const real    , byref as const complex)  as complex
            #ifdef _MATH_COMPLEX_BI_
            declare operator *   (byref as const complex , byref as const rational) as complex
            #endif
            declare operator *   (byref as const complex , byref as const real)     as complex
            declare operator *   (byref as const complex , byref as const complex)  as complex
            #ifdef _MATH_RATIONAL_BI_
            declare operator /   (byref as const rational, byref as const complex)  as complex
            #endif
            declare operator /   (byref as const real    , byref as const complex)  as complex
            #ifdef _MATH_RATIONAL_BI_
            declare operator /   (byref as const complex , byref as const rational) as complex
            #endif
            declare operator /   (byref as const complex , byref as const real)     as complex
            declare operator /   (byref as const complex , byref as const complex)  as complex
            #ifdef _MATH_RATIONAL_BI_
            declare operator ^   (byref as const complex , byref as const rational) as complex
            #endif
            declare operator ^   (byref as const complex , byref as const real)     as complex
            #ifdef _MATH_RATIONAL_BI_
            declare operator =   (byref as const rational, byref as const complex)  as boolean
            #endif
            declare operator =   (byref as const real    , byref as const complex)  as boolean
            #ifdef _MATH_RATIONAL_BI_
            declare operator =   (byref as const complex , byref as const rational) as boolean
            #endif
            declare operator =   (byref as const complex , byref as const real)     as boolean
            declare operator =   (byref as const complex , byref as const complex)  as boolean
            #ifdef _MATH_RATIONAL_BI_
            declare operator <>  (byref as const rational, byref as const complex)  as boolean
            #endif
            declare operator <>  (byref as const real    , byref as const complex)  as boolean
            #ifdef _MATH_RATIONAL_BI
            declare operator <>  (byref as const complex , byref as const rational) as boolean
            #endif
            declare operator <>  (byref as const complex , byref as const real)     as boolean
            declare operator <>  (byref as const complex , byref as const complex)  as boolean
            declare operator abs (byref as const complex)                           as real
            declare operator cos (byref as const complex)                           as complex
            declare operator log (byref as const complex)                           as complex
            declare operator sgn (byref as const complex)                           as complex
            declare operator sin (byref as const complex)                           as complex
            declare operator sqr (byref as const complex)                           as complex
            declare operator tan (byref as const complex)                           as complex
            
            #ifdef _MATH_RATIONAL_BI_
            declare function cmp   (byref as const rational, byref as const complex , byref as const real => epsilon) as boolean
            #endif
            declare function cmp   (byref as const real    , byref as const complex , byref as const real => epsilon) as boolean
            #ifdef _MATH_RATIONAL_BI_
            declare function cmp   (byref as const complex , byref as const rational, byref as const real => epsilon) as boolean
            #endif
            declare function cmp   (byref as const complex , byref as const real    , byref as const real => epsilon) as boolean
            declare function cmp   (byref as const complex , byref as const complex , byref as const real => epsilon) as boolean
            declare function cosh  (byref as const complex) as complex
            declare function cot   (byref as const complex) as complex
            declare function coth  (byref as const complex) as complex
            declare function csc   (byref as const complex) as complex
            declare function csch  (byref as const complex) as complex
            #ifdef _MATH_RATIONAL_BI_
            declare function lerp  (byref as const rational, byref as const complex , byref as const real)                                 as complex
            #ifdef _EASING_BI_
            declare function lerp  (byref as const rational, byref as const complex , byref as const real,       as const easing.equation) as complex
            declare function lerp  (byref as const rational, byref as const complex , byref as const real, byref as const easing.curve)    as complex
            #endif
            declare function lerp  (byref as const complex , byref as const rational, byref as const real)                                 as complex
            #ifdef _EASING_BI_
            declare function lerp  (byref as const complex , byref as const rational, byref as const real,       as const easing.equation) as complex
            declare function lerp  (byref as const complex , byref as const rational, byref as const real, byref as const easing.curve)    as complex
            #endif
            #endif
            declare function lerp  (byref as const real    , byref as const complex , byref as const real)                                 as complex
            #ifdef _EASING_BI_
            declare function lerp  (byref as const real    , byref as const complex , byref as const real,       as const easing.equation) as complex
            declare function lerp  (byref as const real    , byref as const complex , byref as const real, byref as const easing.curve)    as complex
            #endif
            declare function lerp  (byref as const complex , byref as const real    , byref as const real)                                 as complex
            #ifdef _EASING_BI_
            declare function lerp  (byref as const complex , byref as const real    , byref as const real,       as const easing.equation) as complex
            declare function lerp  (byref as const complex , byref as const real    , byref as const real, byref as const easing.curve)    as complex
            #endif
            declare function lerp  (byref as const complex , byref as const complex , byref as const real)                                 as complex
            #ifdef _EASING_BI_
            declare function lerp  (byref as const complex , byref as const complex , byref as const real,       as const easing.equation) as complex
            declare function lerp  (byref as const complex , byref as const complex , byref as const real, byref as const easing.curve)    as complex
            #endif
            declare function log2  (byref as const complex) as complex
            declare function log10 (byref as const complex) as complex
            declare function log1p (byref as const complex) as complex
            declare function logb  (byref as const real   , byref as const complex) as complex
            declare function logb  (byref as const complex, byref as const real)    as complex
            declare function logb  (byref as const complex, byref as const complex) as complex
            declare function qdt   (byref as const complex) as real
            declare function sec   (byref as const complex) as complex
            declare function sech  (byref as const complex) as complex
            declare function sinh  (byref as const complex) as complex
            declare function tanh  (byref as const complex) as complex
        end namespace
        #include "complex_constructors.bas"
        #include "complex_intrinsic_operators.bas"
        #include "complex_properties.bas"
        #include "complex_methods.bas"
        #include "complex_extrinsic_operators.bas"
        #include "complex_functions.bas"
    #endif
#endif