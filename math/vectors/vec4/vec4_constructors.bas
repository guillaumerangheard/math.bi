namespace math
    
' constructors =================================================================
    
    constructor vec4 ()
        ' Empty.
    end constructor
    
    constructor vec4 (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref n4 as const real => 0d)
        this.x => n1
        this.y => n2
        this.z => n3
        this.w => n4
    end constructor
    
    #macro v4_c(_t_)
    constructor vec4 (byref v as const _t_, byref n1 as const real, byref n2 as const real => 0d)
        this.x => v.x
        this.y => v.y
        this.z => n1
        this.w => n2
    end constructor
    #endmacro
    v4_c(vec2)
    #ifdef _MATH_PVEC_BI_
    v4_c(pvec)
    #endif
    #undef v4_c
    
    #macro v4_c(_t_)
    constructor vec4 (byref v as const _t_, byref n as const real => 0d)
        this.x => v.x
        this.y => v.y
        this.z => v.z
        this.w => n
    end constructor
    #endmacro
    v4_c(vec3)
    #ifdef _MATH_CVEC_BI_
    v4_c(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    v4_c(svec)
    #endif
    #undef v4_c
    
    constructor vec4 (byref v as const vec4)
        this.x => v.x
        this.y => v.y
        this.z => v.z
        this.w => v.w
    end constructor
    
end namespace
