namespace math
    
' operators ====================================================================
    
' math.mat2.+= -----------------------------------------------------------------
    
    #macro m2_op(_o_)
    operator mat2.##_o_##= (byref m as const mat2)
        this._p[0%] _o_##= m._p[0%] : this._p[1%] _o_##= m._p[1%]
        this._p[2%] _o_##= m._p[2%] : this._p[3%] _o_##= m._p[3%]
    end operator
    #endmacro
    
    m2_op(+)
    
' math.mat2.-= -----------------------------------------------------------------
    
    m2_op(-)
    
    #undef m2_op
    
' math.mat2.*= -----------------------------------------------------------------
    
    operator mat2.*= (byref n as const real)
        this._p[0%] *= n : this._p[1%] *= n
        this._p[2%] *= n : this._p[3%] *= n
    end operator
    
    operator mat2.*= (byref m as const mat2)
        dim as real n00 => this._p[0%] * m._p[0%] + this._p[1%] * m._p[2%], n10 => this._p[0%] * m._p[1%] + this._p[1%] * m._p[3%], _
                    n01 => this._p[2%] * m._p[0%] + this._p[3%] * m._p[2%], n11 => this._p[2%] * m._p[1%] + this._p[3%] * m._p[3%]
        this._p[0%] => n00 : this._p[1%] => n10
        this._p[2%] => n01 : this._p[3%] => n11
    end operator
    
' math.mat2./= -----------------------------------------------------------------
    
    operator mat2./= (byref n as const real)
        if n then
            this._p[0%] /= n : this._p[1%] /= n
            this._p[2%] /= n : this._p[3%] /= n
        else
            this._p[0%] => 1d : this._p[1%] => 0d
            this._p[2%] => 0d : this._p[3%] => 1d
        end if
    end operator
    
' math.mat2.cast ---------------------------------------------------------------
    
    operator mat2.cast () as string
        return !"<math.mat2>{\n    " & this._p[0%] & " , " & this._p[1%] & _
                          !",\n    " & this._p[2%] & " , " & this._p[3%] & !"\n}"
    end operator
    
' math.mat2.let ----------------------------------------------------------------
    
    operator mat2.let (byref m as const mat2)
        if @this <> @m then
            this._p[0%] => m._p[0%] : this._p[1%] => m._p[1%]
            this._p[2%] => m._p[2%] : this._p[3%] => m._p[3%]
        end if
    end operator
    
end namespace
