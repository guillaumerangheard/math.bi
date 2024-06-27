namespace math
    
' constructors =================================================================
    
    constructor angle ()
        this.unit => defaultAngleUnit
    end constructor
    
    #ifdef _MATH_RATIONAL_BI_
    constructor angle (byref r as const rational, byref u as const angleUnit => defaultAngleUnit)
        this._v   => wrap(m_crl(r) / angles(u))
        this.unit => u
    end constructor
    #endif
    
    constructor angle (byref n as const real, byref u as const angleUnit => defaultAngleUnit)
        this._v   => wrap(n / angles(u))
        this.unit => u
    end constructor
    
    constructor angle (byref a as const angle)
        this._v   => a._v
        this.unit => a.unit
    end constructor
    
end namespace
