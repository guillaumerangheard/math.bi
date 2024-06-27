namespace math
    
' operators ====================================================================
    
' math.angle.+= ----------------------------------------------------------------
    
    #macro a_op(_o_)
    #ifdef _MATH_RATIONAL_BI_
    operator angle.##_o_##= (byref r as const rational)
        this._v => wrap(this._v _o_ m_crl(r) / angles(defaultAngleUnit))
    end operator
    #endif
    
    operator angle.##_o_##= (byref n as const real)
        this._v => wrap(this._v _o_ n / angles(defaultAngleUnit))
    end operator
    
    operator angle.##_o_##= (byref a as const angle)
        this._v => wrap(this._v _o_ a._v)
    end operator
    #endmacro
    
    a_op(+)
    
' math.angle.-= ----------------------------------------------------------------
    
    a_op(-)
    
    #undef a_op
    
' math.angle.*= ----------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator angle.*= (byref r as const rational)
        this._v => wrap(this._v * m_crl(r))
    end operator
    #endif
    
    operator angle.*= (byref n as const real)
        this._v => wrap(this._v * n)
    end operator
    
' math.angle./= ----------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator angle./= (byref r as const rational)
        dim as real n => m_crl(r)
        this._v => iif(n, wrap(this._v / n), 0d)
    end operator
    #endif
    
    operator angle./= (byref n as const real)
        this._v => iif(n, wrap(this._v / n), 0d)
    end operator
    
' math.angle.cast --------------------------------------------------------------
    
    operator angle.cast () as string
        return "<math.angle>{ value : " & (this._v * angles(this.unit)) & " , unit : " & angleNames(this.unit) & " }"
    end operator
    
' math.angle.let ---------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator angle.let (byref r as const rational)
        this._v => wrap(m_crl(r) / angles(defaultAngleUnit))
    end operator
    #endif
    
    operator angle.let (byref n as const real)
        this._v => wrap(n / angles(defaultAngleUnit))
    end operator
    
    operator angle.let (byref a as const angle)
        if @this <> @a then
            this._v   => a._v
            this.unit => a.unit
        end if
    end operator
    
end namespace
