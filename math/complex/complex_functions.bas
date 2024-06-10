namespace math
    
' functions ====================================================================
    
' math.eq ----------------------------------------------------------------------
    
    function eq (byref n as const real, byref c as const complex, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(n - c.r) <= t) and (abs(c.i) <= t), true, false)
    end function
    
    function eq (byref c as const complex, byref n as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(c.r - n) <= t) and (abs(c.i) <= t), true, false)
    end function
    
    function eq (byref c1 as const complex, byref c2 as const complex, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(c1.r - c2.r) <= t) and (abs(c1.i - c2.i) <= t), true, false)
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
    
end namespace
