namespace math
    
' functions ====================================================================
    
' math.eq ----------------------------------------------------------------------
    
    function cmp (byref v1 as const vec4, byref v2 as const vec4, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and _
                   (abs(v1.y - v2.y) <= t) and _
                   (abs(v1.z - v2.z) <= t) and _
                   (abs(v1.w - v2.w) <= t), true, false)
    end function
    
' math.dot ---------------------------------------------------------------------
    
    function dot (byref v1 as const vec4, byref v2 as const vec4) as real
        return v1.x * v2.x + _
               v1.y * v2.y + _
               v1.z * v2.z + _
               v1.w * v2.w
    end function
        
' math.lerp --------------------------------------------------------------------
    
    function lerp (byref v1 as const vec4, byref v2 as const vec4, byref s as const real) as vec4
        dim as real t => clamp(s), u => 1d - t
        return vec4(v1.x * u + v2.x * t, _
                    v1.y * u + v2.y * t, _
                    v1.z * u + v2.z * t, _
                    v1.w * u + v2.w * t)
    end function
    
    #ifdef _EASING_BI_
    function lerp (byref v1 as const vec4, byref v2 as const vec4, byref s as const real, e as const easing.equation) as vec4
        dim as real t => iif(e, e(clamp(s)), clamp(s)), u => 1d - t
        return vec4(v1.x * u + v2.x * t, _
                    v1.y * u + v2.y * t, _
                    v1.z * u + v2.z * t, _
                    v1.w * u + v2.w * t)
    end function
    
    function lerp (byref v1 as const vec4, byref v2 as const vec4, byref s as const real, byref c as const easing.curve) as vec4
        dim as real t => c.compute(clamp(s)), u => 1d - t
        return vec4(v1.x * u + v2.x * t, _
                    v1.y * u + v2.y * t, _
                    v1.z * u + v2.z * t, _
                    v1.w * u + v2.w * t)
    end function
    #endif
    
end namespace
