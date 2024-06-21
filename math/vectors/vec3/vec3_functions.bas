namespace math
    
' functions  ===================================================================
    
' math.cmp ---------------------------------------------------------------------
    
    function cmp (byref v1 as const vec3, byref v2 as const vec3, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - v2.x) <= t) and (abs(v1.y - v2.y) <= t) and (abs(v1.z - v2.z) <= t), true, false)
    end function
    
' math.cross -------------------------------------------------------------------
    
    function cross (byref v1 as const vec3, byref v2 as const vec3) as vec3
        return vec3(v1.y * v2.z - v1.z * v2.y, _
                    v1.z * v2.x - v1.x * v2.z, _
                    v1.x * v2.y - v1.y * v2.x)
    end function
    
' math.dot ---------------------------------------------------------------------
    
    function dot (byref v1 as const vec3, byref v2 as const vec3) as real
        return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z
    end function
    
' math.lerp --------------------------------------------------------------------
    
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
