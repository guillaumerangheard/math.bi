namespace math
    
' operators ====================================================================
    
' math.rational.+= -------------------------------------------------------------
    
    #macro r_op(_o_)
    operator rational.##_o_##= (byref i as const longint)
        this._n _o_##= this._d * i
    end operator
    
    operator rational.##_o_##= (byref r as const rational)
        dim as longint i => this._n * r._d _o_ this._d * r._n, _
                       j => this._d * r._d
        this._n => i
        this._d => j
    end operator
    #endmacro
    
    r_op(+)
    
' math.rational.-= -------------------------------------------------------------
    
    r_op(-)
    
    #undef r_op
    
' math.rational.*= -------------------------------------------------------------
    
    operator rational.*= (byref i as const longint)
        this._n *= i
    end operator
    
    operator rational.*= (byref r as const rational)
        this._n *= r._n
        this._d *= r._d
    end operator
    
' math.rational./= -------------------------------------------------------------
    
    operator rational./= (byref i as const longint)
        if i then
            this._d *= i
        else
            this._n => 0ll
            this._d => 1ll
        end if
    end operator
    
    operator rational./= (byref r as const rational)
        if (0ll <> this._d) and (0ll <> r._n) and (0ll <> r._d) then
            this._n *= r._d
            this._d *= r._n
        else
            this._n => 0ll
            this._d => 1ll
        end if
    end operator
    
' math.rational.^= -------------------------------------------------------------
    
    operator rational.^= (byref i as const longint)
        if 0ll < i then
            this._n ^= i
            this._d ^= i
        elseif i < 0ll then
            if this._n then
                dim as longint j => this._n ^ i
                this._n => this._d ^ i
                this._d => j
            else
                this._n => 0ll
                this._d => 1ll
            end if
        else
            this._n => 1ll
            this._d => 1ll
        end if
    end operator
    
' math.rational.cast -----------------------------------------------------------
    
    operator rational.cast () as real
        return iif(1d <> this._d, m_crl(this._n) / m_crl(this._d), m_crl(this._n))
    end operator
    
    operator rational.cast () as string
        return "<math.rational>{ n : " & this._n & " , d : " & this._d & " }"
    end operator
    
' math.rational.let ------------------------------------------------------------
    
    operator rational.let (byref i as const longint)
        this._n => i
        this._d => 1ll
    end operator
    
    operator rational.let (byref r as const rational)
        this._n => r._n
        this._d => r._d
    end operator
    
end namespace
