namespace math
    
' methods ======================================================================
    
' math.complex.random ----------------------------------------------------------
    
    #ifdef _RNG_BI_
    
    function complex.random overload () as complex
        dim as real a => math.random(two_pi)
        return complex(cos(a), sin(a))
    end function
    
    function complex.random (byref n as const real) as complex
        dim as real a => math.random(two_pi)
        if 0d <= n then return complex(cos(a) * n, sin(a) * n)
        a += pi
        return complex(cos(a) * -n, sin(a) * -n)
    end function
    
    function complex.random (byref c as const complex) as complex
        dim as real n => math.random()
        return complex(c.r * n, c.i * n)
    end function
    
    function complex.random (byref n1 as const real, byref n2 as const real) as complex
        dim as real t => math.random()
        return complex(n1 * (1d - t) + n2 * t)
    end function
    
    function complex.random (byref n as const real, byref c as const complex) as complex
        dim as real t => math.random()
        return complex(n * (1d - t) + c.r * t, c.i * t)
    end function
    
    function complex.random (byref c as const complex, byref n as const real) as complex
        dim as real t => math.random(), u => 1d - t
        return complex(c.r * u + n * t, c.i * u)
    end function
    
    function complex.random (byref c1 as const complex, byref c2 as const complex) as complex
        dim as real t => math.random(), u => 1d - t
        return complex(c1.r * u + c2.r * t, c1.i * u + c2.i * t)
    end function
    
    #endif
    
' math.complex.toJSON ----------------------------------------------------------
    
    function complex.toJSON (byref a as const boolean => false) as string
        return iif(a, "["       & this.r &  ","       & this.i & "]", _
                     !"{\"r\":" & this.r & !",\"i\":" & this.i & "}")
    end function
    
end namespace
