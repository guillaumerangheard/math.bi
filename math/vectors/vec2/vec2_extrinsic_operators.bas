namespace math
    
' operators, continued =========================================================
    
' + ----------------------------------------------------------------------------
    
    #macro v2_op(_o_)
    operator _o_ (byref v1 as const vec2, byref v2 as const vec2) as vec2
        return vec2(v1.x _o_ v2.x, v1.y _o_ v2.y)
    end operator
    #endmacro
    
    v2_op(+)
    
' - ----------------------------------------------------------------------------
    
    operator - (byref v as const vec2) as vec2
        return vec2(-v.x, -v.y)
    end operator
    
    v2_op(-)
    
' * ----------------------------------------------------------------------------
    
    operator * (byref v as const vec2, byref n as const real) as vec2
        return vec2(v.x * n, v.y * n)
    end operator
    
    operator * (byref n as const real, byref v as const vec2) as vec2
        return vec2(n * v.x, n * v.y)
    end operator
    
    v2_op(*)
    
    #undef v2_op
    
' / ----------------------------------------------------------------------------
    
    operator / (byref v as const vec2, byref n as const real) as vec2
        return iif(n, vec2(v.x / n, v.y / n), vec2())
    end operator
    
    operator / (byref v1 as const vec2, byref v2 as const vec2) as vec2
        return vec2(iif(v2.x, v1.x / v2.x, 0d), iif(v2.y, v1.y / v2.y, 0d))
    end operator
    
' = ----------------------------------------------------------------------------
    
    operator = (byref v1 as const vec2, byref v2 as const vec2) as boolean
        return iif((v1.x = v2.x) and (v1.y = v2.y), true, false)
    end operator
    
' <> ---------------------------------------------------------------------------
    
    operator <> (byref v1 as const vec2, byref v2 as const vec2) as boolean
        return iif((v1.x <> v2.x) or (v1.y <> v2.y), true, false)
    end operator
    
end namespace
