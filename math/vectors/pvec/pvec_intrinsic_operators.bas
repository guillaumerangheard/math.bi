namespace math
    
' operators ====================================================================
    
' math.pvec.+= -----------------------------------------------------------------
    
    #macro pv_op1(_o_)
    operator pvec.##_o_##= (byref v as const vec2)
        dim as real i =>  cos(this._a) * this._r _o_ v.x, _
                    j => -sin(this._a) * this._r _o_ v.y
        this._a => math.phi(i, j)
        this._r => math.hypot(i, j)
    end operator
    #endmacro
    
    #macro pv_op2(_o1_,_o2_)
    operator pvec.##_o1_##= (byref v as const pvec)
        dim as real i =>  cos(this._a) * this._r _o1_ cos(v._a) * v._r, _
                    j => -sin(this._a) * this._r _o2_ sin(v._a) * v._r
        this._a => math.phi(i, j)
        this._r => math.hypot(i, j)
    end operator
    #endmacro
    
    pv_op1(+)
    pv_op2(+,-)
    
' math.pvec.-= -----------------------------------------------------------------
    
    pv_op1(-)
    pv_op2(-,+)
    #undef pv_op2
    
' math.pvec.*= -----------------------------------------------------------------
    
    operator pvec.*= (byref n as const real)
        if 0d <= n then
            this._r *= n
        else
            this._a => wrap(this._a + pi, two_pi)
            this._r *= -n
        end if
    end operator
    
    pv_op1(*)
    #undef pv_op1
    
    operator pvec.*= (byref v as const pvec)
        dim as real i =>  cos(this._a) * this._r *  cos(v._a) * v._r, _
                    j => -sin(this._a) * this._r * -sin(v._a) * v._r
        this._a => math.phi(i, j)
        this._r => math.hypot(i, j)
    end operator
    
' math.pvec./= -----------------------------------------------------------------
    
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
        if v.x then
            if v.y then
                dim as real i =>  (cos(this._a) * this._r) / v.x, _
                            j => -(sin(this._a) * this._r) / v.y
                this._a => math.phi(i, j)
                this._r => math.hypot(i, j)
            else
                this._r => (cos(this._a) * this._r) / v.x
                this._a => 0d
            end if
        else
            if v.y then
                this._r => -(sin(this._a) * this._r) / v.y
                this._a => pi * 1.5d
            else
                this._a => 0d
                this._r => 0d
            end if
        end if
    end operator
    
    operator pvec./= (byref v as const pvec)
        dim as real i =>  cos(v._a) * v._r, _
                    j => -sin(v._a) * v._r
        if i then
            if j then
                dim as real k =>  (cos(this._a) * this._r) / i, _
                            l => -(sin(this._a) * this._r) / j
                this._a => math.phi(k, l)
                this._r => math.hypot(k, l)
            else
                this._r => (cos(this._a) * this._r) / i
                this._a => 0d
            end if
        else
            if j then
                this._r => -(sin(this._a) * this._r) / j
                this._a => pi * 1.5d
            else
                this._a => 0d
                this._r => 0d
            end if
        end if
    end operator
    
' math.pvec.cast ---------------------------------------------------------------
    
    operator pvec.cast () as vec2
        dim as real i => cos(this._a) * this._r, j => -sin(this._a) * this._r
        return vec2(i, j)
    end operator
    
    operator pvec.cast () as string
        #ifdef _MATH_ANGLE_BI_
        return "<math.pvec>{ phi : " & angle.render(this._a, angleUnit.radian) & " , rho : " & this._r & " }"
        #else
        return "<math.pvec>{ phi : " & this._r                                 & " , rho : " & this._r & " }"
        #endif
    end operator
    
' math.pvec.let ----------------------------------------------------------------
    
    operator pvec.let (byref v as const vec2)
        this._a => v.phi
        this._r => v.norm
    end operator
    
    operator pvec.let (byref v as const pvec)
        this._a => v._a
        this._r => v._r
    end operator
    
end namespace
