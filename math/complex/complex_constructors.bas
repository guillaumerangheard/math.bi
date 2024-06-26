namespace math
    
' constructors =================================================================
    
    constructor complex ()
        ' Empty.
    end constructor
    
    constructor complex (byref n1 as const real, byref n2 as const real => 0d)
        this.r => n1
        this.i => n2
    end constructor
    
    #ifdef _MATH_RATIONAL_BI_
    constructor complex (byref n1 as const real, byref n2 as const rational)
        this.r => n1
        this.i => m_crl(n2)
    end constructor
    
    constructor complex (byref n1 as const rational)
        this.r => m_crl(n1)
    end constructor
    
    constructor complex (byref n1 as const rational, byref n2 as const real)
        this.r => m_crl(n1)
        this.i => n2
    end constructor
    
    constructor complex (byref n1 as const rational, byref n2 as const rational)
        this.r => m_crl(n1)
        this.i => m_crl(n2)
    end constructor
    #endif
    
    constructor complex (byref c as const complex)
        this.r => c.r
        this.i => c.i
    end constructor
    
end namespace
