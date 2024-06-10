namespace math
    
' constructors =================================================================
    
    constructor complex ()
        ' Empty.
    end constructor
    
    constructor complex (byref n1 as const real, byref n2 as const real => 0d)
        this.r => n1
        this.i => n2
    end constructor
    
    constructor complex (byref c as const complex)
        this.r => c.r
        this.i => c.i
    end constructor
    
end namespace
