namespace math
    
' constructors =================================================================
    
    constructor vec3 ()
        ' Empty.
    end constructor
    
    constructor vec3 (byref n1 as const real, byref n2 as const real, byref n3 as const real => 0d)
        this.x => n1
        this.y => n2
        this.z => n3
    end constructor
    
    #macro v3_c(_t_)
    constructor vec3 (byref v as const _t_, byref n as const real => 0d)
        this.x => v.x
        this.y => v.y
        this.z => n
    end constructor
    #endmacro
    v3_c(vec2)
    #ifdef _MATH_PVEC_BI_
    v3_c(pvec)
    #endif
    #undef v3_c
    
    constructor vec3 (byref v as const vec3)
        this.x => v.x
        this.y => v.y
        this.z => v.z
    end constructor
    
end namespace
