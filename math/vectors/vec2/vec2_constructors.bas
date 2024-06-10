namespace math
    
' constructors =================================================================
    
    constructor vec2 ()
        ' Empty.
    end constructor
    
    constructor vec2 (byref n1 as const real, byref n2 as const real)
        this.x => n1
        this.y => n2
    end constructor
    
    constructor vec2 (byref v as const vec2)
        this.x => v.x
        this.y => v.y
    end constructor
    
end namespace
