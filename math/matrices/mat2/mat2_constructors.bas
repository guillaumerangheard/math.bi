namespace math
    
' constructors =================================================================
    
    ' 0 1
    ' 2 3
    
    ' Defaults to identity.
    constructor mat2 ()
        this._p => new real[4%]
        this._p[0%] => 1d
        this._p[3%] => 1d
    end constructor
    
    constructor mat2 (byref m as const mat2)
        this._p => new real[4%]
        this._p[0%] => m._p[0%] : this._p[1%] => m._p[1%]
        this._p[2%] => m._p[2%] : this._p[3%] => m._p[3%]
    end constructor
    
end namespace
