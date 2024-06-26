namespace math
    
' math.acosh -------------------------------------------------------------------
    
    ' Returns the hyperbolic arccosine of n.
    ' Cf. https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/acosh
    
    function acosh m_ovl (byref n as const real) as real
        return log(n + sqr(n * n - 1d))
    end function
    
' math.acot --------------------------------------------------------------------
    
    ' Returns the arccotangent of n.
    ' Cf. https://en.wikipedia.org/wiki/Trigonometric_functions
    '     https://mathworld.wolfram.com/InverseCotangent.html
    
    function acot m_ovl (byref n as const real) as real
        return iif(n, atn(1d / n), 0d)
    end function
    
' math.acoth -------------------------------------------------------------------
    
    ' Returns the hyperbolic arccotangent of n.
    ' Cf. https://mathworld.wolfram.com/InverseHyperbolicCotangent.html
    
    function acoth m_ovl (byref n as const real) as real
        if n then
            dim as real m => 1d / n
            return (log(1d + m) - log(1d - m)) * 0.5d
        end if
        return 0d
    end function
    
' math.acrd --------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the inverse chord of n.
    
    function acrd m_ovl (byref n as const real) as real
        return 2d * asin(n * 0.5d)
    end function
    
    #endif
    
' math.acsc --------------------------------------------------------------------
    
    ' Returns the arccosecant of n.
    'Cf. https://en.wikipedia.org/wiki/Trigonometric_functions
    
    function acsc (byref n as const real) as real
        return iif(n, asin(1d / n), 0d)
    end function
    
' math.acsch -------------------------------------------------------------------
    
    ' NEEDS CHECKING
    
    ' Returns the hyperbolic arccosecant of n.
    ' Cf. https://proofwiki.org/wiki/Definition:Area_Hyperbolic_Cosecant
    
    'function acsch (byref n as const real) as real
    '    return iif(n, log(1d / n + (sqr(n * n + 1d)) / abs(n)), 0d)
    'end function
    
' math.acvcos ------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the inverse covercosine of n.
    
    function acvcos (byref n as const real) as real
        return asin(n - 1d)
    end function
    
' math.acvsin ------------------------------------------------------------------
    
    ' Returns the inverse coversine of n.
    
    function acvsin (byref n as const real) as real
        return asin(1d - n)
    end function
    
' math.aexcsc ------------------------------------------------------------------
    
    ' Returns the inverse excosecant of n.
    
    function aexcsc (byref n as const real) as real
        return asin(1d / (n + 1d))
    end function
    
' math.aexsec ------------------------------------------------------------------
    
    ' Returns the inverse exsecant of n.
    
    function aexsec (byref n as const real) as real
        return acos(1d / (n + 1d))
    end function
    
' math.ahcvcos -----------------------------------------------------------------
    
    ' Returns the inverse hacovercosine of n.
    
    function ahcvcos (byref n as const real) as real
        return asin(2d * n - 1d)
    end function
    
' math.ahcvsin -----------------------------------------------------------------
    
    ' Returns the inverse hacoversine of n.
    
    function ahcvsin (byref n as const real) as real
        return asin(1d - 2d * n)
    end function
    
' math.ahvcos ------------------------------------------------------------------
    
    ' Returns the inverse havercosine of n.
    
    function ahvcos (byref n as const real) as real
        return acos(2d * n + 1d)
    end function
    
' math.ahvsin ------------------------------------------------------------------
    
    ' Returns the inverse haversine of n.
    
    function ahvsin (byref n as const real) as real
        return acos(1d - 2d * n)
    end function
    
    #endif
    
' math.asec --------------------------------------------------------------------
    
    ' Returns the arcsecant of n.
    ' Cf. https://en.wikipedia.org/wiki/Trigonometric_functions
    
    function asec (byref n as const real) as real
        return iif(n, acos(1d / n), 0d)
    end function
    
' math.asech -------------------------------------------------------------------
    
    ' Returns the hyperbolic arcsecant of n.
    
    
    
' math.asinh -------------------------------------------------------------------
    
    ' Returns the hyperbolic arcsine of n.
    ' Cf. https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/asinh
    
    function asinh (byref n as const real) as real
        return log(n + sqr(n * n + 1d))
    end function
    
' math.atanh -------------------------------------------------------------------
    
    ' Returns the hyperbolic arctangent of n.
    ' Cf. https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/atanh
    
    function atanh (byref n as const real) as real
        return log((1d + n) / (1d - n)) * 0.5d
    end function
    
' math.avcos -------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the inverse vercosine of n.
    
    function avcos (byref n as const real) as real
        return acos(n - 1d)
    end function
    
    #endif
    
' math.avg ---------------------------------------------------------------------
    
    ' Returns either the average of 2(, or 3, or 4) numbers, or the average of n
    ' numbers at pointer p.
    
    ' TODO : add the option to specify a stride for the latter version of the
    ' function, as the numbers may not be tightly packed.
    ' TODO : overload the function, so that it can process (arrays of) complex
    ' numbers.
    
    function avg overload (byref n1 as const real, byref n2 as const real) as real
        return (n1 + n2) * 0.5d
    end function
    
    function avg (byref n1 as const real, byref n2 as const real, byref n3 as const real) as real
        return (n1 + n2 + n3) * 0.3333333333333333d
    end function
    
    function avg (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref n4 as const real) as real
        return (n1 + n2 + n3 + n4) * 0.25d
    end function
    
    function avg (byref n as const integer, byref p as const real const ptr) as real
        if (0% < n) and (0 <> p) then
            dim as real r
            for i as integer => 0% to n - 1%
                r += p[i]
            next i
            return r / m_crl(n)
        end if
        return 0d
    end function
    
' math.avsin -------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the inverse versine of n.
    
    function avsin (byref n as const real) as real
        return acos(1d - n)
    end function
    
    #endif
    
' math.cbr ---------------------------------------------------------------------
    
    ' Returns the cubic root of n. See also sqr and math.nrt.
    
    function cbr (byref n as const real) as real
        return iif(n < 0d, -(-n ^ 0.3333333333333333d), n ^ 0.3333333333333333d)
    end function
    
' math.ceil --------------------------------------------------------------------
    
    ' Rounds up n.
    ' Cf. https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/ceil
    
    function ceil (byref n as const real) as real
        return m_crl(cint(fix(n))) + 1d
    end function
    
' math.clamp -------------------------------------------------------------------
    
    ' Clamps n either in the [0, 1], the [0, nMax], or the [nMin, nMax] range.
    
    function clamp overload (byref n as const real) as real
        return iif(n < 0d, 0d, iif(1d < n, 1d, n))
    end function
    
    function clamp (byref n as const real, byref nMax as const real) as real
        return iif(n < 0d, 0d, iif(nMax < n, nMax, n))
    end function
    
    function clamp (byref n as const real, byref nMin as const real, byref nMax as const real) as real
        return iif(n < nMin, nMin, iif(nMax < n, nMax, n))
    end function
    
' math.cmp ---------------------------------------------------------------------
    
    ' Returns true if the absolute difference between n1 and n2 is lesser than
    ' or equal to t.
    
    function cmp overload (byref n1 as const real, byref n2 as const real, byref t as const real => epsilon) as boolean
        return iif(abs(n1 - n2) <= abs(t), true, false)
    end function
    
' math.cosh --------------------------------------------------------------------
    
    ' Returns the hyperbolic cosine of t.
    ' Cf. https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/cosh
    
    function cosh m_ovl (byref t as const real) as real
        return (exp(t) + exp(-t)) * 0.5d
    end function
    
' math.cot ---------------------------------------------------------------------
    
    ' Returns the cotangent of t.
    ' Cf. https://en.wikipedia.org/wiki/Trigonometric_functions
    
    function cot m_ovl (byref t as const real) as real
        dim as real s => tan(t)
        return iif (s, 1d / s, 0d)
    end function
    
' math.coth --------------------------------------------------------------------
    
    ' Returns the hyperbolic cotangent of t.
    ' Cf. https://en.wikipedia.org/wiki/Hyperbolic_functions
    
    function coth m_ovl (byref t as const real) as real
        dim as real s => tanh(t)
        return iif(s, 1d / s, 0d)
    end function
    
' math.crd ---------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the chord of t.
    ' Cf. https://en.wikipedia.org/wiki/Chord_(geometry)#In_trigonometry
    
    function crd m_ovl (byref t as const real) as real
        return 2d * sin(t * 0.5d)
    end function
    
    #endif
    
' math.csc ---------------------------------------------------------------------
    
    ' Returns the cosecant of t.
    ' Cf. https://en.wikipedia.org/wiki/Trigonometric_functions
    
    function csc m_ovl (byref t as const real) as real
        dim as real s => sin(t)
        return iif(s, 1d / s, 0d)
    end function
    
' math.csch --------------------------------------------------------------------
    
    ' Returns the hyperbolic cosecant of t.
    ' Cf. https://en.wikipedia.org/wiki/Hyperbolic_functions
    
    function csch m_ovl (byref t as const real) as real
        dim as real s => sinh(t)
        return iif(s, 1d / s, 0d)
    end function
    
' math.cvcos -------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the covercosine of t.
    ' Cf. https://mathworld.wolfram.com/Covercosine.html
    
    function cvcos m_ovl (byref t as const real) as real
        return 1d + sin(t)
    end function
    
' math.cvsin -------------------------------------------------------------------
    
    ' Returns the coversine of t.
    ' Cf. https://mathworld.wolfram.com/Coversine.html
    
    function cvsin m_ovl (byref t as const real) as real
        return 1d - sin(t)
    end function
    
' math.excsc ------------------------------------------------------------------
    
    ' Returns the excosecant of t.
    ' Cf. https://mathworld.wolfram.com/Excosecant.html
    
    function excsc m_ovl (byref t as const real) as real
        dim as real s => sin(t)
        return iif(s, 1d / s - 1d, 0d)
    end function
    
' math.exsec -------------------------------------------------------------------
    
    ' Returns the exsecant of t.
    ' Cf. https://en.wikipedia.org/wiki/Exsecant
    
    function exsec m_ovl (byref t as const real) as real
        dim as real c => cos(t)
        return iif(c, 1d / c - 1d, 0d)
    end function
    
    #endif
    
' math.floor -------------------------------------------------------------------
    
    ' Rounds down n.
    ' Cf. https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/floor
    
    function floor (byref n as const real) as real
        return iif(frac(n), iif(n < 0d, fix(n) - 1d, fix(n)), n)
    end function
    
' math.gcd ---------------------------------------------------------------------
    
    ' Returns the greatest common divisor of n1 and n2.
    ' Cf. https://en.wikipedia.org/wiki/Euclidean_algorithm
    
    function gcd (byref n1 as const longint, byref n2 as const longint) as longint
        if n1 then
            if n2 then
                dim as longint a => abs(n1), b => abs(n2), t
                while 0ll <> b
                    t => b
                    b => a mod b
                    a => t
                wend
                return a
            else
                return abs(n1)
            end if
        else
            if n2 then
                return abs(n2)
            else
                return 0ll
            end if
        end if
    end function
    
' math.hcvcos ------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the hacovercosine of t.
    ' Cf. https://mathworld.wolfram.com/Hacovercosine.html
    
    function hcvcos m_ovl (byref t as const real) as real
        return (1d + sin(t)) * 0.5d
    end function
    
' math.hcvsin ------------------------------------------------------------------
    
    ' Returns the hacoversine of t.
    ' Cf. https://mathworld.wolfram.com/Hacoversine.html
    
    function hcvsin m_ovl (byref t as const real) as real
        return (1d - sin(t)) * 0.5d
    end function
    
' math.hvcos -------------------------------------------------------------------
    
    ' Returns the havercosine of t.
    ' Cf. https://mathworld.wolfram.com/Havercosine.html
    
    function hvcos m_ovl (byref t as const real) as real
        return (1d + cos(t)) * 0.5d
    end function
    
' math.hvsin -------------------------------------------------------------------
    
    ' Returns the haversine of t.
    ' Cf. https://mathworld.wolfram.com/Haversine.html
    
    function hvsin m_ovl (byref t as const real) as real
        return (1d - cos(t)) * 0.5d
    end function
    
    #endif
    
' math.hypot -------------------------------------------------------------------
    
    ' Returns the magnitude of vector (x, y[, z [, w]]).
    
    function hypot overload (byref x as const real, byref y as const real) as real
        return sqr(x * x + y * y)
    end function
    
    function hypot (byref x as const real, byref y as const real, byref z as const real) as real
        return sqr(x * x + y * y + z * z)
    end function
    
    function hypot (byref x as const real, byref y as const real, byref z as const real, byref w as const real) as real
        return sqr(x * x + y * y + z * z + w * w)
    end function
    
' math.lcm ---------------------------------------------------------------------
    
    ' Returns the least common multiple of a and b.
    ' Cf. https://en.wikipedia.org/wiki/Least_common_multiple
    
    function lcm (byref a as const longint, byref b as const longint) as longint
        return abs(a * b) / gcd(a, b)
    end function
    
' math.lerp --------------------------------------------------------------------
    
    ' Performs a linear interpolation of n1 and n2.
    
    function lerp overload (byref n1 as const real, byref n2 as const real, byref s as const real) as real
        dim as real t => clamp(s), u => 1d - t
        return n1 * u + n2 * t
    end function
    
    #ifdef _EASING_BI_
    function lerp overload (byref n1 as const real, byref n2 as const real, byref s as const real, e as easing.equation) as real
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return n1 * u + n2 * t
    end function
    
    function lerp overload (byref n1 as const real, byref n2 as const real, byref s as const real, byref c as const easing.curve) as real
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return n1 * u + n2 * t
    end function
    #endif
    
' math.log2 --------------------------------------------------------------------
    
    ' Returns the base 2 logarithm of n.
    
    function log2 m_ovl (byref n as const real) as real
        return log(n) / ln2
    end function
    
' math.log10 -------------------------------------------------------------------
    
    ' Returns the base 10 logarithm of n.
    
    function log10 m_ovl (byref n as const real) as real
        return log(n) / ln10
    end function
    
' math.log1p -------------------------------------------------------------------
    
    ' Returns the natural logarithm of n + 1.
    
    function log1p (byref n as const real) as real
        return log(1d + n)
    end function
    
' math.logb --------------------------------------------------------------------
    
    ' Returns the base b logarithm of n.
    
    function logb m_ovl (byref n as const real, byref b as const real) as real
        return log(n) / log(b)
    end function
    
' math.map ---------------------------------------------------------------------
    
    ' Maps n from the [mn1, mx1] range onto the [mn2, mx2] range.
    ' TODO : right now n is clamped before being mapped. Add the option to wrap
    ' it (via a boolean?).
    
    function map (byref n as const real, byref mn1 as const real, byref mx1 as const real, byref mn2 as const real, byref mx2 as const real) as real
        if n <= mn1 then return mn2
        if mx1 <= n then return mx2
        return mn2 + (n - mn1) / (mx1 - mn1) * (mx2 - mn2)
    end function
    
' math.max ---------------------------------------------------------------------
    
    ' Returns the maximum value of a set of numbers.
    ' TODO : overload the function for complex numbers, if the formula exists.
    
    function max overload (byref n1 as const real, byref n2 as const real) as real
        return iif(n1 < n2, n2, n1)
    end function
    
    function max (byref n1 as const real, byref n2 as const real, byref n3 as const real) as real
        dim as real r => n1
        if r < n2 then r => n2
        if r < n3 then r => n3
        return r
    end function
    
    function max (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref n4 as const real) as real
        dim as real r => n1
        if r < n2 then r => n2
        if r < n3 then r => n3
        if r < n4 then r => n4
        return r
    end function
    
    function max (byref n as const integer, byref p as const real const ptr) as real
        if (2% <= n) and (p <> 0) then
            dim as real r => p[0%]
            for i as integer => 1% to n - 1%
                if r < p[i] then r => p[i]
            next i
            return r
        end if
        return 0d
    end function
    
' math.min ---------------------------------------------------------------------
    
    ' Returns the minimum value of a set of numbers.
    ' TODO : overload the function for complex numbers, if the formula exists.
    
    function min overload (byref n1 as const real, byref n2 as const real) as real
        return iif(n1 < n2, n1, n2)
    end function
    
    function min (byref n1 as const real, byref n2 as const real, byref n3 as const real) as real
        dim as real r => n1
        if n2 < r then r => n2
        if n3 < r then r => n3
        return r
    end function
    
    function min (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref n4 as const real) as real
        dim as real r => n1
        if n2 < r then r => n2
        if n3 < r then r => n3
        if n4 < r then r => n4
        return r
    end function
    
    function min (byref n as const integer, byref p as const real const ptr) as real
        if (2% <= n) and (p <> 0) then
            dim as real r => p[0%]
            for i as integer => 1% to n - 1%
                if p[i] < r then r => p[i]
            next i
            return r
        end if
        return 0d
    end function
    
' math.nrt ---------------------------------------------------------------------
    
    ' Retuns the nth root of n.
    
    function nrt (byref n as const real, byref r as const real) as real
        return iif(0d < r, n ^ (1d / r), 1d)
    end function
    
' math.qdt ---------------------------------------------------------------------
    
    ' 1 | 0
    ' --+--
    ' 2 | 3
    ' Returns the quadrant in which point (x, y) lies.
    
    function qdt (byref x as const real, byref y as const real) as real
        #ifdef MATH_FLIP_GRAPHICAL_PLANE
        return iif(0d < x, iif(0d < y, 3d, 0d), _
                           iif(0d < y, 2d, 1d))
        #else
        return iif(0d < x, iif(0d < y, 0d, 3d), _
                           iif(0d < y, 1d, 2d))
        #endif
    end function
    
' math.random ------------------------------------------------------------------
    
    #ifdef _RNG_BI_
    
    #ifndef MATH_PRNG
        #define MATH_PRNG xorshift64
    #endif
    #define _c(_a_,_b_) _a_##_b_
    dim shared as _c(RNG.,MATH_PRNG) PRNG
    #undef _c
    
    function random overload () as real
        return PRNG.f64()
    end function
    
    function random (byref n as const real) as real
        return PRNG.f64() * n
    end function
    
    function random (byref n1 as const real, byref n2 as const real) as real
        return n1 + PRNG.f64() * (n2 - n1)
    end function
    
    #endif
    
' math.sec ---------------------------------------------------------------------
    
    ' Returns the secant of t.
    ' Cf. https://en.wikipedia.org/wiki/Trigonometric_functions
    
    function sec m_ovl (byref t as const real) as real
        dim as real c => cos(t)
        return iif(c, 1d / c, 0d)
    end function
    
' math.sech --------------------------------------------------------------------
    
    ' Returns the hyperbolic secant of t.
    ' Cf. https://en.wikipedia.org/wiki/Hyperbolic_functions
    
    function sech m_ovl (byref t as const real) as real
        dim as real c => cosh(t)
        return iif(c, 1d / c, 0d)
    end function
    
' math.sinh --------------------------------------------------------------------
    
    ' Returns the hyperbolic sine of t.
    ' Cf. https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/sinh
    
    function sinh m_ovl (byref t as const real) as real
        return (exp(t) - exp(-t)) * 0.5d
    end function    
    
' math.tanh --------------------------------------------------------------------
    
    ' Returns the hyperbolic tangent of t.
    ' Cf. https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/tanh
    
    function tanh m_ovl (byref t as const real) as real
        dim as real x => exp(2d * t)
        return (x - 1d) / (x + 1d)
    end function
    
' math.theta -------------------------------------------------------------------
    
    ' Returns the angle between the vector (x, y) and the positive x axis. See
    ' vec2.theta, pvec.theta, vec3.theta, cvec.theta, svec.theta, and
    ' vec4.theta, who do basically the same.
    
    function theta (byref x as const real, byref y as const real) as real
        dim as real a => acos(x / hypot(x, y))
        if 0d < y then a = two_pi - a
        if a = two_pi then a => 0d
        return a
    end function
    
' math.vcos --------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the vercosine of t.
    ' Cf. https://mathworld.wolfram.com/Vercosine.html
    
    function vcos m_ovl (byref t as const real) as real
        return 1d + cos(t)
    end function
    
' math.vsin --------------------------------------------------------------------
    
    ' Returns the versine of t.
    ' Cf. https://en.wikipedia.org/wiki/Versine
    
    function vsin m_ovl (byref t as const real) as real
        return 1d - cos(t)
    end function
    
    #endif
    
' math.wrap --------------------------------------------------------------------
    
    ' Wraps n either in the [0, 1], [0, nMax], or [nMin, nMax] range.
    
    function wrap overload (byref n as const real) as real
        return iif(n < 0d, 1.0 + frac(n), frac(n))
    end function
    
    function wrap (byref n as const real, byref nMax as const real) as real
        return iif(nMax, wrap(n / nMax) * nMax, 0.0)
    end function
    
    #undef trig_f
    
end namespace
