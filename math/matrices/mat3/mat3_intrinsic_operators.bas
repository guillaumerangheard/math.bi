namespace math
    
' operators ====================================================================
    
' math.mat3.+= -----------------------------------------------------------------
    
    #macro m3_op(_o_)
    operator mat3.##_o_##= (byref m as const mat3)
        this._p[0%] _o_##= m._p[0%] : this._p[1%] _o_##= m._p[1%] : this._p[2%] _o_##= m._p[2%]
        this._p[3%] _o_##= m._p[3%] : this._p[4%] _o_##= m._p[4%] : this._p[5%] _o_##= m._p[5%]
        this._p[6%] _o_##= m._p[6%] : this._p[7%] _o_##= m._p[7%] : this._p[8%] _o_##= m._p[8%]
    end operator
    #endmacro
    
    m3_op(+)
    
' math.mat3.-= -----------------------------------------------------------------
    
    m3_op(-)
    
    #undef m3_op
    
' math.mat3.*= -----------------------------------------------------------------
    
    operator mat3.*= (byref n as const real)
        this._p[0%] *= n : this._p[1%] *= n : this._p[2%] *= n
        this._p[3%] *= n : this._p[4%] *= n : this._p[5%] *= n
        this._p[6%] *= n : this._p[7%] *= n : this._p[8%] *= n
    end operator
    
    operator mat3.*= (byref m as const mat3)
        dim as real n00 => this._p[0%] * m._p[0%] + this._p[1%] * m._p[3%] + this._p[2%] * m._p[6%], n10 => this._p[0%] * m._p[1%] + this._p[1%] * m._p[4%] + this._p[2%] * m._p[7%], n20 => this._p[0%] * m._p[2%] + this._p[1%] * m._p[5%] + this._p[2%] * m._p[8%], _
                    n01 => this._p[3%] * m._p[0%] + this._p[4%] * m._p[3%] + this._p[5%] * m._p[6%], n11 => this._p[3%] * m._p[1%] + this._p[4%] * m._p[4%] + this._p[5%] * m._p[7%], n21 => this._p[3%] * m._p[2%] + this._p[4%] * m._p[5%] + this._p[5%] * m._p[8%], _
                    n02 => this._p[6%] * m._p[0%] + this._p[7%] * m._p[3%] + this._p[8%] * m._p[6%], n12 => this._p[6%] * m._p[1%] + this._p[7%] * m._p[4%] + this._p[8%] * m._p[7%], n22 => this._p[6%] * m._p[2%] + this._p[7%] * m._p[5%] + this._p[8%] * m._p[8%]
        this._p[0%] => n00 : this._p[1%] => n10 : this._p[2%] => n20
        this._p[3%] => n01 : this._p[4%] => n11 : this._p[5%] => n21
        this._p[6%] => n02 : this._p[7%] => n12 : this._p[8%] => n22
    end operator
    
' math.mat3./= -----------------------------------------------------------------
    
    operator mat3./= (byref n as const real)
        if n then
            this._p[0%] /= n : this._p[1%] /= n : this._p[2%] /= n
            this._p[3%] /= n : this._p[4%] /= n : this._p[5%] /= n
            this._p[6%] /= n : this._p[7%] /= n : this._p[8%] /= n
        else
            this._p[0%] => 1d : this._p[1%] => 0d : this._p[2%] => 0d
            this._p[3%] => 0d : this._p[4%] => 1d : this._p[5%] => 0d
            this._p[6%] => 0d : this._p[7%] => 0d : this._p[8%] => 1d
        end if
    end operator
    
' math.mat3.cast ---------------------------------------------------------------
    
    operator mat3.cast () as string
        return !"<math.mat3>{\n    " & this._p[0%] & " , " & this._p[1%] & " , " & this._p[2%] & _
                          !",\n    " & this._p[3%] & " , " & this._p[4%] & " , " & this._p[5%] & _
                          !",\n    " & this._p[6%] & " , " & this._p[7%] & " , " & this._p[8%] & !"\n}"
    end operator
    
' math.mat3.let ----------------------------------------------------------------
    
    operator mat3.let (byref m as const mat2)
        dim as real const ptr p => m.data
        this._p[0%] => p[0%] : this._p[1%] => p[1%] : this._p[2%] => 0d
        this._p[3%] => p[2%] : this._p[4%] => p[3%] : this._p[5%] => 0d
        this._p[6%] => 0d    : this._p[7%] => 0d    : this._p[8%] => 1d
    end operator
    
    operator mat3.let (byref m as const mat3)
        if @this <> @m then
            this._p[0%] => m._p[0%] : this._p[1%] => m._p[1%] : this._p[2%] => m._p[2%]
            this._p[3%] => m._p[3%] : this._p[4%] => m._p[4%] : this._p[5%] => m._p[5%]
            this._p[6%] => m._p[6%] : this._p[7%] => m._p[7%] : this._p[8%] => m._p[8%]
        end if
    end operator
    
end namespace
