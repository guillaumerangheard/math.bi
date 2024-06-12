namespace math
    
' math.acosh -------------------------------------------------------------------
    
    ' Cf. https://developer.mozilla.org/fr/docs/Web/JavaScript/Reference/Global_Objects/Math/acosh
    function acosh (byref n as const real) as real
        return log(n + sqr(n * n - 1.0))
    end function
    
' math.asinh -------------------------------------------------------------------
    
    ' Cf. https://developer.mozilla.org/fr/docs/Web/JavaScript/Reference/Global_Objects/Math/asinh
    function asinh (byref n as const real) as real
        return log(n + sqr(n * n + 1.0))
    end function
    
' math.atanh -------------------------------------------------------------------
    
    ' Cf. https://developer.mozilla.org/fr/docs/Web/JavaScript/Reference/Global_Objects/Math/atanh
    function atanh (byref n as const real) as real
        return iif(n <> 1.0, log((1.0 + n) / (1.0 - n)) / 2.0, 0.0)
    end function
    
' math.avg ---------------------------------------------------------------------
    
    function avg overload (byref n1 as const real, byref n2 as const real) as real
        return (n1 + n2) / 2.0
    end function
    
    function avg (byref n1 as const real, byref n2 as const real, byref n3 as const real) as real
        return (n1 + n2 + n3) / 3.0
    end function
    
    function avg (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref n4 as const real) as real
        return (n1 + n2 + n3 + n4) / 4.0
    end function
    
    function avg (byref n as const integer, byref p as const real const ptr) as real
        if (0% < n) and (0 <> p) then
            dim as real r
            for i as integer => 0% to n - 1%
                r += p[i]
            next i
            return r / m_crl(n)
        end if
        return 0.0
    end function
    
' math.cbr ---------------------------------------------------------------------
    
    function cbr (byref n as const real) as real
        return iif(n < 0.0, -(-n ^ (1.0 / 3.0)), n ^ (1.0 / 3.0))
    end function
    
' math.ceil --------------------------------------------------------------------
    
    function ceil (byref n as const real) as real
        return iif(frac(n), fix(n) + 1d, n)
    end function
    
' math.clamp -------------------------------------------------------------------
    
    function clamp overload (byref n as const real) as real
        return iif(n < 0.0, 0.0, iif(1.0 < n, 1.0, n))
    end function
    
    function clamp (byref n as const real, byref nMax as const real) as real
        return iif(n < 0.0, 0.0, iif(nMax < n, nMax, n))
    end function
    
    function clamp (byref n as const real, byref nMin as const real, byref nMax as const real) as real
        return iif(n < nMin, nMin, iif(nMax < n, nMax, n))
    end function
    
' math.cosh --------------------------------------------------------------------
    
    ' Cf. https://developer.mozilla.org/fr/docs/Web/JavaScript/Reference/Global_Objects/Math/cosh
    function cosh (byref n as const real) as real
        return (exp(n) + exp(-n)) / 2.0
    end function
    
' math.eq ----------------------------------------------------------------------
    
    function eq overload (byref n1 as const real, byref n2 as const real, byref t as const real => epsilon) as boolean
        return iif(abs(n1 - n2) <= abs(t), true, false)
    end function
    
    function eq (byref x1 as const real, byref y1 as const real, byref x2 as const real, byref y2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - x2) <= t) and (abs(y1 - y2) <= t), true, false)
    end function
    
    function eq (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - x2) <= t) and (abs(y1 - y2) <= t) and (abs(z1 - z2) <= t), true, false)
    end function
    
    function eq (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - x2) <= t) and (abs(y1 - y2) <= t) and (abs(z1 - z2) <= t) and (abs(w1 - w2) <= t), true, false)
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
        dim as real t => iif(s < 0.0, 0.0, iif(1.0 < s, 1.0, s)), u => 1.0 - t
        return n1 * u + n2 * t
    end function
    
    #ifdef _EASING_BI_
    function lerp overload (byref n1 as const real, byref n2 as const real, byref s as const real, e as easing.equation) as real
        dim as real t => iif(s < 0.0, 0.0, iif(1.0 < s, 1.0, s)), u
        if e then t => e(t)
        u => 1.0 - t
        return n1 * u + n2 * t
    end function
    
    function lerp overload (byref n1 as const real, byref n2 as const real, byref s as const real, byref c as const easing.curve) as real
        dim as real t => iif(s < 0.0, 0.0, iif(1.0 < s, 1.0, s)), u
        t => c.compute(t)
        u => 1.0 - t
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
        return 0.0
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
        return 0.0
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
    
' math.sinh --------------------------------------------------------------------
    
    ' https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/sinh
    function sinh (byref n as const real) as real
        return (exp(n) - exp(-n)) * 0.5d
    end function    
    
' math.tanh --------------------------------------------------------------------
    
    ' https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/tanh
    function tanh (byref n as const real) as real
        dim as real o => exp(2d * n)
        return (o - 1d) / (o + 1d)
    end function
    
' math.wrap --------------------------------------------------------------------
    
    function wrap overload (byref n as const real) as real
        return iif(n < 0d, 1.0 + frac(n), frac(n))
    end function
    
    function wrap (byref n as const real, byref nMax as const real) as real
        return iif(nMax, wrap(n / nMax) * nMax, 0.0)
    end function
    
end namespace
