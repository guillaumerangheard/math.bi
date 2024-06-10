namespace math
    
' operators, continued =========================================================
    
' + ----------------------------------------------------------------------------
    
    #macro v3_op(_o_)
    operator _o_ (byref v1 as const vec3, byref v2 as const vec3) as vec3
        return vec3(v1.x _o_ v2.x, v1.y _o_ v2.y, v1.z _o_ v2.z)
    end operator
    #endmacro
    
    v3_op(+)
    
' - ----------------------------------------------------------------------------
    
    operator - (byref v as const vec3) as vec3
        return vec3(-v.x, -v.y, -v.z)
    end operator
    
    v3_op(-)
    
' * ----------------------------------------------------------------------------
    
    operator * (byref v as const vec3, byref n as const real) as vec3
        return vec3(v.x * n, v.y * n, v.z * n)
    end operator
    
    operator * (byref n as const real, byref v as const vec3) as vec3
        return vec3(n * v.x, n * v.y, n * v.z)
    end operator
    
    v3_op(*)
    
    #undef v3_op
    
' / ----------------------------------------------------------------------------
    
    operator / (byref v as const vec3, byref n as const real) as vec3
        return iif(n, vec3(v.x / n, v.y / n, v.z / n), vec3())
    end operator
    
    operator / (byref v1 as const vec3, byref v2 as const vec3) as vec3
        return vec3(iif(v2.x, v1.x / v2.x, 0d), _
                    iif(v2.y, v1.y / v2.y, 0d), _
                    iif(v2.z, v1.z / v2.z, 0d))
    end operator
    
' = ----------------------------------------------------------------------------
    
    operator = (byref v1 as const vec3, byref v2 as const vec3) as boolean
        return iif((v1.x = v2.x) and (v1.y = v2.y) and (v1.z = v2.z), true, false)
    end operator
    
' <> ---------------------------------------------------------------------------
    
    operator <> (byref v1 as const vec3, byref v2 as const vec3) as boolean
        return iif((v1.x <> v2.x) or (v1.y <> v2.y) or (v1.z <> v2.z), true, false)
    end operator
    
end namespace
