#ifdef _MATH_BI_
    namespace math
        #if defined(MATH_ANGLES) or defined(MATH_COMPLEX)
            #define m_ovl overload
        #else
            #define m_ovl
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
        declare function cosh     m_ovl    (byref as const real) as real
        declare function cot      m_ovl    (byref as const real) as real
        declare function coth     m_ovl    (byref as const real) as real
        declare function crd      m_ovl    (byref as const real) as real
        declare function csc      m_ovl    (byref as const real) as real
        declare function csch     m_ovl    (byref as const real) as real
        declare function cvcos    m_ovl    (byref as const real) as real
        declare function cvsin    m_ovl    (byref as const real) as real
        declare function excsc    m_ovl    (byref as const real) as real
        declare function exsec    m_ovl    (byref as const real) as real
        declare function floor             (byref as const real) as real
        declare function hcvcos   m_ovl    (byref as const real) as real
        declare function hcvsin   m_ovl    (byref as const real) as real
        declare function hvcos    m_ovl    (byref as const real) as real
        declare function hvsin    m_ovl    (byref as const real) as real
        declare function hypot    overload (byref as const real, byref as const real)                                           as real
        declare function hypot             (byref as const real, byref as const real, byref as const real)                      as real
        declare function hypot             (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function lerp     overload (byref as const real, byref as const real, byref as const real)                     as real
        #ifdef _EASING_BI_  
        declare function lerp              (byref as const real, byref as const real, byref as const real, as easing.equation) as real
        declare function lerp              (byref as const real, byref as const real, byref as const real, as easing.curve)    as real
        #endif
        declare function log2     m_ovl    (byref as const real) as real
        declare function log10    m_ovl    (byref as const real) as real
        declare function log1p    m_ovl    (byref as const real) as real
        declare function logb     m_ovl    (byref as const real, byref as const real) as real
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
        declare function qdt      overload (byref as const real, byref as const real) as real
        declare function random   overload ()                                         as real
        declare function random            (byref as const real)                      as real
        declare function random            (byref as const real, byref as const real) as real
        declare function sec      m_ovl    (byref as const real) as real
        declare function sech     m_ovl    (byref as const real) as real
        declare function sinh     m_ovl    (byref as const real) as real
        declare function tanh     m_ovl    (byref as const real) as real
        declare function theta             (byref as const real, byref as const real) as real
        declare function vcos     m_ovl    (byref as const real) as real
        declare function vsin     m_ovl    (byref as const real) as real
        declare function wrap     overload (byref as const real)                                           as real
        declare function wrap              (byref as const real, byref as const real)                      as real
        declare function wrap              (byref as const real, byref as const real, byref as const real) as real
    end namespace
    #include "functions.bas"
    #undef m_ovl
#endif