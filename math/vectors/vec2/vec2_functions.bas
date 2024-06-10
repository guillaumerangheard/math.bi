namespace math
    
' functions ====================================================================
    
' math.cross -------------------------------------------------------------------
    
    function cross (byref x1 as const real, byref y1 as const real, byref v2 as const vec2) as real
        return (x1 * v2.y) - (y1 * v2.x)
    end function
    
    function cross (byref v1 as const vec2, byref x2 as const real, byref y2 as const real) as real
        return (v1.x * y2) - (v1.y * x2)
    end function
    
    function cross (byref v1 as const vec2, byref v2 as const vec2) as real
        return (v1.x * v2.y) - (v1.y * v2.x)
    end function
    
' math.dot ---------------------------------------------------------------------
    
    function dot (byref x1 as const real, byref y1 as const real, byref v2 as const vec2) as real
        return x1 * v2.x + y1 * v2.y
    end function
    
    function dot (byref v1 as const vec2, byref x2 as const real, byref y2 as const real) as real
        return v1.x * x2 + v1.y * y2
    end function
    
    function dot (byref v1 as const vec2, byref v2 as const vec2) as real
        return v1.x * v2.x + v1.y * v2.y
    end function
    
    function dot (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const vec2, byref z2 as const real) as real
        return x1 * v2.x + y1 * v2.y + z1 * z2
    end function
    
    function dot (byref v1 as const vec2, byref z1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real) as real
        return v1.x * x2 + v1.y * y2 + z1 * z2
    end function
    
    function dot (byref v1 as const vec2, byref z1 as const real, byref v2 as const vec2, byref z2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + z1 * z2
    end function
    
    function dot (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref v2 as const vec2, byref z2 as const real, byref w2 as const real) as real
        return x1 * v2.x + y1 * v2.y + z1 * z2 + w1 * w2
    end function
    
    function dot (byref v1 as const vec2, byref z1 as const real, byref w1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real) as real
        return v1.x * x2 + v1.y * y2 + z1 * z2 + w1 * w2
    end function
    
    function dot (byref v1 as const vec2, byref z1 as const real, byref w1 as const real, byref v2 as const vec2, byref z2 as const real, byref w2 as const real) as real
        return v1.x * v2.x + v1.y * v2.y + z1 * z2 + w1 * w2
    end function
    
' math.eq ----------------------------------------------------------------------
    
    function eq (byref x1 as const real, byref y1 as const real, byref v2 as const vec2, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - v2.x) <= t) and (abs(y1 - v2.y) <= t), true, false)
    end function
    
    function eq (byref v1 as const vec2, byref x2 as const real, byref y2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - x2) <= t) and (abs(v1.y - y2) <= t), true, false)
    end function
    
    function eq (byref v1 as const vec2, byref v2 as const vec2, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t), true, false)
    end function
    
    function eq (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref v2 as const vec2, byref z2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - v2.x) <= t) and (abs(y1 - v2.y) <= t) and (abs(z1 - z2) <= t), true, false)
    end function
    
    function eq (byref v1 as const vec2, byref z1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - x2) <= t) and (abs(v1.y - y2) <= t) and (abs(z1 - z2) <= t), true, false)
    end function
    
    function eq (byref v1 as const vec2, byref z1 as const real, byref v2 as const vec2, byref z2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(z1 - z2) <= t), true, false)
    end function
    
    function eq (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref v2 as const vec2, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - v2.x) <= t) and (abs(y1 - v2.y) <= t) and (abs(z1 - z2) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    
    function eq (byref v1 as const vec2, byref z1 as const real, byref w1 as const real, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - x2) <= t) and (abs(v1.y - y2) <= t) and (abs(z1 - z2) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    
    function eq (byref v1 as const vec2, byref z1 as const real, byref w1 as const real, byref v2 as const vec2, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(z1 - z2) <= t) and (abs(w1 - w2) <= t), true, false)
    end function
    
' math.lerp --------------------------------------------------------------------
    
    function lerp (byref x1 as const real, byref y1 as const real, byref x2 as const real, byref y2 as const real, byref s as const real) as vec2
        dim as real t => clamp(s), u => 1.0 - t
        return vec2(x1 * u + x2 * t, y1 * u + y2 * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref x1 as const real, byref y1 as const real, byref x2 as const real, byref y2 as const real, byref s as const real, e as const easing.equation) as vec2
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1.0 - t
        return vec2(x1 * u + x2 * t, y1 * u + y2 * t)
    end function
    
    function lerp (byref x1 as const real, byref y1 as const real, byref x2 as const real, byref y2 as const real, byref s as const real, byref c as const easing.curve) as vec2
        dim as real t => c.compute(clamp(s)), u => 1.0 - t
        return vec2(x1 * u + x2 * t, y1 * u + y2 * t)
    end function
    #endif
    
    function lerp (byref x1 as const real, byref y1 as const real, byref v2 as const vec2, byref s as const real) as vec2
        dim as real t => clamp(s), u => 1.0 - t
        return vec2(x1 * u + v2.x * t, y1 * u + v2.y * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref x1 as const real, byref y1 as const real, byref v2 as const vec2, byref s as const real, e as const easing.equation) as vec2
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1.0 - t
        return vec2(x1 * u + v2.x * t, y1 * u + v2.y * t)
    end function
    
    function lerp (byref x1 as const real, byref y1 as const real, byref v2 as const vec2, byref s as const real, byref c as const easing.curve) as vec2
        dim as real t => c.compute(clamp(s)), u => 1.0 - t
        return vec2(x1 * u + v2.x * t, y1 * u + v2.y * t)
    end function
    #endif
    
    function lerp (byref v1 as const vec2, byref x2 as const real, byref y2 as const real, byref s as const real) as vec2
        dim as real t => clamp(s), u => 1.0 - t
        return vec2(v1.x * u + x2 * t, v1.y * u + y2 * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const vec2, byref x2 as const real, byref y2 as const real, byref s as const real, e as const easing.equation) as vec2
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1.0 - t
        return vec2(v1.x * u + x2 * t, v1.y * u + y2 * t)
    end function
    
    function lerp (byref v1 as const vec2, byref x2 as const real, byref y2 as const real, byref s as const real, byref c as const easing.curve) as vec2
        dim as real t => c.compute(clamp(s)), u => 1.0 - t
        return vec2(v1.x * u + x2 * t, v1.y * u + y2 * t)
    end function
    #endif
    
    function lerp (byref v1 as const vec2, byref v2 as const vec2, byref s as const real) as vec2
        dim as real t => clamp(s), u => 1.0 - t
        return vec2(v1.x * u + v2.x * t, v1.y * u + v2.y * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const vec2, byref v2 as const vec2, byref s as const real, e as const easing.equation) as vec2
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1.0 - t
        return vec2(v1.x * u + v2.x * t, v1.y * u + v2.y * t)
    end function
    
    function lerp (byref v1 as const vec2, byref v2 as const vec2, byref s as const real, byref c as const easing.curve) as vec2
        dim as real t => c.compute(clamp(s)), u => 1.0 - t
        return vec2(v1.x * u + v2.x * t, v1.y * u + v2.y * t)
    end function
    #endif
    
end namespace
