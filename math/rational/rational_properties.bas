namespace math
    
' properties ===================================================================
    
' math.rational.d --------------------------------------------------------------
    
    property rational.d () as longint
        return this._d
    end property
    
    property rational.d (byref i as const longint)
        if i then
            this._d => i
        #ifdef MATH_VERBOSE
        else
            print "<math.rational.denominator> Denominator must be non-null."
        #endif
        end if
    end property
    
' math.rational.n --------------------------------------------------------------
    
    property rational.n () as longint
        return this._n
    end property
    
    property rational.n (byref i as const longint)
        this._n => i
    end property
    
' math.rational.opposite -------------------------------------------------------
    
    property rational.opposite () as rational
        return rational(-this._n, this._d)
    end property
    
' math.rational.reciprocal -----------------------------------------------------
    
    property rational.reciprocal () as rational
        return iif(this._n, rational(this._d, this._n), rational())
    end property
    
end namespace
