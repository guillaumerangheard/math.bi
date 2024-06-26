namespace math
    
' operators ====================================================================
    
' math.complex.+= --------------------------------------------------------------
    
    #macro c_op(_o_)
    #ifdef _MATH_RATIONAL_BI_
    operator complex.##_o_##= (byref r as const rational)
        this.r _o_##= m_crl(r)
    end operator
    #endif
    
    operator complex.##_o_##= (byref n as const real)
        this.r _o_##= n
    end operator
    
    operator complex.##_o_##= (byref c as const complex)
        this.r _o_##= c.r
        this.i _o_##= c.i
    end operator
    #endmacro
    
    c_op(+)
    
' math.complex.-= --------------------------------------------------------------
    
    c_op(-)
    
    #undef c_op
    
' math.complex.*= --------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator complex.*= (byref r as const rational)
        dim as real n => m_crl(r)
        this.r *= n
        this.i *= n
    end operator
    #endif
    
    operator complex.*= (byref n as const real)
        this.r *= n
        this.i *= n
    end operator
    
    operator complex.*= (byref c as const complex)
        dim as real x => this.r * c.r - this.i * c.i, _
                    y => this.r * c.i + this.i * c.r
        this.r => x
        this.i => y
    end operator
    
' math.complex./= --------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator complex./= (byref r as const rational)
        dim as real n => m_crl(r)
        if n then
            this.r /= n
            this.i /= n
        else
            this.r => 0d
            this.i => 0d
        end if
    end operator
    #endif
    
    operator complex./= (byref n as const real)
        if n then
            this.r /= n
            this.i /= n
        else
            this.r => 0d
            this.i => 0d
        end if
    end operator
    
    operator complex./= (byref c as const complex)
        if (0d <> c.r) or (0d <> c.i) then
            dim as real d => c.r * c.r + c.i * c.i, _
                        x => (this.r * c.r + this.i * c.i) / d, _
                        y => (this.i * c.r - this.r * c.i) / d
            this.r => x
            this.i => y
        else
            this.r => 0d
            this.i => 0d
        end if
    end operator
    
' math.complex.^= --------------------------------------------------------------
    
    ' Still trying to wrap my head around complex number exponentiation...
    
' math.complex.cast ------------------------------------------------------------
    
    operator complex.cast () as string
        return "<math.complex>{ r : " & this.r & " , i : " & this.i & " }"
    end operator
    
' math.complex.let -------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator complex.let (byref r as const rational)
        this.r => m_crl(r)
        this.i => 0d
    end operator
    #endif
    
    operator complex.let (byref n as const real)
        this.r => n
        this.i => 0d
    end operator
    
    operator complex.let (byref c as const complex)
        this.r => c.r
        this.i => c.i
    end operator
    
end namespace
