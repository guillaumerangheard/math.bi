namespace math
    
' functions ====================================================================
    
' math.dot ---------------------------------------------------------------------
    
    function dot (byref x1 as const real, byref y1 as const real, byref v2 as const pvec) as real
        return x1 * v2.x + y1 * v2.y
    end function
    
    function dot (byref v1 as const pvec, byref x2 as const real, byref y2 as const real) as real
        return v1.x * x2 + v1.y * y2
    end function
    
    #macro pv_d(_t1_,_t2_)
    function dot (byref v1 as const _t1_, byref v2 as const _t2_) as real
        return v1.x * v2.x + v1.y * v2.y
    end function
    #endmacro
    pv_d(vec2,pvec)
    pv_d(pvec,vec2)
    pv_d(pvec,pvec)
    #undef pv_d
    
    function dot (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const pvec, byref z2 as const real) as real
        return x1 * v2.x + y1 * v2.y + z1 * z2
    end function
    
    function dot (byref v1 as const pvec, byref z1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real) as real
        return v1.x * x2 + v1.y * y2 + z1 * z2
    end function
    
    #macro pv_d(_t1_,_t2_)
    function dot (byref v1 as const _t1_, byref z1 as const real, byref v2 as const _t2_, byref z2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + z1 * z2
    end function
    #endmacro
    pv_d(vec2,pvec)
    pv_d(pvec,vec2)
    pv_d(pvec,pvec)
    #undef pv_d
    
    function dot (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref v2 as const pvec, byref z2 as const real, byref w2 as const real) as real
        return x1 * v2.x + y1 * v2.y + z1 * z2 + w1 * w2
    end function
    
    function dot (byref v1 as const pvec, byref z1 as const real, byref w1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real) as real
        return v1.x * x2 + v1.y * y2 + z1 * z2 + w1 * w2
    end function
    
    #macro pv_d(_t1_,_t2_)
    function dot (byref v1 as const _t1_, byref z1 as const real, byref w1 as const real, byref v2 as const _t2_, byref z2 as const real, byref w2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + z1 * z2 + w1 * w2
    end function
    #endmacro
    pv_d(vec2,pvec)
    pv_d(pvec,vec2)
    pv_d(pvec,pvec)
    #undef pv_d
    
' math.eq ----------------------------------------------------------------------
    
    function eq (byref x1 as const real, byref y1 as const real, byref v2 as const pvec, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - v2.x) <= t) and (abs(y1 - v2.y) <= t), true, false)
    end function
    
    function eq (byref v1 as const pvec, byref x2 as const real, byref y2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - x2) <= t) and (abs(v1.y - y2) <= t), true, false)
    end function
    
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
    
    function eq (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const pvec, byref z2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - v2.x) <= t) and (abs(y1 - v2.y) <= t) and (abs(z1 - z2) <= t), true, false)
    end function
    
    function eq (byref v1 as const pvec, byref z1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - x2) <= t) and (abs(v1.y - y2) <= t) and (abs(z1 - z2) <= t), true, false)
    end function
    
    #macro pv_e(_t1_,_t2_)
    function eq (byref v1 as const _t1_, byref z1 as const real, byref v2 as const _t2_, byref z2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.x - v2.x) <= t) and (abs(z1 - z2) <= t), true, false)
    end function
    #endmacro
    pv_e(vec2,pvec)
    pv_e(pvec,vec2)
    #undef pv_e
    
    function eq (byref v1 as const pvec, byref z1 as const real, byref v2 as const pvec, byref z2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.phi - v2.phi) <= t) and (abs(v1.rho - v2.rho) <= t) and (abs(z1 - z2) <= t), true, false)
    end function
    
    function eq (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref v2 as const pvec, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - v2.x) <= t) and (abs(y1 - v2.y) <= t) and (abs(z1 - z2) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    
    function eq (byref v1 as const pvec, byref z1 as const real, byref w1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - x2) <= t) and (abs(v1.y - y2) <= t) and (abs(z1 - z2) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    
    #macro pv_e(_t1_,_t2_)
    function eq (byref v1 as const _t1_, byref z1 as const real, byref w1 as const real, byref v2 as const _t2_, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.x - v2.x) <= t) and (abs(z1 - z2) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    #endmacro
    pv_e(vec2,pvec)
    pv_e(pvec,vec2)
    #undef pv_e
    
    function eq (byref v1 as const pvec, byref z1 as const real, byref w1 as const real, byref v2 as const pvec, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.phi - v2.phi) <= t) and (abs(v1.rho - v2.rho) <= t) and (abs(z1 - z2) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    
' math.lerp --------------------------------------------------------------------
    
    #ifdef MATH_FORCE_CARTESIAN
    
    function lerp (byref x1 as const real, byref y1 as const real, byref v2 as const pvec, byref s as const real) as vec2
        dim as real t => clamp(s), u => 1d - t
        return vec2(x1 * u + v2.x * t, y1 * u + v2.y * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref x1 as const real, byref y1 as const real, byref v2 as const pvec, byref s as const real, e as const easing.equation) as vec2
        dim as real t => clamp(s), u
        if e then t => e(t)
        u => 1d - t
        return vec2(x1 * u + v2.x * t, y1 * u + v2.y * t)
    end function
    
    function lerp (byref x1 as const real, byref y1 as const real, byref v2 as const pvec, byref s as const real, byref c as ocnsy easing.curve) as vec2
        dim as real t => clamp(s), u
        t => c.compute(t)
        u => 1d - t
        return vec2(x1 * u + v2.x * t, y1 * u + v2.y * t)
    end function
    #endif
    
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
    
    function lerp (byref x1 as const real, byref y1 as const real, byref v2 as const pvec, byref s as const real) as pvec
        dim as real t => clamp(t), u => 1d - t, a1 => math.phi(x1, y1), r1 => math.hypot(x1, y1)
        #ifdef _MATH_ANGLE_BI_
        return pvec(a1 * u + v2.phi * t, angleUnit.radian, r1 * u + v2.rho * t)
        #else
        return pvec(a1 * u + v2.phi * t, r1 * u + v2.rho * t)
        #endif
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref x1 as const real, byref y1 as const real, byref v2 as const pvec, byref s as const real, e as const easing.equation) as pvec
        dim as real t => clamp(t), u, a1 => math.phi(x1, y1), r1 => math.hypot(x1, y1)
        if e then t => e(t)
        u => 1d - t
        #ifdef _MATH_ANGLE_BI_
        return pvec(a1 * u + v2.phi * t, angleUnit.radian, r1 * u + v2.rho * t)
        #else
        return pvec(a1 * u + v2.phi * t, r1 * u + v2.rho * t)
        #endif
    end function
    
    function lerp (byref x1 as const real, byref y1 as const real, byref v2 as const pvec, byref s as const real, byref c as const easing.curve) as pvec
        dim as real t => clamp(t), u, a1 => math.phi(x1, y1), r1 => math.hypot(x1, y1)
        t => c.compute(t)
        u => 1d - t
        #ifdef _MATH_ANGLE_BI_
        return pvec(a1 * u + v2.phi * t, angleUnit.radian, r1 * u + v2.rho * t)
        #else
        return pvec(a1 * u + v2.phi * t, r1 * u + v2.rho * t)
        #endif
    end function
    #endif
    
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
