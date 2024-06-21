#ifdef _MATH_BI_
    namespace math
        #if defined(MATH_ANGLES) or defined(MATH_COMPLEX)
            #define trig_f(_a_) declare function _a_ overload (byref as const real) as real
        #else
            #define trig_f(_a_) declare function _a_ (byref as const real) as real
        #endif
        declare function acosh             (byref as const real) as real
        declare function acot              (byref as const real) as real
        'declare function acoth             (byref as const real) as real
        declare function acrd              (byref as const real) as real
        declare function acsc              (byref as const real) as real
        'declare function acsch             (byref as const real) as real
        declare function acvcos            (byref as const real) as real
        declare function acvsin            (byref as const real) as real
        declare function aexcsc            (byref as const real) as real
        declare function aexsec            (byref as const real) as real
        declare function ahcvcos           (byref as const real) as real
        declare function ahcvsin           (byref as const real) as real
        declare function ahvcos            (byref as const real) as real
        declare function ahvsin            (byref as const real) as real
        declare function asec              (byref as const real) as real
        'declare function asech             (byref as const real) as real
        declare function asinh             (byref as const real) as real
        declare function atanh             (byref as const real) as real
        declare function avcos             (byref as const real) as real
        declare function avg      overload (byref as const real, byref as const real)                                           as real
        declare function avg               (byref as const real, byref as const real, byref as const real)                      as real
        declare function avg               (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function avg               (byref as const integer, byref as const real const ptr)                              as real
        declare function avsin             (byref as const real) as real
        declare function cbr               (byref as const real) as real
        declare function ceil              (byref as const real) as real
        declare function clamp    overload (byref as const real)                                           as real
        declare function clamp             (byref as const real, byref as const real)                      as real
        declare function clamp             (byref as const real, byref as const real, byref as const real) as real
        declare function cmp      overload (byref as const real, byref as const real, byref as const real => epsilon) as boolean
        trig_f(cosh)
        trig_f(cot)
        'trig_f(coth)
        trig_f(crd)
        trig_f(csc)
        trig_f(csch)
        trig_f(cvcos)
        trig_f(cvsin)
        
        trig_f(excsc)
        trig_f(exsec)
        declare function floor             (byref as const real) as real
        trig_f(hcvcos)
        trig_f(hcvsin)
        trig_f(hvcos)
        trig_f(hvsin)
        declare function hypot    overload (byref as const real, byref as const real)                                           as real
        declare function hypot             (byref as const real, byref as const real, byref as const real)                      as real
        declare function hypot             (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function lerp     overload (byref as const real, byref as const real, byref as const real)                     as real
        #ifdef _EASING_BI_  
        declare function lerp              (byref as const real, byref as const real, byref as const real, as easing.equation) as real
        declare function lerp              (byref as const real, byref as const real, byref as const real, as easing.curve)    as real
        #endif
        declare function map               (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function max      overload (byref as const real, byref as const real)                                           as real
        declare function max               (byref as const real, byref as const real, byref as const real)                      as real
        declare function max               (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function max               (byref as const integer, byref as const real const ptr)                              as real
        declare function min      overload (byref as const real, byref as const real)                                           as real
        declare function min               (byref as const real, byref as const real, byref as const real)                      as real
        declare function min               (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function min               (byref as const integer, byref as const real const ptr)                              as real
        declare function nrt               (byref as const real, byref as const real) as real
        declare function random   overload ()                                         as real
        declare function random            (byref as const real)                      as real
        declare function random            (byref as const real, byref as const real) as real
        trig_f(sec)
        'trig_f(sech)
        trig_f(sinh)
        trig_f(tanh)
        declare function theta             (byref as const real, byref as const real) as real
        trig_f(vcos)
        trig_f(vsin)
        declare function wrap     overload (byref as const real)                                           as real
        declare function wrap              (byref as const real, byref as const real)                      as real
        declare function wrap              (byref as const real, byref as const real, byref as const real) as real
        #undef trig_f
    end namespace
    #include "functions.bas"
#endif