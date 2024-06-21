namespace math
    
' functions ====================================================================

' math.cmp ---------------------------------------------------------------------
    
    function cmp (byref v1 as const vec2, byref v2 as const vec2, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t), true, false)
    end function
    
' math.cross -------------------------------------------------------------------
    
    ' Cf. https://stackoverflow.com/questions/243945/calculating-a-2d-vectors-cross-product
    function cross overload (byref v1 as const vec2, byref v2 as const vec2) as real
        return (v1.x * v2.y) - (v1.y * v2.x)
    end function
    
' math.dot ---------------------------------------------------------------------
    
    function dot overload (byref v1 as const vec2, byref v2 as const vec2) as real
        return v1.x * v2.x + v1.y * v2.y
    end function
    
' math.lerp --------------------------------------------------------------------
    
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
