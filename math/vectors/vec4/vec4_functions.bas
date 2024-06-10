namespace math
    
' functions ====================================================================
    
' math.dot ---------------------------------------------------------------------
    
    function dot (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref v2 as const vec4) as real
        return x1 * v2.x + y1 * v2.y + z1 * v2.z + w1 * v2.w
    end function
    
    #macro v4_d(_t_)
    function dot (byref v1 as const _t_, byref z1 as const real, byref w1 as const real, byref v2 as const vec4) as real
        return v1.x * v2.x + v1.y * v2.y + z1 * v2.z + w1 * v2.w
    end function
    #endmacro
    v4_d(vec2)
    #ifdef _MATH_PVEC_BI_
    v4_d(pvec)
    #endif
    #undef v4_d
    
    #macro v4_d(_t_)
    function dot (byref v1 as const _t_, byref w1 as const real, byref v2 as const vec4) as real
        return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + w1 * v2.w
    end function
    #endmacro
    v4_d(vec3)
    #ifdef _MATH_CVEC_BI_
    v4_d(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    v4_d(svec)
    #endif
    #undef v4_d
    
    function dot (byref v1 as const vec4, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real) as real
        return v1.x * x2 + v1.y * y2 + v1.z * z2 + v1.w * w2
    end function
    
    #macro v4_d(_t_)
    function dot (byref v1 as const vec4, byref v2 as const _t_, byref z2 as const real, byref w2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + v1.z * z2 + v1.w * w2
    end function
    #endmacro
    v4_d(vec2)
    #ifdef _MATH_PVEC_BI_
    v4_d(pvec)
    #endif
    #undef v4_d
    
    #macro v4_d(_t_)
    function dot (byref v1 as const vec4, byref v2 as const _t_, byref w2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * w2
    end function
    #endmacro
    v4_d(vec3)
    #ifdef _MATH_CVEC_BI_
    v4_d(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    v4_d(svec)
    #endif
    #undef v4_d
    
    function dot (byref v1 as const vec4, byref v2 as const vec4) as real
        return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w
    end function
    
' math.eq ----------------------------------------------------------------------
    
    function eq (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref v2 as const vec4, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - v2.x) <= t) and (abs(y1 - v2.y) <= t) and (abs(z1 - v2.z) <= t) and (abs(w1 - v2.w) <= t), true, false)
    end function
    
    #macro v4_e(_t_)
    function eq (byref v1 as const _t_, byref z1 as const real, byref w1 as const real, byref v2 as const vec4, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(z1   - v2.z) <= t) and (abs(w1   - v2.w) <= t), true, false)
    end function
    #endmacro
    v4_e(vec2)
    #ifdef _MATH_PVEC_BI_
    v4_e(pvec)
    #endif
    #undef v4_e
    
    #macro v4_e(_t_)
    function eq (byref v1 as const _t_, byref w1 as const real, byref v2 as const vec4, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(v1.z - v2.z) <= t) and (abs(w1   - v2.w) <= t), true, false)
    end function
    #endmacro
    v4_e(vec3)
    #ifdef _MATH_CVEC_BI_
    v4_e(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    v4_e(svec)
    #endif
    #undef v4_e
    
    function eq (byref v1 as const vec4, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - x2) <= t) and (abs(v1.y - y2) <= t) and (abs(v1.z - z2) <= t) and (abs(v1.w - w2) <= t), true, false)
    end function
    
    #macro v4_e(_t_)
    function eq (byref v1 as const vec4, byref v2 as const _t_, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(v1.z - z2)   <= t) and (abs(v1.w - w2)   <= t), true, false)
    end function
    #endmacro
    v4_e(vec2)
    #ifdef _MATH_PVEC_BI_
    v4_e(pvec)
    #endif
    #undef v4_e
    
    #macro v4_e(_t_)
    function eq (byref v1 as const vec4, byref v2 as const _t_, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(v1.z - v2.z) <= t) and (abs(v1.w - w2)   <= t), true, false)
    end function
    #endmacro
    v4_e(vec3)
    #ifdef _MATH_CVEC_BI_
    v4_e(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    v4_e(svec)
    #endif
    #undef v4_e
    
    function eq (byref v1 as const vec4, byref v2 as const vec4, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(v1.z - v2.z) <= t) and (abs(v1.w - v2.w) <= t), true, false)
    end function
    
' math.lerp --------------------------------------------------------------------
    
    function lerp (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref v2 as const vec4, byref s as const real) as vec4
        dim as real t => clamp(s), u => 1d - t
        return vec4(x1 * u + v2.x * t, y1 * u + v2.y * t, z1 * u + v2.z * t, w1 * u + v2.w * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref v2 as const vec4, byref s as const real, e as const easing.equation) as vec4
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec4(x1 * u + v2.x * t, y1 * u + v2.y * t, z1 * u + v2.z * t, w1 * u + v2.w * t)
    end function
    
    function lerp (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref v2 as const vec4, byref s as const real, byref c as const easing.curve) as vec4
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec4(x1 * u + v2.x * t, y1 * u + v2.y * t, z1 * u + v2.z * t, w1 * u + v2.w * t)
    end function
    #endif
    
    #macro v4_l(_t_)
    function lerp (byref v1 as const _t_, byref z1 as const real, byref w1 as const real, byref v2 as const vec4, byref s as const real) as vec4
        dim as real t => clamp(s), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, z1 * u + v2.z * t, w1 * u + v2.w * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const _t_, byref z1 as const real, byref w1 as const real, byref v2 as const vec4, byref s as const real, e as const easing.equation) as vec4
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, z1 * u + v2.z * t, w1 * u + v2.w * t)
    end function
    
    function lerp (byref v1 as const _t_, byref z1 as const real, byref w1 as const real, byref v2 as const vec4, byref s as const real, byref c as const easing.curve) as vec4
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, z1 * u + v2.z * t, w1 * u + v2.w * t)
    end function
    #endif
    #endmacro
    v4_l(vec2)
    #ifdef _MATH_PVEC_BI_
    v4_l(pvec)
    #endif
    #undef v4_l
    
    #macro v4_l(_t_)
    function lerp (byref v1 as const _t_, byref w1 as const real, byref v2 as const vec4, byref s as const real) as vec4
        dim as real t => clamp(s), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + v2.z * t, w1 * u + v2.w * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const _t_, byref w1 as const real, byref v2 as const vec4, byref s as const real, e as const easing.equation) as vec4
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + v2.z * t, w1 * u + v2.w * t)
    end function
    
    function lerp (byref v1 as const _t_, byref w1 as const real, byref v2 as const vec4, byref s as const real, byref c as const easing.curve) as vec4
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + v2.z * t, w1 * u + v2.w * t)
    end function
    #endif
    #endmacro
    v4_l(vec3)
    #ifdef _MATH_CVEC_BI_
    v4_l(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    v4_l(svec)
    #endif
    #undef v4_l
    
    function lerp (byref v1 as const vec4, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real, byref s as const real) as vec4
        dim as real t => clamp(s), u => 1d - t
        return vec4(v1.x * u + x2 * t, v1.y * u + y2 * t, v1.z * u + z2 * t, v1.w * u + w2 * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const vec4, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real, byref s as const real, e as const easing.equation) as vec4
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec4(v1.x * u + x2 * t, v1.y * u + y2 * t, v1.z * u + z2 * t, v1.w * u + w2 * t)
    end function
    
    function lerp (byref v1 as const vec4, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real, byref s as const real, byref c as const easing.curve) as vec4
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec4(v1.x * u + x2 * t, v1.y * u + y2 * t, v1.z * u + z2 * t, v1.w * u + w2 * t)
    end function
    #endif
    
    #macro v4_l(_t_)
    function lerp (byref v1 as const vec4, byref v2 as const _t_, byref z2 as const real, byref w2 as const real, byref s as const real) as vec4
        dim as real t => clamp(s), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + z2 * t, v1.w * u + w2 * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const vec4, byref v2 as const _t_, byref z2 as const real, byref w2 as const real, byref s as const real, e as const easing.equation) as vec4
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + z2 * t, v1.w * u + w2 * t)
    end function
    
    function lerp (byref v1 as const vec4, byref v2 as const _t_, byref z2 as const real, byref w2 as const real, byref s as const real, byref c as const easing.curve) as vec4
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + z2 * t, v1.w * u + w2 * t)
    end function
    #endif
    #endmacro
    v4_l(vec2)
    #ifdef _MATH_PVEC_BI_
    v4_l(pvec)
    #endif
    #undef v4_l
    
    #macro v4_l(_t_)
    function lerp (byref v1 as const vec4, byref v2 as const _t_, byref w2 as const real, byref s as const real) as vec4
        dim as real t => clamp(s), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + v2.z * t, v1.w * u + w2 * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const vec4, byref v2 as const _t_, byref w2 as const real, byref s as const real, e as const easing.equation) as vec4
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + v2.z * t, v1.w * u + w2 * t)
    end function
    
    function lerp (byref v1 as const vec4, byref v2 as const _t_, byref w2 as const real, byref s as const real, byref c as const easing.curve) as vec4
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + v2.z * t, v1.w * u + w2 * t)
    end function
    #endif
    #endmacro
    v4_l(vec3)
    #ifdef _MATH_CVEC_BI_
    v4_l(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    v4_l(svec)
    #endif
    #undef v4_l
    
    function lerp (byref v1 as const vec4, byref v2 as const vec4, byref s as const real) as vec4
        dim as real t => clamp(s), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + v2.z * t, v1.w * u + v2.w * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const vec4, byref v2 as const vec4, byref s as const real, e as const easing.equation) as vec4
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + v2.z * t, v1.w * u + v2.w * t)
    end function
    
    function lerp (byref v1 as const vec4, byref v2 as const vec4, byref s as const real, byref c as const easing.curve) as vec4
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec4(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + v2.z * t, v1.w * u + v2.w * t)
    end function
    #endif
    
end namespace
