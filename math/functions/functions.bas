namespace math
    
' math.acosh -------------------------------------------------------------------
    
    ' Cf. https://developer.mozilla.org/fr/docs/Web/JavaScript/Reference/Global_Objects/Math/acosh
    function acosh (byref n as const real) as real
        #ifdef MATH_ANGLES
        dim as real t => angle.convert(n, defaultAngleUnit, angleUnit.radian)
        return log(t + sqr(t * t - 1d))
        #else
        return log(n + sqr(n * n - 1d))
        #endif
    end function
    
' math.acoth -------------------------------------------------------------------
    
    
    
' math.asinh -------------------------------------------------------------------
    
    ' Cf. https://developer.mozilla.org/fr/docs/Web/JavaScript/Reference/Global_Objects/Math/asinh
    function asinh (byref n as const real) as real
        #ifdef MATH_ANGLES
        dim as real t => angle.convert(n, defaultAngleUnitg, angleUnit.radian)
        return log(t + sqr(t * t + 1d))
        #else
        return log(n + sqr(n * n + 1d))
        #endif
    end function
    
' math.atanh -------------------------------------------------------------------
    
    ' Cf. https://developer.mozilla.org/fr/docs/Web/JavaScript/Reference/Global_Objects/Math/atanh
    function atanh (byref n as const real) as real
        #ifdef MATH_ANGLES
        dim as real t => angle.convert(n, defaultAngleUnit, angleUnit.radian)
        return iif(t <> 1d, log((1d + t) / (1d - t)) * 0.5d, 0d)
        #else
        return iif(n <> 1d, log((1d + n) / (1d - n)) * 0.5d, 0d)
        #endif
    end function
    
' math.avg ---------------------------------------------------------------------
    
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
    
' math.cbr ---------------------------------------------------------------------
    
    function cbr (byref n as const real) as real
        return iif(n < 0d, -(-n ^ 0.3333333333333333d), n ^ 0.3333333333333333d)
    end function
    
' math.ceil --------------------------------------------------------------------
    
    function ceil (byref n as const real) as real
        return iif(frac(n), m_crl(cint(fix(n))) + 1d, n)
    end function
    
' math.clamp -------------------------------------------------------------------
    
    function clamp overload (byref n as const real) as real
        return iif(n < 0d, 0d, iif(1d < n, 1d, n))
    end function
    
    function clamp (byref n as const real, byref nMax as const real) as real
        return iif(n < 0d, 0d, iif(nMax < n, nMax, n))
    end function
    
    function clamp (byref n as const real, byref nMin as const real, byref nMax as const real) as real
        return iif(n < nMin, nMin, iif(nMax < n, nMax, n))
    end function
    
' math.cosh --------------------------------------------------------------------
    
    ' Cf. https://developer.mozilla.org/fr/docs/Web/JavaScript/Reference/Global_Objects/Math/cosh
    function cosh (byref n as const real) as real
        #ifdef MATH_ANGLES
        dim as real t => angle.convert(n, defaultAngleUnit, angleUnit.radian)
        return (exp(t) + exp(-t)) * 0.5d
        #else
        return (exp(n) + exp(-n)) * 0.5d
        #endif
    end function
    
' math.cot ---------------------------------------------------------------------
    
    function cot (byref n as const real) as real
        #ifdef MATH_ANGLES
        dim as real t => tan(angle.convert(n, defaultAngleUnit, angleUnit.radian))
        #else
        dim as real t => tan(n)
        #endif
        return iif(t, 1d / t, 0d)
    end function
    
' math.coth --------------------------------------------------------------------
    
    
    
' math.csec --------------------------------------------------------------------
    
    function csec (byref n as const real) as real
        #ifdef MATH_ANGLES
        di mas real s => sin(angle.convert(n, defaultAngleUnit, angleUnit.radian))
        #else
        dim as real s => sin(n)
        #endif
        return iif(s, 1d / s, 0d)
    end function
    
' math.csech -------------------------------------------------------------------
    
    
    
' math.eq ----------------------------------------------------------------------
    
    function eq overload (byref n1 as const real, byref n2 as const real, byref t as const real => epsilon) as boolean
        return iif(abs(n1 - n2) <= abs(t), true, false)
    end function
    
' math.floor -------------------------------------------------------------------
    
    function floor (byref n as const real) as real
        return iif(frac(n), iif(n < 0d, fix(n) - 1d, fix(n)), n)
    end function
    
' math.hypot -------------------------------------------------------------------
    
    function hypot overload (byref x as const real, byref y as const real) as real
        return sqr(x * x + y * y)
    end function
    
    function hypot (byref x as const real, byref y as const real, byref z as const real) as real
        return sqr(x * x + y * y + z * z)
    end function
    
    function hypot (byref x as const real, byref y as const real, byref z as const real, byref w as const real) as real
        return sqr(x * x + y * y + z * z + w * w)
    end function
    
' math.lerp --------------------------------------------------------------------
    
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
    
' math.map ---------------------------------------------------------------------
    
    function map (byref n as const real, byref mn1 as const real, byref mx1 as const real, byref mn2 as const real, byref mx2 as const real) as real
        if n <= mn1 then return mn2
        if mx1 <= n then return mx2
        return mn2 + (n - mn1) / (mx1 - mn1) * (mx2 - mn2)
    end function
    
' math.max ---------------------------------------------------------------------
    
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
    
    function nrt (byref n as const real, byref r as const real) as real
        return iif(0d < r, n ^ (1d / r), 1d)
    end function
    
' math.phi ---------------------------------------------------------------------
    
    function phi (byref x as const real, byref y as const real) as real
        dim as real a => acos(x / hypot(x, y))
        if 0d < y then a = two_pi - a
        if a = two_pi then a => 0d
        return a
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
    
    #else
    
end namespace

randomize()

namespace math
    
    function random overload () as real
        return rnd()
    end function
    
    function random (byref n as const real) as real
        return rnd() * n
    end function
    
    function random (byref n1 as const real, byref n2 as const real) as real
        return n1 + rnd() * (n2 - n1)
    end function
    
    #endif
    
' math. sec --------------------------------------------------------------------
    
    function sec (byref n as const real) as real
        #ifdef MATH_ANGLES
        dim as real c => cos(angle.convert(n, defaultAngleUnit, angleUnit.radian)
        #else
        dim as real c => cos(n)
        #endif
        return iif(c, 1d / c, 0d)
    end function
    
' math. sech -------------------------------------------------------------------
    
    
    
' math.sinh --------------------------------------------------------------------
    
    ' https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/sinh
    function sinh (byref n as const real) as real
        #ifdef MATH_ANGLES
        dim as real t => angle.convert(n, defaultAngleUnit, angleUnit.radian)
        return (exp(t) - exp(-t)) * 0.5d
        #else
        return (exp(n) - exp(-n)) * 0.5d
        #endif
    end function    
    
' math.tanh --------------------------------------------------------------------
    
    ' https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/tanh
    function tanh (byref n as const real) as real
        #ifdef MATH_ANGLES
        dim as real e => exp(2d * angle.convert(n, defaultAngleUnit, angleUnit.radian))
        #else
        dim as real e => exp(2d * n)
        #endif
        return iif(-1d <> e, (e - 1d) / (e + 1d), 0d)
    end function
    
' math.wrap --------------------------------------------------------------------
    
    function wrap overload (byref n as const real) as real
        return iif(n < 0d, 1.0 + frac(n), frac(n))
    end function
    
    function wrap (byref n as const real, byref nMax as const real) as real
        return iif(nMax, wrap(n / nMax) * nMax, 0.0)
    end function
    
end namespace
