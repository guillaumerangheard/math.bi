#ifdef _MATH_BI_
    namespace math
        declare function acosh           (byref as const real) as real
        declare function asinh           (byref as const real) as real
        declare function atanh           (byref as const real) as real
        declare function avg    overload (byref as const real, byref as const real)                                           as real
        declare function avg             (byref as const real, byref as const real, byref as const real)                      as real
        declare function avg             (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function avg             (byref as const integer, byref as const real const ptr)                              as real
        declare function cbr             (byref as const real) as real
        declare function ceil            (byref as const real) as real
        declare function ChDist overload (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function ChDist          (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function ChDist          (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function clamp  overload (byref as const real)                                           as real
        declare function clamp           (byref as const real, byref as const real)                      as real
        declare function clamp           (byref as const real, byref as const real, byref as const real) as real
        declare function cosh            (byref as const real) as real
        declare function cross  overload (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function dist   overload (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function dist            (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function dist            (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function dot    overload (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function dot             (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function dot             (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function eq     overload (byref as const real, byref as const real, byref as const real => epsilon) as boolean
        declare function eq              (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real => epsilon) as boolean
        declare function eq              (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real => epsilon) as boolean
        declare function eq              (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real => epsilon) as boolean
        declare function floor           (byref as const real) as real
        declare function hypot  overload (byref as const real, byref as const real)                                           as real
        declare function hypot           (byref as const real, byref as const real, byref as const real)                      as real
        declare function hypot           (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function lerp   overload (byref as const real, byref as const real, byref as const real)                           as real
        #ifdef _EASING_BI_
        declare function lerp            (byref as const real, byref as const real, byref as const real, as easing.equation) as real
        declare function lerp            (byref as const real, byref as const real, byref as const real, as easing.curve)    as real
        #endif
        declare function MaDist overload (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function MaDist          (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function MaDist          (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function map             (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function max    overload (byref as const real, byref as const real)                                           as real
        declare function max             (byref as const real, byref as const real, byref as const real)                      as real
        declare function max             (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function max             (byref as const integer, byref as const real const ptr)                              as real
        declare function MiDist overload (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real => 2d) as real
        declare function MiDist          (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real => 2d) as real
        declare function MiDist          (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real => 2d) as real
        declare function min    overload (byref as const real, byref as const real)                                           as real
        declare function min             (byref as const real, byref as const real, byref as const real)                      as real
        declare function min             (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function min             (byref as const integer, byref as const real const ptr)                              as real
        declare function phi             (byref as const real, byref as const real) as real
        #ifdef _RNG_BI_
        declare function random overload ()                                         as real
        declare function random          (byref as const real)                      as real
        declare function random          (byref as const real, byref as const real) as real
        #endif
        declare function sinh            (byref as const real) as real
        declare function sqDist overload (byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function sqDist          (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function sqDist          (byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real, byref as const real) as real
        declare function tanh            (byref as const real) as real
        declare function wrap   overload (byref as const real)                                           as real
        declare function wrap            (byref as const real, byref as const real)                      as real
        declare function wrap            (byref as const real, byref as const real, byref as const real) as real
    end namespace
    #include "functions.bas"
#endif