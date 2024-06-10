namespace math
    
' constructors =================================================================
    
    ' Defaults to unit quaternion.
    constructor quaternion ()
        this.w => 1d
    end constructor
    
    constructor quaternion (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref n4 as const real)
        this.x => n1
        this.y => n2
        this.z => n3
        this.w => n4
    end constructor
    
    #macro q_c(_t_)
    constructor quaternion (byref v as const _t_, byref n1 as const real, byref n2 as const real)
        this.x => v.x
        this.y => v.y
        this.z => n1
        this.w => n2
    end constructor
    #endmacro
    q_c(vec2)
    #ifdef _MATH_PVEC_BI_
    q_c(pvec)
    #endif
    #undef q_c
    
    #macro q_c(_t_)
    constructor quaternion (byref v as const _t_, byref n as const real)
        this.x => v.x
        this.y => v.y
        this.z => v.z
        this.w => n
    end constructor
    #endmacro
    q_c(vec3)
    #ifdef _MATH_CVEC_BI_
    q_c(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    q_c(svec)
    #endif
    #undef q_c
    
    #macro q_c(_t_)
    constructor quaternion (byref v as const _t_)
        this.x => v.x
        this.y => v.y
        this.z => v.z
        this.w => v.w
    end constructor
    #endmacro
    q_c(vec4)
    q_c(quaternion)
    #undef q_c
    
end namespace
