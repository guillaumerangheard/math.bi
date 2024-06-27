namespace math
    
' functions ====================================================================
    
' math.acosh -------------------------------------------------------------------
    
    #macro m_f(_a_)
    function _a_ (byref r as const rational) as real
        return _a_##(m_crl(r))
    end function
    #endmacro
    
    ' Returns the hyperbolic arccosine of r.
    
    m_f(acosh)
    
' math.acot --------------------------------------------------------------------
    
    ' Returns the arccotangent of r.
    
    m_f(acot)
    
' math.acoth -------------------------------------------------------------------
    
    ' Returns the hyperbolic arccotangent of r.
    
    m_f(acoth)
    
' math.acrd --------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the inverse chord of r.
    
    m_f(acrd)
    
    #endif
    
' math.acsc --------------------------------------------------------------------
    
    ' Returns the arccosecant of r.
    
    m_f(acsc)
    
' math.acsch -------------------------------------------------------------------
    
    ' Returns the hyperbolic arccosecant of r.
    
    'm_f(acsch)
    
' math.acvcos ------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the inverse covercosine of r.
    
    m_f(acvcos)
    
' math.acvsin ------------------------------------------------------------------
    
    ' Returns the inverse coversine of r.
    
    m_f(acvsin)
    
' math.aexcsc ------------------------------------------------------------------
    
    ' Returns the inverse excosecant of r.
    
    m_f(aexcsc)
    
' math.aexsec ------------------------------------------------------------------
    
    ' Returns the inverse exsecant of r.
    
    m_f(aexsec)
    
' math.ahcvcos -----------------------------------------------------------------
    
    ' Returns the inverse hacovercosine of r.
    
    m_f(ahcvcos)
    
' math.ahcvsin -----------------------------------------------------------------
    
    ' Returns the inverse hacoversine of r.
    
    m_f(ahcvsin)
    
' math.ahvcos ------------------------------------------------------------------
    
    ' Returns the inverse havercosine of r.
    
    m_f(ahvcos)
    
' math.ahvsin ------------------------------------------------------------------
    
    ' Returns the inverse haversine of r.
    
    m_f(ahvsin)
    
    #endif
    
' math.asec --------------------------------------------------------------------
    
    ' Returns the arcsecant of r.
    
    m_f(asec)
    
' math.asech -------------------------------------------------------------------
    
    ' Returns the hyperbolic arcsecant of r.
    
    'm_f(asech)
    
' math.asinh -------------------------------------------------------------------
    
    ' Returns the hyperbolic arcsine of r.
    
    m_f(asinh)
    
' math.atan --------------------------------------------------------------------
    
    ' Returns the arctangent of y / x.
    
    function atan overload (byref y as const real, byref x as const rational) as real
        return atan2(y, m_crl(x))
    end function
    
    function atan (byref y as const rational, byref x as const real) as real
        return atan2(m_crl(y), x)
    end function
    
    function atan (byref y as const rational, byref x as const rational) as real
        return atan2(m_crl(y), m_crl(x))
    end function
    
' math.atanh -------------------------------------------------------------------
    
    ' Returns the hyperbolic arctangent of r.
    
    m_f(atanh)
    
' math.avcos -------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the inverse vercosine of r.
    
    m_f(avcos)
    
    #endif
    
' math.avg ---------------------------------------------------------------------
    
    function avg (byref n1 as const real, byref r2 as const rational) as real
        return (n1 + m_crl(r2)) / 2d
    end function
    
    function avg (byref r1 as const rational, byref n2 as const real) as real
        return (m_crl(r1) + n2) / 2d
    end function
    
    function avg (byref r1 as const rational, byref r2 as const rational) as real
        return (m_crl(r1) + m_crl(r2)) / 2d
    end function
    
    function avg (byref n1 as const real, byref n2 as const real, byref r3 as const rational) as real
        return (n1 + n2 + m_crl(r3)) / 3d
    end function
    
    function avg (byref n1 as const real, byref r2 as const rational, byref n3 as const real) as real
        return (n1 + m_crl(r2) + n3) / 3d
    end function
    
    function avg (byref n1 as const real, byref r2 as const rational, byref r3 as const rational) as real
        return (n1 + m_crl(r2) + m_crl(r3)) / 3d
    end function
    
    function avg (byref r1 as const rational, byref n2 as const real, byref n3 as const real) as real
        return (m_crl(r1) + n2 + n3) / 3d
    end function
    
    function avg (byref r1 as const rational, byref n2 as const real, byref r3 as const rational) as real
        return (m_crl(r1) + n2 + m_crl(r3)) / 3d
    end function
    
    function avg (byref r1 as const rational, byref r2 as const rational, byref n3 as const real) as real
        return (m_crl(r1) + m_crl(r2) + n3) / 3d
    end function
    
    function avg (byref r1 as const rational, byref r2 as const rational, byref r3 as const rational) as real
        return (m_crl(r1) + m_crl(r2) + m_crl(r3)) / 3d
    end function
    
    function avg (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref r4 as const rational) as real
        return (n1 + n2 + n3 + m_crl(r4)) / 4d
    end function
    
    function avg (byref n1 as const real, byref n2 as const real, byref r3 as const rational, byref n4 as const real) as real
        return (n1 + n2 + m_crl(r3) + n4) / 4d
    end function
    
    function avg (byref n1 as const real, byref n2 as const real, byref r3 as const rational, byref r4 as const rational) as real
        return (n1 + n2 + m_crl(r3) + m_crl(r4)) / 4d
    end function
    
    function avg (byref n1 as const real, byref r2 as const rational, byref n3 as const real, byref n4 as const real) as real
        return (n1 + m_crl(r2) + n3 + n4) / 4d
    end function
    
    function avg (byref n1 as const real, byref r2 as const rational, byref n3 as const real, byref r4 as const rational) as real
        return (n1 + m_crl(r2) + n3 + m_crl(r4)) / 4d
    end function
    
    function avg (byref n1 as const real, byref r2 as const rational, byref r3 as const rational, byref n4 as const real) as real
        return (n1 + m_crl(r2) + m_crl(r3) + n4) / 4d
    end function
    
    function avg (byref n1 as const real, byref r2 as const rational, byref r3 as const rational, byref r4 as const rational) as real
        return (n1 + m_crl(r2) + m_crl(r3) + m_crl(r4)) / 4d
    end function
    
    function avg (byref r1 as const rational, byref n2 as const real, byref n3 as const real, byref n4 as const real) as real
        return (m_crl(r1) + n2 + n3 + n4) / 4d
    end function
    
    function avg (byref r1 as const rational, byref n2 as const real, byref n3 as const real, byref r4 as const rational) as real
        return (m_crl(r1) + n2 + n3 + m_crl(r4)) / 4d
    end function
    
    function avg (byref r1 as const rational, byref n2 as const real, byref r3 as const rational, byref n4 as const real) as real
        return (m_crl(r1) + n2 + m_crl(r3) + n4) / 4d
    end function
    
    function avg (byref r1 as const rational, byref n2 as const real, byref r3 as const rational, byref r4 as const rational) as real
        return (m_crl(r1) + n2 + m_crl(r3) + m_crl(r4)) / 4d
    end function
    
    function avg (byref r1 as const rational, byref r2 as const rational, byref n3 as const real, byref n4 as const real) as real
        return (m_crl(r1) + m_crl(r2) + n3 + n4) / 4d
    end function
    
    function avg (byref r1 as const rational, byref r2 as const rational, byref n3 as const real, byref r4 as const rational) as real
        return (m_crl(r1) + m_crl(r2) + n3 + m_crl(r4)) / 4d
    end function
    
    function avg (byref r1 as const rational, byref r2 as const rational, byref r3 as const rational, byref n4 as const real) as real
        return (m_crl(r1) + m_crl(r2) + m_crl(r3) + n4) / 4d
    end function
    
    function avg (byref r1 as const rational, byref r2 as const rational, byref r3 as const rational, byref r4 as const rational) as real
        return (m_crl(r1) + m_crl(r2) + m_crl(r3) + m_crl(r4)) / 4d
    end function
    
    
' math.avsin -------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the inverse versine of r.
    
    m_f(avsin)
    
    #endif
    
' math.cmp ---------------------------------------------------------------------
    
    ' Returns true if the absolute difference betwen n1 and n2 is lesser than or
    ' equal to a threshold, and false otherwise.
    
    function cmp (byref n as const real, byref r as const rational, byref t as const real => epsilon) as boolean
        return iif(abs(n - m_crl(r)) <= abs(t), true, false)
    end function
    
    function cmp (byref r as const rational, byref n as const real, byref t as const real => epsilon) as boolean
        return iif(abs(m_crl(r) - n) <= abs(t), true, false)
    end function
    
    function cmp (byref r1 as const rational, byref r2 as const rational, byref t as const real => epsilon) as boolean
        return iif(abs(m_crl(r1) - m_crl(r2)) <= abs(t), true, false)
    end function
    
' math.cosh --------------------------------------------------------------------
    
    ' Returns the hyperbolic cosine of r.
    
    m_f(cosh)
    
' math.cot ---------------------------------------------------------------------
    
    ' Returns the cotangent of r.
    
    m_f(cot)
    
' math.coth --------------------------------------------------------------------
    
    ' Returns the hyperbolic cotangent of r.
    
    m_f(coth)
    
' math.crd ---------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the chord of r.
    
    m_f(crd)
    
    #endif
    
' math.csc ---------------------------------------------------------------------
    
    ' Returns the cosecant of r.
    
    m_f(csc)
    
' math.csch --------------------------------------------------------------------
    
    ' Returns the hyperbolic cosecant of r.
    
    m_f(csch)
    
' math.cvcos -------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the covercosine of r.
    
    m_f(cvcos)
    
' math.cvsin -------------------------------------------------------------------
    
    ' Returns the coversine of r.
    
    m_f(cvsin)
    
' math.excsc -------------------------------------------------------------------
    
    ' Returns the excosecant of r.
    
    m_f(excsc)
    
' math.exsec -------------------------------------------------------------------
    
    ' Returns the exsecant of r.
    
    m_f(exsec)
    
' math.hcvcos ------------------------------------------------------------------
    
    ' Returns the hacovercosine of r.
    
    m_f(hcvcos)
    
' math.hcvsin ------------------------------------------------------------------
    
    ' Returns the hacoversine or f.
    
    m_f(hcvsin)
    
' math.hvcos -------------------------------------------------------------------
    
    ' Returns the havercosine of r.
    
    m_f(hvcos)
    
' math.hvsin -------------------------------------------------------------------
    
    ' Returns the haversine of r.
    
    m_f(hvsin)
    
    #endif
    
' math.hypot -------------------------------------------------------------------
    
    function hypot (byref x as const real, byref y as const rational) as real
        dim as real j => m_crl(y)
        return sqr(x + x + j * j)
    end function
    
    function hypot (byref x as const rational, byref y as const real) as real
        dim as real i => m_crl(x)
        return sqr(i * i + y * y)
    end function
    
    function hypot (byref x as const rational, byref y as const rational) as real
        dim as real i => m_crl(x), j => m_crl(y)
        return sqr(i * i + j * j)
    end function
    
    function hypot (byref x as const real, byref y as const real, byref z as const rational) as real
        dim as real k => m_crl(z)
        return sqr(x * x + y * y + k * k)
    end function
    
    function hypot (byref x as const real, byref y as const rational, byref z as const real) as real
        dim as real j => m_crl(y)
        return sqr(x * x + j * j + z * z)
    end function
    
    function hypot (byref x as const real, byref y as const rational, byref z as const rational) as real
        dim as real j => m_crl(y), k => m_crl(z)
        return sqr(x * x + j * j + k * k)
    end function
    
    function hypot (byref x as const rational, byref y as const real, byref z as const real) as real
        dim as real i => m_crl(x)
        return sqr(i * i + y * y + z * z)
    end function
    
    function hypot (byref x as const rational, byref y as const real, byref z as const rational) as real
        dim as real i => m_crl(x), k => m_crl(z)
        return sqr(i * i + y * y + k * k)
    end function
    
    function hypot (byref x as const rational, byref y as const rational, byref z as const real) as real
        dim as real i => m_crl(x), j => m_crl(y)
        return sqr(i * i + j * j + z * z)
    end function
    
    function hypot (byref x as const rational, byref y as const rational, byref z as const rational) as real
        dim as real i => m_crl(x), j => m_crl(y), k => m_crl(z)
        return sqr(i * i + j * j + k * k)
    end function
    
    function hypot (byref x as const real, byref y as const real, byref z as const real, byref w as const rational) as real
        dim as real l => m_crl(w)
        return sqr(x * x + y * y + z * z + l * l)
    end function
    
    function hypot (byref x as const real, byref y as const real, byref z as const rational, byref w as const real) as real
        dim as real k => m_crl(z)
        return sqr(x * x + y * y + k * k + w * w)
    end function
    
    function hypot (byref x as const real, byref y as const real, byref z as const rational, byref w as const rational) as real
        dim as real k => m_crl(z), l => m_crl(w)
        return sqr(x * x + y * y + k * k + l * l)
    end function
    
    function hypot (byref x as const real, byref y as const rational, byref z as const real, byref w as const real) as real
        dim as real j => m_crl(y)
        return sqr(x * x + j * j + z * z + w * w)
    end function
    
    function hypot (byref x as const real, byref y as const rational, byref z as const real, byref w as const rational) as real
        dim as real j => m_crl(y), l => m_crl(w)
        return sqr(x * x + j * j + z * z + l * l)
    end function
    
    function hypot (byref x as const real, byref y as const rational, byref z as const rational, byref w as const real) as real
        dim as real j => m_crl(y), k => m_crl(z)
        return sqr(x * x + j * j + k * k + w * w)
    end function
    
    function hypot (byref x as const real, byref y as const rational, byref z as const rational, byref w as const rational) as real
        dim as real j => m_crl(y), k => m_crl(z), l => m_crl(w)
        return sqr(x * x + j * j + k * k + l * l)
    end function
    
    function hypot (byref x as const rational, byref y as const real, byref z as const real, byref w as const real) as real
        dim as real i => m_crl(x)
        return sqr(i * i + y * y + z * z + w * w)
    end function
    
    function hypot (byref x as const rational, byref y as const real, byref z as const real, byref w as const rational) as real
        dim as real i => m_crl(x), l => m_crl(w)
        return sqr(i * i + y * y + z * z + l * l)
    end function
    
    function hypot (byref x as const rational, byref y as const real, byref z as const rational, byref w as const real) as real
        dim as real i => m_crl(x), k => m_crl(z)
        return sqr(i * i + y * y + k * k + w * w)
    end function
    
    function hypot (byref x as const rational, byref y as const real, byref z as const rational, byref w as const rational) as real
        dim as real i => m_crl(x), k => m_crl(z), l => m_crl(w)
        return sqr(i * i + y * y + k * k + l * l)
    end function
    
    function hypot (byref x as const rational, byref y as const rational, byref z as const real, byref w as const real) as real
        dim as real i => m_crl(x), j => m_crl(y)
        return sqr(i * i + j * j + z * z + w * w)
    end function
    
    function hypot (byref x as const rational, byref y as const rational, byref z as const real, byref w as const rational) as real
        dim as real i => m_crl(x), j => m_crl(y), l => m_crl(w)
        return sqr(i * i + j * j + z * z + l * l)
    end function
    
    function hypot (byref x as const rational, byref y as const rational, byref z as const rational, byref w as const real) as real
        dim as real i => m_crl(x), j => m_crl(y), k => m_crl(z)
        return sqr(i * i + j * j + k * k + w * w)
    end function
    
    function hypot (byref x as const rational, byref y as const rational, byref z as const rational, byref w as const rational) as real
        dim as real i => m_crl(x), j => m_crl(y), k => m_crl(z), l => m_crl(w)
        return sqr(i * i + j * j + k * k + l * l)
    end function
    
' math.lerp --------------------------------------------------------------------
    
    function lerp (byref n as const real, byref r as const rational, byref s as const real) as real
        dim as real t => clamp(s)
        return n * (1d - t) + m_crl(r) * t
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref n as const real, byref r as const rational, byref s as const real, e as const easing.equation) as real
        dim as real t => iif(e, e(clamp(s)), clamp(s))
        return n * (1d - t) + m_crl(r) * t
    end function
    
    function lerp (byref n as const real, byref r as const rational, byref s as const real, byref c as const easing.curve) as real
        dim as real t => c.compute(clamp(s))
        return n * (1d - t) + m_crl(r) * t
    end function
    #endif
    
    function lerp (byref r as const rational, byref n as const real, byref s as const real) as real
        dim as real t => clamp(s)
        return m_crl(r) * (1d - t) + n * t
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref r as const rational, byref n as const real, byref s as const real, e as const easing.equation) as real
        dim as real t => iif(e, e(clamp(s)), clamp(s))
        return m_crl(r) * (1d - t) + n * t
    end function
    
    function lerp (byref r as const rational, byref n as const real, byref s as const real, byref c as const easing.curve) as real
        dim as real t => c.compute(clamp(s))
        return m_crl(r) * (1d - t) + n * t
    end function
    #endif
    
    function lerp (byref r1 as const rational, byref r2 as const rational, byref s as const real) as real
        dim as real t => clamp(s)
        return m_crl(r1) * (1d - t) + m_crl(r2) * t
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref r1 as const rational, byref r2 as const rational, byref s as const real, e as const easing.equation) as real
        dim as real t => iif(e, e(clamp(s)), clamp(s))
        return m_crl(r1) * (1d - t) + m_crl(r2) * t
    end function
    
    function lerp (byref r1 as const rational, byref r2 as const rational, byref s as const real, byref c as const easing.curve) as real
        dim as real t => c.compute(clamp(s))
        return m_crl(r1) * (1d - t) + m_crl(r2) * t
    end function
    #endif
    
' math.log10 -------------------------------------------------------------------
    
    ' Returns the base 10 logarithm of r.
    
    m_f(log10)
    
' math.log1p -------------------------------------------------------------------
    
    ' Returns the natural logarithm of r + 1.
    
    m_f(log1p)
    
' math.log2 --------------------------------------------------------------------
    
    ' Returns the base 2 logarithm of r.
    
    m_f(log2)
    
' math.logb --------------------------------------------------------------------
    
    ' Returns the base b logarithm of n.
    
    function logb (byref n as const real, byref b as const rational) as real
        return logb(n, m_crl(b))
    end function
    
    function logb (byref n as const rational, byref b as const real) as real
        return logb(m_crl(n), b)
    end function
    
    function logb (byref n as const rational, byref b as const rational) as real
        return logb(m_crl(n), m_crl(b))
    end function
    
' math.sec ---------------------------------------------------------------------
    
    ' Returns the secant of r.
    
    m_f(sec)
    
' math.sech --------------------------------------------------------------------
    
    ' Returns the hyperbolic secant of r.
    
    m_f(sech)
    
' math.sinh --------------------------------------------------------------------
    
    ' Returns the hyperbolic sine of r.
    
    m_f(sinh)
    
' math.tanh --------------------------------------------------------------------
    
    ' Returns the hyperbolic tangent of r.
    
    m_f(tanh)
    
' math.theta -------------------------------------------------------------------
    
    function theta (byref x as const real, byref y as const rational) as real
        return theta(x, m_crl(y))
    end function
    
    function theta (byref x as const rational, byref y as const real) as real
        return theta(m_crl(x), y)
    end function
    
    function theta (byref x as const rational, byref y as const rational) as real
        return theta(m_crl(x), m_crl(y))
    end function
    
' math.vcos --------------------------------------------------------------------
    
    #ifdef MATH_EXTENDED_TRIGONOMETRY
    
    ' Returns the vercosine of r.
    
    m_f(vcos)
    
' math.vsin --------------------------------------------------------------------
    
    ' Returns the versine of r.
    
    m_f(vsin)
    
    #endif
    
    #undef m_f
    
end namespace
