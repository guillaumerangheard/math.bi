namespace math
    
' functions ====================================================================
    
' math.cmp ---------------------------------------------------------------------
    
    function cmp (byref n as const real, byref c as const complex, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(n - c.r) <= t) and (abs(c.i) <= t), true, false)
    end function
    
    function cmp (byref c as const complex, byref n as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(c.r - n) <= t) and (abs(c.i) <= t), true, false)
    end function
    
    function cmp (byref c1 as const complex, byref c2 as const complex, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(c1.r - c2.r) <= t) and (abs(c1.i - c2.i) <= t), true, false)
    end function
    
' math.cos ---------------------------------------------------------------------
    
    ' Returns the cosine of c.
    ' Cf. https://proofwiki.org/wiki/Cosine_of_Complex_Number
    
    'function cos (byref c as const complex) as complex
    '    return complex(cos(c.r) * cosh(c.i), -(sin(c.r) * sinh(c.i)))
    'end function
    
' math.cosh --------------------------------------------------------------------
    
    ' Returns the hyperbolic cosine of c.
    ' Cf. https://proofwiki.org/wiki/Hyperbolic_Cosine_of_Complex_Number
    
    function cosh (byref c as const complex) as complex
        return complex(cosh(c.r) * cos(c.i), sinh(c.r) * sin(c.i))
    end function
    
' math.cot ---------------------------------------------------------------------
    
    ' Returns the cotangent of c.
    ' Cf. https://proofwiki.org/wiki/Cotangent_of_Complex_Number
    
    function cot (byref c as const complex) as complex
        dim as real a => cot(c.r), b => coth(c.i), d => a * a + b * b
        return iif(d, complex((a * b * b - a) / d, (-a * a * b - b) / d), complex())
    end function
    
' math.coth --------------------------------------------------------------------
    
    ' Returns the hyperbolic cotangent of c.
    ' Cf. https://proofwiki.org/wiki/Hyperbolic_Cotangent_of_Complex_Number
    
    function coth (byref c as const complex) as complex
        dim as real a => coth(c.r), b => cot(c.i), d => a * a + b * b
        return iif(d, complex((a + a * b * b) / d, (b - a * a * b) / d), complex())
    end function
    
' math.csc ---------------------------------------------------------------------
    
    ' Returns the cosecant of c.
    ' Cf. https://proofwiki.org/wiki/Cosecant_of_Complex_Number
    
    'function csc (byref c as const complex) as complex
    '    return 1d / sin(c)
    'end function
    
' math.csch --------------------------------------------------------------------
    
    ' Returns the hyperbolic cosecant of c.
    ' Cf. https://proofwiki.org/wiki/Hyperbolic_Cosecant_of_Complex_Number
    
    function csch (byref c as const complex) as complex
        return 1d / sinh(c)
    end function
    
' math.lerp --------------------------------------------------------------------
    
    function lerp (byref n as const real, byref c as const complex, byref s as const real) as complex
        dim as real t => clamp(s)
        return complex(n * (1d - t) + c.r * t, c.i * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref n as const real, byref c as const complex, byref s as const real, e as const easing.equation) as complex
        dim as real t => iif(e, e(clamp(s)), clamp(s))
        return complex(n * (1d - t) + c.r * t, c.i * t)
    end function
    
    function lerp (byref n as const real, byref c as const complex, byref s as const real, byref d as const easing.curve) as complex
        dim as real t => d.compute(clamp(s))
        return complex(n * (1d - t) + c.r * t, c.i * t)
    end function
    #endif
    
    function lerp (byref c as const complex, byref n as const real, byref s as const real) as complex
        dim as real t => clamp(s), u => 1d - t
        return complex(c.r * u + n * t, c.i * u)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref c as const complex, byref n as const real, byref s as const real, e as const easing.equation) as complex
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return complex(c.r * u + n * t, c.i * u)
    end function
    
    function lerp (byref c as const complex, byref n as const real, byref s as const real, byref d as const easing.curve) as complex
        dim as real t => d.compute(clamp(s)), u => 1d - t
        return complex(c.r * u + n * t, c.i * u)
    end function
    #endif
    
    function lerp (byref c1 as const complex, byref c2 as const complex, byref s as const real) as complex
        dim as real t => clamp(s), u => 1d - t
        return complex(c1.r * u + c2.r * t, c1.i * u + c2.i * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref c1 as const complex, byref c2 as const complex, byref s as const real, e as const easing.equation) as complex
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return complex(c1.r * u + c2.r * t, c1.i * u + c2.i * t)
    end function
    
    function lerp (byref c1 as const complex, byref c2 as const complex, byref s as const real, byref d as const easing.curve) as complex
        dim as real t => d.compute(clamp(s)), u => 1d - t
        return complex(c1.r * u + c2.r * t, c1.i * u + c2.i * t)
    end function
    #endif
    
' math.sin ---------------------------------------------------------------------
    
    'function sin (byref c as const complex) as complex
    '    return complex(sin(c.r) * cosh(c.i), cos(c.r) * sinh(c.i))
    'end function
    
' math.sinh --------------------------------------------------------------------
    
    function sinh (byref c as const complex) as complex
        return complex(sinh(c.r) * cos(c.i), cosh(c.r) * sin(c.i))
    end function
    
' math.sec ---------------------------------------------------------------------
    
    ' Returns the secant of c.
    ' Cf. https://proofwiki.org/wiki/Secant_of_Complex_Number
    
    'function sec (byref c as const complex) as complex
    '    return 1d / cos(c)
    'end function
    
' math.sech --------------------------------------------------------------------
    
    ' Returns the hyperbolic secant of c.
    ' Cf. https://proofwiki.org/wiki/Hyperbolic_Secant_of_Complex_Number
    
    function sech (byref c as const complex) as complex
        return 1d / cosh(c)
    end function
    
' math.tan ---------------------------------------------------------------------
    
    ' Returns the tangent of c.
    ' Cf. https://proofwiki.org/wiki/Tangent_of_Complex_Number
    
    'function tan (byref c as const complex) as complex
    '    dim as real a => tan(c.r), b => tanh(c.i), d => 1d - a * a * b * b
    '    return iif(d, complex((a - a * b * b) / d, (b + a * a * b) / d), complex())
    'end function
    
' math.tanh --------------------------------------------------------------------
    
    ' Returns the hyperbolic tangent of c.
    ' Cf. https://proofwiki.org/wiki/Hyperbolic_Tangent_of_Complex_Number
    
    function tanh (byref c as const complex) as complex
        dim as real a => tanh(c.r), b => tan(c.i), d => 1d + a * a * b * b
        return iif(d, complex((a + a * b * b) / d, (b - a * a * b) / d), complex())
    end function
    
end namespace
