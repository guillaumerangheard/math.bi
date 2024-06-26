namespace math
    
' constructors =================================================================
    
    constructor vec4 ()
        ' Empty.
    end constructor
    
    #ifdef _MATH_RATIONAL_BI_
    constructor vec4 (byref r1 as const rational, byref r2 as const rational, byref r3 as const rational, byref r4 as const rational)
        this.x => m_crl(r1)
        this.y => m_crl(r2)
        this.z => m_crl(r3)
        this.w => m_crl(r4)
    end constructor
    
    constructor vec4 (byref r1 as const rational, byref r2 as const rational, byref r3 as const rational, byref n4 as const real => 0d)
        this.x => m_crl(r1)
        this.y => m_crl(r2)
        this.z => m_crl(r3)
        this.w => n4
    end constructor
    
    constructor vec4 (byref r1 as const rational, byref r2 as const rational, byref n3 as const real, byref r4 as const rational)
        this.x => m_crl(r1)
        this.y => m_crl(r2)
        this.z => n3
        this.w => m_crl(r4)
    end constructor
    
    constructor vec4 (byref r1 as const rational, byref r2 as const rational, byref n3 as const real, byref n4 as const real => 0d)
        this.x => m_crl(r1)
        this.y => m_crl(r2)
        this.z => n3
        this.w => n4
    end constructor
    
    constructor vec4 (byref r1 as const rational, byref n2 as const real, byref r3 as const rational, byref r4 as const rational)
        this.x => m_crl(r1)
        this.y => n2
        this.z => m_crl(r3)
        this.w => m_crl(r4)
    end constructor
    
    constructor vec4 (byref r1 as const rational, byref n2 as const real, byref r3 as const rational, byref n4 as const real => 0d)
        this.x => m_crl(r1)
        this.y => n2
        this.z => m_crl(r3)
        this.w => n4
    end constructor
    
    constructor vec4 (byref r1 as const rational, byref n2 as const real, byref n3 as const real, byref r4 as const rational)
        this.x => m_crl(r1)
        this.y => n2
        this.z => n3
        this.w => m_crl(r4)
    end constructor
    
    constructor vec4 (byref r1 as const rational, byref n2 as const real, byref n3 as const real, byref n4 as const real => 0d)
        this.x => m_crl(r1)
        this.y => n2
        this.z => n3
        this.w => n4
    end constructor
    
    constructor vec4 (byref n1 as const real, byref r2 as const rational, byref r3 as const rational, byref r4 as const rational)
        this.x => n1
        this.y => m_crl(r2)
        this.z => m_crl(r3)
        this.w => m_crl(r4)
    end constructor
    
    constructor vec4 (byref n1 as const real, byref r2 as const rational, byref r3 as const rational, byref n4 as const real => 0d)
        this.x => n1
        this.y => m_crl(r2)
        this.z => m_crl(r3)
        this.w => n4
    end constructor
    
    constructor vec4 (byref n1 as const real, byref r2 as const rational, byref n3 as const real, byref r4 as const rational)
        this.x => n1
        this.y => m_crl(r2)
        this.z => n3
        this.w => m_crl(r4)
    end constructor
    
    constructor vec4 (byref n1 as const real, byref r2 as const rational, byref n3 as const real, byref n4 as const real => 0d)
        this.x => n1
        this.y => m_crl(r2)
        this.z => n3
        this.w => n4
    end constructor
    
    constructor vec4 (byref n1 as const real, byref n2 as const real, byref r3 as const rational, byref r4 as const rational)
        this.x => n1
        this.y => n2
        this.z => m_crl(r3)
        this.w => m_crl(r4)
    end constructor
    
    constructor vec4 (byref n1 as const real, byref n2 as const real, byref r3 as const rational, byref n4 as const real => 0d)
        this.x => n1
        this.y => n2
        this.z => m_crl(r3)
        this.w => n4
    end constructor
    
    constructor vec4 (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref r4 as const rational)
        this.x => n1
        this.y => n2
        this.z => n3
        this.w => m_crl(r4)
    end constructor
    #endif
    
    constructor vec4 (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref n4 as const real => 0d)
        this.x => n1
        this.y => n2
        this.z => n3
        this.w => n4
    end constructor
    
    #macro v4_c(_t_)
    #ifdef _MATH_RATIONAL_BI_
    constructor vec4 (byref v as const _t_, byref r1 as const rational, byref r2 as const rational)
        this.x => v.x
        this.y => v.y
        this.z => m_crl(r1)
        this.w => m_crl(r2)
    end constructor
    
    constructor vec4 (byref v as const _t_, byref r1 as const rational, byref n2 as const real => 0d)
        this.x => v.x
        this.y => v.y
        this.z => m_crl(r1)
        this.w => n2
    end constructor
    
    constructor vec4 (byref v as const _t_, byref n1 as const real, byref r2 as const rational)
        this.x => v.x
        this.y => v.y
        this.z => n1
        this.w => m_crl(r2)
    end constructor
    #endif
    
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
    #ifdef _MATH_RATIONAL_BI_
    constructor vec4 (byref v as const _t_, byref r as const rational)
        this.x => v.x
        this.y => v.y
        this.z => v.z
        this.w => m_crl(r)
    end constructor
    #endif
    
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
