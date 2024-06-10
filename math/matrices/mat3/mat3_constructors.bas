namespace math
    
' constructors =================================================================
    
    ' Defaults to identity.
    constructor mat3 ()
        this._p => new real[9%]
        this._p[0%] => 1d
        this._p[4%] => 1d
        this._p[8%] => 1d
    end constructor
    
    constructor mat3 (byref m as const mat2)
        this._p => new real[9%]
        dim as real const ptr p => m.data
        this._p[0%] => p[0%] : this._p[1%] => p[1%]
        this._p[3%] => p[2%] : this._p[4%] => p[3%]
        this._p[8%] => 1%
    end constructor
    
    constructor mat3 (byref m as const mat3)
        this._p => new real[9%]
        this._p[0%] => m._p[0%] : this._p[1%] => m._p[1%] : this._p[2%] => m._p[2%]
        this._p[3%] => m._p[3%] : this._p[4%] => m._p[4%] : this._p[5%] => m._p[5%]
        this._p[6%] => m._p[6%] : this._p[7%] => m._p[7%] : this._p[8%] => m._p[8%]
    end constructor
    
end namespace
