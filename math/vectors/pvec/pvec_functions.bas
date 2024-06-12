namespace math
    
' functions ====================================================================
    
' math.cross -------------------------------------------------------------------
    
    #macro pv_c(_t1_,_t2_)
    function cross overload (byref v1 as const _t1_, byref v2 as const _t2_) as real
        return (v1.x * v2.y) - (v1.y * v2.x)
    end function
    #endmacro
    pv_c(vec2,pvec)
    pv_c(pvec,vec2)
    pv_c(pvec,pvec)
    #undef pv_c
    
' math.dot ---------------------------------------------------------------------
    
    #macro pv_d(_t1_,_t2_)
    function dot (byref v1 as const _t1_, byref v2 as const _t2_) as real
        return v1.x * v2.x + v1.y * v2.y
    end function
    #endmacro
    pv_d(vec2,pvec)
    pv_d(pvec,vec2)
    pv_d(pvec,pvec)
    #undef pv_d
    
' math.eq ----------------------------------------------------------------------
    
    #macro pv_e(_t1_,_t2_)
    function eq (byref v1 as const _t1_, byref v2 as const _t2_, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.x - v2.x) <= t), true, false)
    end function
    #endmacro
    pv_e(vec2,pvec)
    pv_e(pvec,vec2)
    #undef pv_e
    
    function eq (byref v1 as const pvec, byref v2 as const pvec, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.phi - v2.phi) <= t) and (abs(v1.rho - v2.rho) <= t), true, false)
    end function
    
' math.lerp --------------------------------------------------------------------
    
    #ifdef MATH_FORCE_CARTESIAN
    
    #macro pv_l(_t1_,_t2_)
    function lerp (byref v1 as const _t1_, byref v2 as const _t2_, byref s as const real) as vec2
        dim as real t => clamp(s), u => 1d - t
        return vec2(v1.x * u + v2.x * t, v1.y * u + v2.y * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const _t1_, byref v2 as const _t2_, byref s as const real, e as const easing.equation) as vec2
        dim as real t => clamp(s), u
        if e then t => e(t)
        u => 1d - t
        return vec2(v1.x * u + v2.x * t, v1.y * u + v2.y * t)
    end function
    
    function lerp (byref v1 as const _t1_, byref v2 as const _t2_, byref s as const real, byref c as const easing.curve) as vec2
        dim as real t => clamp(s), u
        t => c.compute(t)
        u => 1d - t
        return vec2(v1.x * u + v2.x * t, v1.y * u + v2.y * t)
    end function
    #endif
    #endmacro
    pv_l(vec2,pvec)
    pv_l(pvec,vec2)
    #undef pv_l
    
    #else
    
    #macro pv_l(_t1_,_t2_,_p1_,_p2_)
    function lerp (byref v1 as const _t1_, byref v2 as const _t2_, byref s as const real) as pvec
        dim as real t => clamp(s), u => 1d - t
        #ifdef _MATH_ANGLE_BI_
        return pvec(v1.phi * u + v2.phi * t, angleUnit.radian, v1.##_p1_ * u + v2.##_p2_ * t)
        #else
        return pvec(v1.phi * u + v2.phi * t, v1.##_p1_ * u + v2.##_p2_ * t)
        #endif
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const _t1_, byref v2 as const _t2_, byref s as const real, e as const easing.equation) as pvec
        dim as real t => clamp(s), u
        if e then t => e(t)
        u => 1d - t
        #ifdef _MATH_ANGLE_BI_
        return pvec(v1.phi * u + v2.phi * t, angleUnit.radian, v1.##_p1_ * u + v2.##_p2_ * t)
        #else
        return pvec(v1.phi * u + v2.phi * t, v1.##_p1_ * u + v2.##_p2_ * t)
        #endif
    end function
    
    function lerp (byref v1 as const _t1_, byref v2 as const _t2_, byref s as const real, byref c as const easing.curve) as pvec
        dim as real t => clamp(s), u
        t => c.compute(t)
        u => 1d - t
        #ifdef _MATH_ANGLE_BI_
        return pvec(v1.phi * u + v2.phi * t, angleUnit.radian, v1.##_p1_ * u + v2.##_p2_ * t)
        #else
        return pvec(v1.phi * u + v2.phi * t, v1.##_p1_ * u + v2.##_p2_ * t)
        #endif
    end function
    #endif
    #endmacro
    pv_l(vec2,pvec,norm,rho)
    pv_l(pvec,vec2,rho,norm)
    #undef pv_l
    
    #endif
    
    function lerp (byref v1 as const pvec, byref v2 as const pvec, byref s as const real) as pvec
        dim as real t => clamp(t), u => 1d - t
        #ifdef _MATH_ANGLE_BI_
        return pvec(v1.phi * u + v2.phi * t, angleUnit.radian, v1.rho * u + v2.rho * t)
        #else
        return pvec(v1.phi * u + v2.phi * t, v1.rho * u + v2.rho * t)
        #endif
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const pvec, byref v2 as const pvec, byref s as const real, e as const easing.equation) as pvec
        dim as real t => clamp(t), u
        if e then t => e(t)
        u => 1d - t
        #ifdef _MATH_ANGLE_BI_
        return pvec(v1.phi * u + v2.phi * t, angleUnit.radian, v1.rho * u + v2.rho * t)
        #else
        return pvec(v1.phi * u + v2.phi * t, v1.rho * u + v2.rho * t)
        #endif
    end function
    
    function lerp (byref v1 as const pvec, byref v2 as const pvec, byref s as const real, byref c as const easing.curve) as pvec
        dim as real t => clamp(t), u
        t => c.compute(t)
        u => 1d - t
        #ifdef _MATH_ANGLE_BI_
        return pvec(v1.phi * u + v2.phi * t, angleUnit.radian, v1.rho * u + v2.rho * t)
        #else
        return pvec(v1.phi * u + v2.phi * t, v1.rho * u + v2.rho * t)
        #endif
    end function
    #endif
    
end namespace
