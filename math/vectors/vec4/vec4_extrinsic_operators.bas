namespace math
    
' operators, continued =========================================================
    
' + ----------------------------------------------------------------------------
    
    #macro v4_op(_o_)
    operator _o_ (byref v1 as const vec4, byref v2 as const vec4) as vec4
        return vec4(v1.x _o_ v2.x, _
                    v1.y _o_ v2.y, _
                    v1.z _o_ v2.z, _
                    v1.w _o_ v2.w)
    end operator
    #endmacro
    
    v4_op(+)
    
' - ----------------------------------------------------------------------------
    
    v4_op(-)
    
' * ----------------------------------------------------------------------------
    
    operator * (byref v as const vec4, byref n as const real) as vec4
        return vec4(v.x * n, _
                    v.y * n, _
                    v.z * n, _
                    v.w * n)
    end operator
    
    operator * (byref n as const real, byref v as const vec4) as vec4
        return vec4(n * v.x, _
                    n * v.y, _
                    n * v.z, _
                    n * v.w)
    end operator
    
    v4_op(*)
    
    #undef v4_op
    
' / ----------------------------------------------------------------------------
    
    operator / (byref v as const vec4, byref n as const real) as vec4
        return iif(n, vec4(v.x / n, v.y / n, v.z / n, v.w / n), vec4())
    end operator
    
    operator / (byref v1 as const vec4, byref v2 as const vec4) as vec4
        return vec4(iif(v2.x, v1.x / v2.x, 0d), _
                    iif(v2.y, v1.y / v2.y, 0d), _
                    iif(v2.z, v1.z / v2.z, 0d), _
                    iif(v2.w, v1.w / v2.w, 0d))
    end operator
    
' = ----------------------------------------------------------------------------
    
    operator = (byref v1 as const vec4, byref v2 as const vec4) as boolean
        return iif((v1.x = v2.x) and _
                   (v1.y = v2.y) and _
                   (v1.z = v2.z) and _
                   (v1.w = v2.w), true, false)
    end operator
    
' <> ---------------------------------------------------------------------------
    
    operator <> (byref v1 as const vec4, byref v2 as const vec4) as boolean
        return iif((v1.x <> v2.x) or _
                   (v1.y <> v2.y) or _
                   (v1.z <> v2.z) or _
                   (v1.w <> v2.w), true, false)
    end operator
    
end namespace
