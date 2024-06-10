namespace math
    
' functions  ===================================================================
    
' math.cross -------------------------------------------------------------------
    
    function cross (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real) as vec3
        return vec3(y1 * z2 - z1 * y2, _
                    z1 * x2 - x1 * z2, _
                    x1 * y2 - y1 * x2)
    end function
    
    function cross (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const vec2, byref z2 as const real) as vec3
        return vec3(y1 * z2 - z1 * v2.y, z1 * v2.x - x1 * z2, x1 * v2.y - y1 * v2.x)
    end function
    
    #ifdef _MATH_PVEC_BI_
    function cross (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const pvec, byref z2 as const real) as vec3
        dim as real x2 => v2.x, y2 => v2.y
        return vec3(y1 * z2 - z1 * y2, _
                    z1 * x2 - x1 * z2, _
                    x1 * y2 - y1 * x2)
    end function
    #endif
    
    function cross (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const vec3) as vec3
        return vec3(y1 * v2.z - z1 * v2.y, _
                    z1 * v2.x - x1 * v2.z, _
                    x1 * v2.y - y1 * v2.x)
    end function
    
    function cross (byref v1 as const vec2, byref z1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real) as vec3
        return vec3(v1.y * z2 - z1 * y2, z1 * x2 - v1.x * z2, v1.x * y2 - v1.y * x2)
    end function
    
    function cross (byref v1 as const vec2, byref z1 as const real, byref v2 as const vec2, byref z2 as const real) as vec3
        return vec3(v1.y * z2 - z1 * v2.y, z1 * v2.x - v1.x * z2, v1.x * v2.y - v1.y * v2.x)
    end function
    
    #ifdef _MATH_PVEC_BI_
    function cross (byref v1 as const vec2, byref z1 as const real, byref v2 as const pvec, byref z2 as const real) as vec3
        dim as real x2 => v2.x, y2 => v2.y
        return vec3(v1.y * z2 - z1 * v2.y, z1 * v2.x - v1.x * z2, v1.x * v2.y - v1.y * v2.x)
    end function
    #endif
    
    function cross (byref v1 as const vec2, byref z1 as const real, byref v2 as const vec3) as vec3
        return vec3(v1.y * v2.z - z1 * v2.y, z1 * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x)
    end function
    
    #ifdef _MATH_PVEC_BI_
    function cross (byref v1 as const pvec, byref z1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real) as vec3
        dim as real x1 => v1.x, y1 => v1.y
        return vec3(y1 * z2 - z1 * y2, z1 * x2 - x1 * z2, x1 * y2 - y1 * x2)
    end function
    
    function cross (byref v1 as const pvec, byref z1 as const real, byref v2 as const vec2, byref z2 as const real) as vec3
        dim as real x1 => v1.x, y1 => v1.y
        return vec3(y1 * z2 - z1 * v2.y, z1 * v2.x - x1 * z2, x1 * v2.y - y1 * v2.x)
    end function
    
    function cross (byref v1 as const pvec, byref z1 as const real, byref v2 as const pvec, byref z2 as const real) as vec3
        dim as real x1 => v1.x, y1 => v1.y, x2 => v2.x, y2 => v2.y
        return vec3(y1 * z2 - z1 * y2, z1 * x2 - x1 * z2, x1 * y2 - y1 * x2)
    end function
    
    function cross (byref v1 as const pvec, byref z1 as const real, byref v2 as const vec3) as vec3
        dim as real x1 => v1.x, y1 => v1.y
        return vec3(y1 * v2.z - z1 * v2.y, z1 * v2.x - x1 * v2.z, x1 * v2.y - y1 * v2.x)
    end function
    #endif
    
    function cross (byref v1 as const vec3, byref x2 as const real, byref y2 as const real, byref z2 as const real) as vec3
        return vec3(v1.y * z2 - v1.z * y2, v1.z * x2 - v1.x * z2, v1.x * y2 - v1.y * x2)
    end function
    
    function cross (byref v1 as const vec3, byref v2 as const vec2, byref z2 as const real) as vec3
        return vec3(v1.y * z2 - v1.z * v2.y, v1.z * v2.x - v1.x * z2, v1.x * v2.y - v1.y * v2.x)
    end function
    
    #ifdef _MATH_PVEC_BI_
    function cross (byref v1 as const vec3, byref v2 as const pvec, byref z2 as const real) as vec3
        dim as real x2 => v2.x, y2 => v2.y
        return vec3(v1.y * z2 - v1.z * v2.y, v1.z * v2.x - v1.x * z2, v1.x * v2.y - v1.y * v2.x)
    end function
    #endif
    
    function cross (byref v1 as const vec3, byref v2 as const vec3) as vec3
        return vec3(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x)
    end function
    
' math.dot ---------------------------------------------------------------------
    
    function dot (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const vec3) as real
        return x1 * v2.x + y1 * v2.y + z1 * v2.z
    end function
    
    function dot (byref v1 as const vec2, byref z1 as const real, byref v2 as const vec3) as real
        return v1.x * v2.x + v1.y * v2.y + z1 * v2.z
    end function
    
    #ifdef _MATH_PVEC_BI_
    function dot (byref v1 as const pvec, byref z1 as const real, byref v2 as const vec3) as real
        return v1.x * v2.x + v1.y * v2.y + z1 * v2.z
    end function
    #endif
    
    function dot (byref v1 as const vec3, byref x2 as const real, byref y2 as const real, byref z2 as const real) as real
        return v1.x * x2 + v1.y * y2 + v1.z * z2
    end function
    
    function dot (byref v1 as const vec3, byref v2 as const vec2, byref z2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + v1.z * z2
    end function
    
    #ifdef _MATH_PVEC_BI_
    function dot (byref v1 as const vec3, byref v2 as const pvec, byref z2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + v1.z * z2
    end function
    #endif
    
    function dot (byref v1 as const vec3, byref v2 as const vec3) as real
        return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z
    end function
    
    function dot (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref v2 as const vec3, byref w2 as const real) as real
        return x1 * v2.x + y1 * v2.y + z1 * v2.z + w1 * w2
    end function
    
    function dot (byref v1 as const vec2, byref z1 as const real, byref w1 as const real, byref v2 as const vec3, byref w2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + z1 * v2.z + w1 * w2
    end function
    
    #ifdef _MATH_PVEC_BI_
    function dot (byref v1 as const pvec, byref z1 as const real, byref w1 as const real, byref v2 as const vec3, byref w2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + z1 * v2.z + w1 * w2
    end function
    #endif
    
    function dot (byref v1 as const vec3, byref w1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real) as real
        return v1.x * x2 + v1.y * y2 + v1.z * z2 + w1 * w2
    end function
    
    function dot (byref v1 as const vec3, byref w1 as const real, byref v2 as const vec2, byref z2 as const real, byref w2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + v1.z * z2 + w1 * w2
    end function
    
    #ifdef _MATH_PVEC_BI_
    function dot (byref v1 as const vec3, byref w1 as const real, byref v2 as const pvec, byref z2 as const real, byref w2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + v1.z * z2 + w1 * w2
    end function
    #endif
    
    function dot (byref v1 as const vec3, byref w1 as const real, byref v2 as const vec3, byref w2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + w1 * w2
    end function
    
' math.eq ----------------------------------------------------------------------
    
    function eq (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const vec3, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - v2.x) <= t) and (abs(y1 - v2.y) <= t) and (abs(z1 - v2.z) <= t), true, false)
    end function
    
    function eq (byref v1 as const vec2, byref z1 as const real, byref v2 as const vec3, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(z1 - v2.z) <= t), true, false)
    end function
    
    #ifdef _MATH_PVEC_BI_
    function eq (byref v1 as const pvec, byref z1 as const real, byref v2 as const vec3, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(z1 - v2.z) <= t), true, false)
    end function
    #endif
    
    function eq (byref v1 as const vec3, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - x2) <= t) and (abs(v1.y - y2) <= t) and (abs(v1.z - z2) <= t), true, false)
    end function
    
    function eq (byref v1 as const vec3, byref v2 as const vec2, byref z2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(v1.z - z2) <= t), true, false)
    end function
    
    #ifdef _MATH_PVEC_BI_
    function eq (byref v1 as const vec3, byref v2 as const pvec, byref z2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(v1.z - z2) <= t), true, false)
    end function
    #endif
    
    function eq (byref v1 as const vec3, byref v2 as const vec3, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(v1.z - v2.z) <= t), true, false)
    end function
    
    function eq (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref v2 as const vec3, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - v2.x) <= t) and (abs(y1 - v2.y) <= t) and (abs(z1 - v2.z) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    
    function eq (byref v1 as const vec2, byref z1 as const real, byref w1 as const real, byref v2 as const vec3, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(z1 - v2.z) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    
    #ifdef _MATH_PVEC_BI_
    function eq (byref v1 as const pvec, byref z1 as const real, byref w1 as const real, byref v2 as const vec3, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(z1 - v2.z) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    #endif
    
    function eq (byref v1 as const vec3, byref w1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - x2) <= t) and (abs(v1.y - y2) <= t) and (abs(v1.z - z2) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    
    function eq (byref v1 as const vec3, byref w1 as const real, byref v2 as const vec2, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(v1.z - z2) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    
    #ifdef _MATH_PVEC_BI_
    function eq (byref v1 as const vec3, byref w1 as const real, byref v2 as const pvec, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(v1.z - z2) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    #endif
    
    function eq (byref v1 as const vec3, byref w1 as const real, byref v2 as const vec3, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(v1.z - v2.z) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    
' math.lerp --------------------------------------------------------------------
    
    function lerp (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref s as const real) as vec3
        dim as real t => clamp(s), u => 1d - t
        return vec3(x1 * u + x2 * t, y1 * u + y2 * t, z1 * u + z2 * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref s as const real, e as const easing.equation) as vec3
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec3(x1 * u + x2 * t, y1 * u + y2 * t, z1 * u + z2 * t)
    end function
    
    function lerp (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref s as const real, byref c as const easing.curve) as vec3
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec3(x1 * u + x2 * t, y1 * u + y2 * t, z1 * u + z2 * t)
    end function
    #endif
    
    #macro v3_l(_t_)
    function lerp (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const _t_, byref z2 as const real, byref s as const real) as vec3
        dim as real t => clamp(s), u => 1d - t
        return vec3(x1 * u + v2.x * t, y1 * u + v2.y * t, z1 * u + z2 * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const _t_, byref z2 as const real, byref s as const real, e as const easing.equation) as vec3
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec3(x1 * u + v2.x * t, y1 * u + v2.y * t, z1 * u + z2 * t)
    end function
    
    function lerp (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const _t_, byref z2 as const real, byref s as const real, byref c as const easing.curve) as vec3
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec3(x1 * u + v2.x * t, y1 * u + v2.y * t, z1 * u + z2 * t)
    end function
    #endif
    #endmacro
    v3_l(vec2)
    #ifdef _MATH_PVEC_BI_
    v3_l(pvec)
    #endif
    #undef v3_l
    
    function lerp (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const vec3, byref s as const real) as vec3
        dim as real t => clamp(s), u => 1d - t
        return vec3(x1 * u + v2.x * t, y1 * u + v2.y * t, z1 * u + v2.z * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const vec3, byref s as const real, e as const easing.equation) as vec3
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec3(x1 * u + v2.x * t, y1 * u + v2.y * t, z1 * u + v2.z * t)
    end function
    
    function lerp (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const vec3, byref s as const real, byref c as const easing.curve) as vec3
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec3(x1 * u + v2.x * t, y1 * u + v2.y * t, z1 * u + v2.z * t)
    end function
    #endif
    
    function lerp (byref v1 as const vec3, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref s as const real) as vec3
        dim as real t => clamp(s), u => 1d - t
        return vec3(v1.x * u + x2 * t, v1.y * u + y2 * t, v1.z * u + z2 * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const vec3, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref s as const real, e as const easing.equation) as vec3
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec3(v1.x * u + x2 * t, v1.y * u + y2 * t, v1.z * u + z2 * t)
    end function
    
    function lerp (byref v1 as const vec3, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref s as const real, byref c as const easing.curve) as vec3
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec3(v1.x * u + x2 * t, v1.y * u + y2 * t, v1.z * u + z2 * t)
    end function
    #endif
    
    #macro v3_l(_t_)
    function lerp (byref v1 as const vec3, byref v2 as const _t_, byref z2 as const real, byref s as const real) as vec3
        dim as real t => clamp(s), u => 1d - t
        return vec3(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + z2 * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const vec3, byref v2 as const _t_, byref z2 as const real, byref s as const real, e as const easing.equation) as vec3
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec3(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + z2 * t)
    end function
    
    function lerp (byref v1 as const vec3, byref v2 as const _t_, byref z2 as const real, byref s as const real, byref c as const easing.curve) as vec3
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec3(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + z2 * t)
    end function
    #endif
    #endmacro
    v3_l(vec2)
    #ifdef _MATH_PVEC_BI_
    v3_l(pvec)
    #endif
    #undef v3_l
    
    function lerp (byref v1 as const vec3, byref v2 as const vec3, byref s as const real) as vec3
        dim as real t => clamp(s), u => 1d - t
        return vec3(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + v2.z * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const vec3, byref v2 as const vec3, byref s as const real, e as const easing.equation) as vec3
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec3(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + v2.z * t)
    end function
    
    function lerp (byref v1 as const vec3, byref v2 as const vec3, byref s as const real, byref c as const easing.curve) as vec3
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec3(v1.x * u + v2.x * t, v1.y * u + v2.y * t, v1.z * u + v2.z * t)
    end function
    #endif
    
end namespace
