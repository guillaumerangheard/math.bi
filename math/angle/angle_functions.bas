namespace math
    
' math.eq ----------------------------------------------------------------------
    
    function eq (byref n as const real, byref a as const angle, byref t as const real => epsilon) as boolean
        return iif(abs(n / angles(defaultAngleUnit) - a.value) <= abs(t), true, false)
    end function
    
    function eq (byref a as const angle, byref n as const real, byref t as const real => epsilon) as boolean
        return iif(abs(a.value - n / angles(defaultAngleUnit)) <= abs(t), true, false)
    end function
    
    function eq (byref a1 as const angle, byref a2 as const angle, byref t as const real => epsilon) as boolean
        return iif(abs(a1.value - a2.value) <= abs(t), true, false)
    end function
    
' math.lerp --------------------------------------------------------------------
    
    function lerp (byref a1 as const angle, byref a2 as const angle, byref s as const real) as angle
        dim as real t => clamp(s)
        return angle(a1.value * (1d - t) + a2.value * t, angleUnit.turn)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref a1 as const angle, byref a2 as const angle, byref s as const real, e as const easing.equation) as angle
        dim as real t => iif(e, e(clamp(s)), clamp(s))
        return angle(a1.value * (1d - t) + a2.value * t, angleUnit.turn)
    end function
    
    function lerp (byref a1 as const angle, byref a2 as const angle, byref s as const real, byref c as const easing.curve) as angle
        dim as real t => c.compute(clamp(s))
        return angle(a1.value * (1d - t) + a2.value * t, angleUnit.turn)
    end function
    #endif
    
end namespace
