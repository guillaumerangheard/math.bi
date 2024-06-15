#ifdef _MATH_BI_
    #ifndef _MATH_COMPLEX_BI_
        #define _MATH_COMPLEX_BI_
        namespace math
            type complex
                as real r, i
                
                declare constructor ()
                declare constructor (byref as const real, byref as const real => 0d)
                declare constructor (byref as const complex)
                
                declare       operator +=   (byref as const real)
                declare       operator +=   (byref as const complex)
                declare       operator -=   (byref as const real)
                declare       operator -=   (byref as const complex)
                declare       operator *=   (byref as const real)
                declare       operator *=   (byref as const complex)
                declare       operator /=   (byref as const real)
                declare       operator /=   (byref as const complex)
                declare       operator ^=   (byref as const real)
                declare const operator cast () as string
                declare       operator let  (byref as const real)
                declare       operator let  (byref as const complex)
                
                declare const property conjugate  () as complex
                declare const property norm       () as real
                declare const property reciprocal () as complex
                
                declare static function random overload ()                                               as complex
                declare static function random          (byref as const real)                            as complex
                declare static function random          (byref as const complex)                         as complex
                declare static function random          (byref as const real   , byref as const real)    as complex
                declare static function random          (byref as const real   , byref as const complex) as complex
                declare static function random          (byref as const complex, byref as const real)    as complex
                declare static function random          (byref as const complex, byref as const complex) as complex
                declare const  function toJSON          (byref as const boolean => false) as string
            end type
            
            declare operator +  (byref as const complex, byref as const real)    as complex
            declare operator +  (byref as const real   , byref as const complex) as complex
            declare operator +  (byref as const complex, byref as const complex) as complex
            declare operator -  (byref as const complex)                         as complex
            declare operator -  (byref as const complex, byref as const real)    as complex
            declare operator -  (byref as const real   , byref as const complex) as complex
            declare operator -  (byref as const complex, byref as const complex) as complex
            declare operator *  (byref as const complex, byref as const real)    as complex
            declare operator *  (byref as const real   , byref as const complex) as complex
            declare operator *  (byref as const complex, byref as const complex) as complex
            declare operator /  (byref as const complex, byref as const real)    as complex
            declare operator /  (byref as const real   , byref as const complex) as complex
            declare operator /  (byref as const complex, byref as const complex) as complex
            declare operator ^  (byref as const complex, byref as const real)    as complex
            declare operator =  (byref as const real   , byref as const complex) as boolean
            declare operator =  (byref as const complex, byref as const real)    as boolean
            declare operator =  (byref as const complex, byref as const complex) as boolean
            declare operator <> (byref as const real   , byref as const complex) as boolean
            declare operator <> (byref as const complex, byref as const real)    as boolean
            declare operator <> (byref as const complex, byref as const complex) as boolean
            
            declare function eq   (byref as const real   , byref as const complex, byref as const real => epsilon) as boolean
            declare function eq   (byref as const complex, byref as const real   , byref as const real => epsilon) as boolean
            declare function eq   (byref as const complex, byref as const complex, byref as const real => epsilon) as boolean
            declare function lerp (byref as const real   , byref as const complex, byref as const real) as complex
            #ifdef _EASING_BI_
            declare function lerp (byref as const real   , byref as const complex, byref as const real,       as const easing.equation) as complex
            declare function lerp (byref as const real   , byref as const complex, byref as const real, byref as const easing.curve)    as complex
            #endif
            declare function lerp (byref as const complex, byref as const real   , byref as const real) as complex
            #ifdef _EASING_BI_
            declare function lerp (byref as const complex, byref as const real   , byref as const real,       as const easing.equation) as complex
            declare function lerp (byref as const complex, byref as const real   , byref as const real, byref as const easing.curve)    as complex
            #endif
            declare function lerp (byref as const complex, byref as const complex, byref as const real) as complex
            #ifdef _EASING_BI_
            declare function lerp (byref as const complex, byref as const complex, byref as const real,       as const easing.equation) as complex
            declare function lerp (byref as const complex, byref as const complex, byref as const real, byref as const easing.curve)    as complex
            #endif
        end namespace
        #include "complex_constructors.bas"
        #include "complex_intrinsic_operators.bas"
        #include "complex_properties.bas"
        #include "complex_methods.bas"
        #include "complex_extrinsic_operators.bas"
        #include "complex_functions.bas"
    #endif
#endif