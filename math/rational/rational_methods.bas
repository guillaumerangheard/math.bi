namespace math
    
' methods ======================================================================
    
' math.rational.reduce ---------------------------------------------------------
    
    ' Reduces r.
    sub rational.reduce ()
        dim as longint i => gcd(this._n, this._d)
        if 1ll < i then
            this._n /= i
            this._d /= i
        end if
    end sub
    
' math.rational.toJSON ---------------------------------------------------------
    
    ' Serializes r, either as an object (if a = false) or as an array.
    function rational.toJSON (byref a as const boolean => false) as string
        return iif(a, "["       & this._n &  ","       & this._d & "]", _
                     !"{\"n\":" & this._n & !",\"d\":" & this._d & "}")
    end function
    
end namespace
