namespace math
    
' math.cmp ---------------------------------------------------------------------
    
    function cmp (byref n as const real, byref a as const angle, byref t as const real => epsilon) as boolean
        return iif(abs(n / angles(defaultAngleUnit) - a.value) <= abs(t), true, false)
    end function
    
    function cmp (byref a as const angle, byref n as const real, byref t as const real => epsilon) as boolean
        return iif(abs(a.value - n / angles(defaultAngleUnit)) <= abs(t), true, false)
    end function
    
    function cmp (byref a1 as const angle, byref a2 as const angle, byref t as const real => epsilon) as boolean
        return iif(abs(a1.value - a2.value) <= abs(t), true, false)
    end function
    
' math.cos ---------------------------------------------------------------------
    
    
    
' math.cosh --------------------------------------------------------------------
    
    #macro a_f(_a_)
    function _a_ (byref a as const angle) as real
        return _a_##(a.theta)
    end function
    #endmacro
    
    a_f(cosh)
    
' math.cot ---------------------------------------------------------------------
    
    a_f(cot)
    
' math.coth --------------------------------------------------------------------
    
    a_f(coth)
    
' math.crd ---------------------------------------------------------------------
    
    a_f(crd)
    
' math.csc ---------------------------------------------------------------------
    
    a_f(csc)
    
' math.csch --------------------------------------------------------------------
    
    a_f(csch)
    
' math.cvcos -------------------------------------------------------------------
    
    a_f(cvcos)
    
' math.cvsin -------------------------------------------------------------------
    
    a_f(cvsin)
    
' math.excsc -------------------------------------------------------------------
    
    a_f(excsc)
    
' math.exsec -------------------------------------------------------------------
    
    a_f(exsec)
    
' math.hcvcos ------------------------------------------------------------------
    
    a_f(hcvcos)
    
' math.hcvsin ------------------------------------------------------------------
    
    a_f(hcvsin)
    
' math.hvcos -------------------------------------------------------------------
    
    a_f(hvcos)
    
' math.hvsin -------------------------------------------------------------------
    
    a_f(hvsin)
    
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
    
' math.sec ---------------------------------------------------------------------
    
    a_f(sec)
    
' math.sech --------------------------------------------------------------------
    
    a_f(sech)
    
' math.sin ---------------------------------------------------------------------
    
    a_f(sin)
    
' math.sinh --------------------------------------------------------------------
    
    a_f(sinh)
    
' math.tan ---------------------------------------------------------------------
    
    
    
' math.tanh --------------------------------------------------------------------
    
    a_f(tanh)
    
' math.vcos --------------------------------------------------------------------
    
    a_f(vcos)
    
' math.vsin --------------------------------------------------------------------
    
    a_f(vsin)
    
    #undef a_f
    
end namespace
