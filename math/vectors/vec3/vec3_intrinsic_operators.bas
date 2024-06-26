namespace math
    
' operators ====================================================================
    
' math.vec3.+= -----------------------------------------------------------------
    
    #macro v3_op(_o_)
    operator vec3.##_o_##= (byref v as const vec3)
        this.x _o_##= v.x
        this.y _o_##= v.y
        this.z _o_##= v.z
    end operator
    #endmacro
    
    v3_op(+)
    
' math.vec3.-= -----------------------------------------------------------------
    
    v3_op(-)
    
' math.vec3.*= -----------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator vec3.*= (byref r as const rational)
        dim as real n => m_crl(r)
        this.x *= n
        this.y *= n
        this.z *= n
    end operator
    #endif
    
    operator vec3.*= (byref n as const real)
        this.x *= n
        this.y *= n
        this.z *= n
    end operator
    
    v3_op(*)
    
    #undef v3_op
    
' math.vec3./= -----------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator vec3./= (byref r as const rational)
        dim as real n => m_crl(r)
        if n then
            this.x /= n
            this.y /= n
            this.z /= n
        else
            this.x => 0d
            this.y => 0d
            this.z => 0d
        end if
    end operator
    #endif
    
    operator vec3./= (byref n as const real)
        if n then
            this.x /= n
            this.y /= n
            this.z /= n
        else
            this.x => 0d
            this.y => 0d
            this.z => 0d
        end if
    end operator
    
    operator vec3./= (byref v as const vec3)
        this.x => iif(v.x, this.x / v.x, 0d)
        this.y => iif(v.y, this.y / v.y, 0d)
        this.z => iif(v.z, this.z / v.z, 0d)
    end operator
    
' math.vec3.cast ---------------------------------------------------------------
    
    operator vec3.cast () as string
        return "<math.vec3>{ x : " & this.x & _
                         " , y : " & this.y & _
                         " , z : " & this.z & " }"
    end operator
    
' math.vec3.let ----------------------------------------------------------------
    
    #macro v3_l(_t_)
    operator vec3.let (byref v as const _t_)
        this.x => v.x
        this.y => v.y
        this.z => 0d
    end operator
    #endmacro
    v3_l(vec2)
    #ifdef _MATH_PVEC_BI_
    v3_l(pvec)
    #endif
    #undef v3_l
    
    operator vec3.let (byref v as const vec3)
        this.x => v.x
        this.y => v.y
        this.z => v.z
    end operator
    
end namespace
