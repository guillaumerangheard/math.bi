namespace math
    
' operators ====================================================================
    
' math.vec2.+= -----------------------------------------------------------------
    
    #macro v2_op(_o_)
    operator vec2.##_o_##= (byref v as const vec2)
        this.x _o_##= v.x
        this.y _o_##= v.y
    end operator
    #endmacro
    
    v2_op(+)
    
' math.vec2.-= -----------------------------------------------------------------
    
    v2_op(-)
    
' math.vec2.*= -----------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator vec2.*= (byref r as const rational)
        dim as real n => m_crl(r)
        this.x *= n
        this.y *= n
    end operator
    #endif
    
    operator vec2.*= (byref n as const real)
        this.x *= n
        this.y *= n
    end operator
    
    v2_op(*)
    
    #undef v2_op
    
' math.vec2./= -----------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator vec2./= (byref r as const rational)
        dim as real n => m_crl(r)
        if n then
            this.x /= n
            this.y /= n
        else
            this.x => 0d
            this.y => 0d
        end if
    end operator
    #endif
    
    operator vec2./= (byref n as const real)
        if n then
            this.x /= n
            this.y /= n
        else
            this.x => 0.0
            this.y => 0.0
        end if
    end operator
    
    operator vec2./= (byref v as const vec2)
        this.x => iif(v.x, this.x / v.x, 0.0)
        this.y => iif(v.y, this.y / v.y, 0.0)
    end operator
    
' math.vec2.cast ---------------------------------------------------------------
    
    operator vec2.cast () as string
        return "<math.vec2>{ x : " & this.x & " , y : " & this.y & " }"
    end operator
    
' math.vec2.let ----------------------------------------------------------------
    
    operator vec2.let (byref v as const vec2)
        this.x => v.x
        this.y => v.y
    end operator
    
end namespace
