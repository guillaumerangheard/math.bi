namespace math
    
' constructors =================================================================
    
    constructor vec2 ()
        ' Empty.
    end constructor
    
    #ifdef _MATH_RATIONAL_BI_
    constructor vec2 (byref n1 as const rational, byref n2 as const rational)
        this.x => m_crl(n1)
        this.y => m_crl(n2)
    end constructor
    
    constructor vec2 (byref n1 as const rational, byref n2 as const real)
        this.x => m_crl(n1)
        this.y => n2
    end constructor
    
    constructor vec2 (byref n1 as const real, byref n2 as const rational)
        this.x => n1
        this.y => m_crl(n2)
    end constructor
    #endif
    
    constructor vec2 (byref n1 as const real, byref n2 as const real)
        this.x => n1
        this.y => n2
    end constructor
    
    constructor vec2 (byref v as const vec2)
        this.x => v.x
        this.y => v.y
    end constructor
    
end namespace
