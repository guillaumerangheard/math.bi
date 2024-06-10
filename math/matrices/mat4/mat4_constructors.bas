namespace math
    
' constructors =================================================================
    
    ' 0  1  2  3
    ' 4  5  6  7
    ' 8  9  10 11
    ' 12 13 14 15
    
    ' Defaults to identity.
    constructor mat4 ()
        this._p => new real[16%]
        this._p[0%]  => 1d
        this._p[5%]  => 1d
        this._p[10%] => 1d
        this._p[15%] => 1d
    end constructor
    
    constructor mat4 (byref m as const mat2)
        this._p => new real[16%]
        dim as real const ptr p => m.data
        this._p[0%]  => p[0%] : this._p[1%] => p[1%]
        this._p[4%]  => p[2%] : this._p[5%] => p[3%]
        this._p[10%] => 1d
        this._p[15%] => 1d
    end constructor
    
    constructor mat4 (byref m as const mat3)
        this._p => new real[16%]
        dim as real const ptr p => m.data
        this._p[0%]  => p[0%] : this._p[1%] => p[1%] : this._p[2%]  => p[2%]
        this._p[4%]  => p[3%] : this._p[5%] => p[4%] : this._p[6%]  => p[5%]
        this._p[8%]  => p[6%] : this._p[9%] => p[7%] : this._p[10%] => p[8%]
        this._p[15%] => 1d
    end constructor
    
    constructor mat4 (byref m as const mat4)
        this._p => new real[16%]
        this._p[0%]  => m._p[0%]  : this._p[1%]  => m._p[1%]  : this._p[2%]  => m._p[2%]  : this._p[3%]  => m._p[3%]
        this._p[4%]  => m._p[4%]  : this._p[5%]  => m._p[5%]  : this._p[6%]  => m._p[6%]  : this._p[7%]  => m._p[7%]
        this._p[8%]  => m._p[8%]  : this._p[9%]  => m._p[9%]  : this._p[10%] => m._p[10%] : this._p[11%] => m._p[11%]
        this._p[12%] => m._p[12%] : this._p[13%] => m._p[13%] : this._p[14%] => m._p[14%] : this._p[15%] => m._p[15%]
    end constructor
    
end namespace
