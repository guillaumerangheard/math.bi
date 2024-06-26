namespace math
    
' operators ====================================================================
    
' math.pvec.+= -----------------------------------------------------------------
    
    #macro pv_op(_o_,_t_)
    operator pvec.##_o_##= (byref v as const _t_)
        dim as real i => this.x _o_ v.x, _
                    j => this.y _o_ v.y
        this._a => math.theta(i, j)
        this._r => math.hypot(i, j)
    end operator
    #endmacro
    
    pv_op(+,vec2)
    pv_op(+,pvec)
    
' math.pvec.-= -----------------------------------------------------------------
    
    pv_op(-,vec2)
    pv_op(-,pvec)
    
' math.pvec.*= -----------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator pvec.*= (byref r as const rational)
        dim as real n => m_crl(r)
        if 0d <= n then
            this._r *= n
        else
            this._a => wrap(this._a + pi, two_pi)
            this._r *= -n
        end if
    end operator
    #endif
    
    operator pvec.*= (byref n as const real)
        if 0d <= n then
            this._r *= n
        else
            this._a => wrap(this._a + pi, two_pi)
            this._r *= -n
        end if
    end operator
    
    pv_op(*,vec2)
    pv_op(*,pvec)
    #undef pv_op
    
' math.pvec./= -----------------------------------------------------------------
    
    #ifdef _MATH_RATIONAL_BI_
    operator pvec./= (byref r as const rational)
        dim as real n => m_crl(r)
        if 0d < n then
            this._r /= n
        elseif n < 0d then
            this._a => wrap(this._a + pi, two_pi)
            this._r /= -n
        else
            this._a => 0d
            this._r => 0d
        end if
    end operator
    #endif
    
    operator pvec./= (byref n as const real)
        if 0d < n then
            this._r /= n
        elseif n < 0d then
            this._a => wrap(this._a + pi, two_pi)
            this._r /= -n
        else
            this._a => 0d
            this._r => 0d
        end if
    end operator
    
    operator pvec./= (byref v as const vec2)
        dim as real i => iif(v.x, this.x / v.x, 0d), _
                    j => iif(v.y, this.y / v.y, 0d)
        this._a => math.theta(i, j)
        this._r => math.hypot(i, j)
    end operator
    
    operator pvec./= (byref v as const pvec)
        dim as real i => v.x, _
                    j => v.y, _
                    k => iif(i, this.x / i, 0d), _
                    l => iif(j, this.y / j, 0d)
        this._a => math.theta(k, l)
        this._r => math.hypot(k, l)
    end operator
    
' math.pvec.cast ---------------------------------------------------------------
    
    operator pvec.cast () as vec2
        return vec2(this.x, this.y)
    end operator
    
    operator pvec.cast () as string
        #ifdef _MATH_ANGLE_BI_
        return "<math.pvec>{ theta : " & angle.render(this._a, angleUnit.radian) & " , rho : " & this._r & " }"
        #else
        return "<math.pvec>{ theta : " & this._r                                 & " , rho : " & this._r & " }"
        #endif
    end operator
    
' math.pvec.let ----------------------------------------------------------------
    
    operator pvec.let (byref v as const vec2)
        this._a => v.theta
        this._r => v.norm
    end operator
    
    operator pvec.let (byref v as const pvec)
        this._a => v._a
        this._r => v._r
    end operator
    
end namespace
