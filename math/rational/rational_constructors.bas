namespace math
    
' constructors =================================================================
    
    constructor rational ()
        this._d => 1ll
    end constructor
    
    constructor rational (byref n1 as const longint, byref n2 as const longint => 1ll)
        if n2 then
            this._n => n1
            this._d => n2
        else
            #ifdef MATH_VERBOSE
            print "<math.rational.constructor> Denominator must be non-null."
            #endif
            this._d => 1ll
        end if
    end constructor
    
    constructor rational (byref r as const rational)
        this._n => r._n
        this._d => r._d
    end constructor
    
end namespace
