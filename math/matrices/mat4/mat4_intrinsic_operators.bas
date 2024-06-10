namespace math
    
' operators ====================================================================
    
' math.mat4.+= -----------------------------------------------------------------
    
    #macro m4_op(_o_)
    operator mat4.##_o_##= (byref m as const mat4)
        this._p[0%]  _o_##= m._p[0%]  : this._p[1%]  _o_##= m._p[1%]  : this._p[2%]  _o_##= m._p[2%]  : this._p[3%]  _o_##= m._p[3%]
        this._p[4%]  _o_##= m._p[4%]  : this._p[5%]  _o_##= m._p[5%]  : this._p[6%]  _o_##= m._p[6%]  : this._p[7%]  _o_##= m._p[7%]
        this._p[8%]  _o_##= m._p[8%]  : this._p[9%]  _o_##= m._p[9%]  : this._p[10%] _o_##= m._p[10%] : this._p[11%] _o_##= m._p[11%]
        this._p[12%] _o_##= m._p[12%] : this._p[13%] _o_##= m._p[13%] : this._p[14%] _o_##= m._p[14%] : this._p[15%] _o_##= m._p[15%]
    end operator
    #endmacro
    
    m4_op(+)
    
' math.mat4.-= -----------------------------------------------------------------
    
    m4_op(-)
    
    #undef m4_op
    
' math.mat4.*= -----------------------------------------------------------------
    
    operator mat4.*= (byref n as const real)
        this._p[0%]  *= n : this._p[1%]  *= n : this._p[2%]  *= n : this._p[3%]  *= n
        this._p[4%]  *= n : this._p[5%]  *= n : this._p[6%]  *= n : this._p[7%]  *= n
        this._p[8%]  *= n : this._p[9%]  *= n : this._p[10%] *= n : this._p[11%] *= n
        this._p[12%] *= n : this._p[13%] *= n : this._p[14%] *= n : this._p[15%] *= n
    end operator
    
    operator mat4.*= (byref m as const mat4)
        dim as real n00 => this._p[0]  * m._p[0] + this._p[1]  * m._p[4] + this._p[2]  * m._p[8] + this._p[3]  * m._p[12], n10 => this._p[0]  * m._p[0] + this._p[1]  * m._p[4] + this._p[2]  * m._p[8] + this._p[3]  * m._p[12], n20 => this._p[0]  * m._p[0] + this._p[1]  * m._p[4] + this._p[2]  * m._p[8] + this._p[3]  * m._p[12], n30 => this._p[0]  * m._p[0] + this._p[1]  * m._p[4] + this._p[2]  * m._p[8] + this._p[3]  * m._p[12], _
                    n01 => this._p[4]  * m._p[0] + this._p[5]  * m._p[4] + this._p[6]  * m._p[8] + this._p[7]  * m._p[12], n11 => this._p[4]  * m._p[0] + this._p[5]  * m._p[4] + this._p[6]  * m._p[8] + this._p[7]  * m._p[12], n21 => this._p[4]  * m._p[0] + this._p[5]  * m._p[4] + this._p[6]  * m._p[8] + this._p[7]  * m._p[12], n31 => this._p[4]  * m._p[0] + this._p[5]  * m._p[4] + this._p[6]  * m._p[8] + this._p[7]  * m._p[12], _
                    n02 => this._p[8]  * m._p[0] + this._p[9]  * m._p[4] + this._p[10] * m._p[8] + this._p[11] * m._p[12], n12 => this._p[8]  * m._p[0] + this._p[9]  * m._p[4] + this._p[10] * m._p[8] + this._p[11] * m._p[12], n22 => this._p[8]  * m._p[0] + this._p[9]  * m._p[4] + this._p[10] * m._p[8] + this._p[11] * m._p[12], n32 => this._p[8]  * m._p[0] + this._p[9]  * m._p[4] + this._p[10] * m._p[8] + this._p[11] * m._p[12], _
                    n03 => this._p[12] * m._p[0] + this._p[13] * m._p[4] + this._p[14] * m._p[8] + this._p[15] * m._p[12], n13 => this._p[12] * m._p[0] + this._p[13] * m._p[4] + this._p[14] * m._p[8] + this._p[15] * m._p[12], n23 => this._p[12] * m._p[0] + this._p[13] * m._p[4] + this._p[14] * m._p[8] + this._p[15] * m._p[12], n33 => this._p[12] * m._p[0] + this._p[13] * m._p[4] + this._p[14] * m._p[8] + this._p[15] * m._p[12]
        this._p[0%]  => n00 : this._p[1%]  => n10 : this._p[2%]  => n20 : this._p[3%]  => n30
        this._p[4%]  => n01 : this._p[5%]  => n11 : this._p[6%]  => n21 : this._p[7%]  => n31
        this._p[8%]  => n02 : this._p[9%]  => n12 : this._p[10%] => n22 : this._p[11%] => n32
        this._p[12%] => n03 : this._p[13%] => n13 : this._p[14%] => n23 : this._p[15%] => n33
    end operator
    
' math.mat4./= -----------------------------------------------------------------
    
    operator mat4./= (byref n as const real)
        if n then
            this._p[0%]  /= n : this._p[1%]  /= n : this._p[2%]  /= n : this._p[3%]  /= n
            this._p[4%]  /= n : this._p[5%]  /= n : this._p[6%]  /= n : this._p[7%]  /= n
            this._p[8%]  /= n : this._p[9%]  /= n : this._p[10%] /= n : this._p[11%] /= n
            this._p[12%] /= n : this._p[13%] /= n : this._p[14%] /= n : this._p[15%] /= n
        else
            this._p[0%]  => 1d : this._p[1%]  => 0d : this._p[2%]  => 0d : this._p[3%]  => 0d
            this._p[4%]  => 0d : this._p[5%]  => 1d : this._p[6%]  => 0d : this._p[7%]  => 0d
            this._p[8%]  => 0d : this._p[9%]  => 0d : this._p[10%] => 1d : this._p[11%] => 0d
            this._p[12%] => 0d : this._p[13%] => 0d : this._p[14%] => 0d : this._p[15%] => 1d
        end if
    end operator
    
' math.mat4.cast ---------------------------------------------------------------
    
    operator mat4.cast () as string
        return !"<math.mat4>{\n    " & this._p[0%]  & " , " & this._p[1%]  & " , " & this._p[2%]  & " , " & this._p[3%]  & _
                          !",\n    " & this._p[4%]  & " , " & this._p[5%]  & " , " & this._p[6%]  & " , " & this._p[7%]  & _
                          !",\n    " & this._p[8%]  & " , " & this._p[9%]  & " , " & this._p[10%] & " , " & this._p[11%] & _
                          !",\n    " & this._p[12%] & " , " & this._p[13%] & " , " & this._p[14%] & " , " & this._p[15%] & !"\n}"
    end operator
    
' math.mat4.let ----------------------------------------------------------------
    
    operator mat4.let (byref m as const mat2)
        dim as real const ptr p => m.data
        this._p[0%]  => p[0%] : this._p[1%]  => p[1%] : this._p[2%]  => 0d : this._p[3%]  => 0d
        this._p[4%]  => p[2%] : this._p[5%]  => p[3%] : this._p[6%]  => 0d : this._p[7%]  => 0d
        this._p[8%]  => 0d    : this._p[9%]  => 0d    : this._p[10%] => 1d : this._p[11%] => 0d
        this._p[12%] => 0d    : this._p[13%] => 0d    : this._p[14%] => 0d : this._p[15%] => 1d
    end operator
    
    operator mat4.let (byref m as const mat3)
        dim as real const ptr p => m.data
        this._p[0%]  => p[0%] : this._p[1%]  => p[1%] : this._p[2%]  => p[2%] : this._p[3%]  => 0d
        this._p[4%]  => p[3%] : this._p[5%]  => p[4%] : this._p[6%]  => p[5%] : this._p[7%]  => 0d
        this._p[8%]  => p[6%] : this._p[9%]  => p[7%] : this._p[10%] => p[8%] : this._p[11%] => 0d
        this._p[12%] => 0d    : this._p[13%] => 0d    : this._p[14%] => 0d    : this._p[15%] => 1d
    end operator
    
    operator mat4.let (byref m as const mat4)
        this._p[0%]  => m._p[0%]  : this._p[1%]  => m._p[1%]  : this._p[2%]  => m._p[2%]  : this._p[3%]  => m._p[3%]
        this._p[4%]  => m._p[4%]  : this._p[5%]  => m._p[5%]  : this._p[6%]  => m._p[6%]  : this._p[7%]  => m._p[7%]
        this._p[8%]  => m._p[8%]  : this._p[9%]  => m._p[9%]  : this._p[10%] => m._p[10%] : this._p[11%] => m._p[11%]
        this._p[12%] => m._p[12%] : this._p[13%] => m._p[13%] : this._p[14%] => m._p[14%] : this._p[15%] => m._p[15%]
    end operator
    
end namespace
