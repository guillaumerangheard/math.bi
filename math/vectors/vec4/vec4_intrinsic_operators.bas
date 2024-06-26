namespace math
    
' operators ====================================================================
    
' math.vec4.+= -----------------------------------------------------------------
    
    #macro v4_op(_o_)
    operator vec4.##_o_##= (byref v as const vec4)
        this.x _o_##= v.x
        this.y _o_##= v.y
        this.z _o_##= v.z
        this.w _o_##= v.w
    end operator
    #endmacro
    
    v4_op(+)
    
' math.vec4.-= -----------------------------------------------------------------
    
    v4_op(-)
    
' math.vec4.*= -----------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator vec4.*= (byref r as const rational)
        dim as real n => m_crl(r)
        this.x *= n
        this.y *= n
        this.z *= n
        this.w *= n
    end operator
    #endif
    
    operator vec4.*= (byref n as const real)
        this.x *= n
        this.y *= n
        this.z *= n
        this.w *= n
    end operator
    
    v4_op(*)
    
    #undef v4_op
    
' math.vec4./= -----------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator vec4./= (byref r as const rational)
        dim as real n => m_crl(r)
        if n then
            this.x /= n
            this.y /= n
            this.z /= n
            this.w /= n
        else
            this.x => 0d
            this.y => 0d
            this.z => 0d
            this.w => 0d
        end if
    end operator
    #endif
    
    operator vec4./= (byref n as const real)
        if n then
            this.x /= n
            this.y /= n
            this.z /= n
            this.w /= n
        else
            this.x => 0d
            this.y => 0d
            this.z => 0d
            this.w => 0d
        end if
    end operator
    
    operator vec4./= (byref v as const vec4)
        this.x => iif(v.x, this.x / v.x, 0d)
        this.y => iif(v.y, this.y / v.y, 0d)
        this.z => iif(v.z, this.z / v.z, 0d)
        this.w => iif(v.w, this.w / v.w, 0d)
    end operator
    
' math.vec4.cast ---------------------------------------------------------------
    
    operator vec4.cast () as string
        return "<math.vec4>{ x : " & this.x & _
                         " , y : " & this.y & _
                         " , z : " & this.z & _
                         " , w : " & this.w & " }"
    end operator
    
' math.vec4.let ----------------------------------------------------------------
    
    #macro v4_l(_t_)
    operator vec4.let (byref v as const _t_)
        this.x => v.x
        this.y => v.y
        this.z => 0d
        this.w => 0d
    end operator
    #endmacro
    v4_l(vec2)
    #ifdef _MATH_PVEC_BI_
    v4_l(pvec)
    #endif
    #undef v4_l
    
    #macro v4_l(_t_)
    operator vec4.let (byref v as const _t_)
        this.x => v.x
        this.y => v.y
        this.z => v.z
        this.w => 0d
    end operator
    #endmacro
    v4_l(vec3)
    #ifdef _MATH_CVEC_BI_
    v4_l(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    v4_l(svec)
    #endif
    #undef v4_l
    
    operator vec4.let (byref v as const vec4)
        this.x => v.x
        this.y => v.y
        this.z => v.z
        this.w => v.w
    end operator
    
end namespace
