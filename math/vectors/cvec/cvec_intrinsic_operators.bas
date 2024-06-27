namespace math
    
' operators ====================================================================
    
' math.cvec.+= -----------------------------------------------------------------
    
    #macro cv_op1(_o_)
    operator cvec.##_o_##= (byref v as const vec3)
        dim as real i =>  cos(this._a) * this._r _o_ v.x, _
                    j => -sin(this._a) * this._r _o_ v.y
        this._a => math.theta(i, j)
        this._r => math.hypot(i, j)
        this.z _o_##= v.z
    end operator
    #endmacro
    
    #macro cv_op2(_o1_,_o2_)
    operator cvec.##_o1_##= (byref v as const cvec)
        dim as real i =>  cos(this._a) * this._r _o1_ cos(v._a) * v._r, _
                    j => -sin(this._a) * this._r _o2_ sin(v._a) * v._r
        this._a => math.theta(i, j)
        this._r => math.hypot(i, j)
        this.z _o1_##= v.z
    end operator
    #endmacro
    
    cv_op1(+)
    cv_op2(+,-)
    
' math.cvec.-= -----------------------------------------------------------------
    
    cv_op1(-)
    cv_op2(-,+)
    #undef cv_op2
    
' math.cvec.*= -----------------------------------------------------------------
    
    operator cvec.*= (byref n as const real)
        if 0d <= n then
            this._r *= n
            this.z  *= n
        else
            this._a => wrap(this._a + pi, two_pi)
            this._r *= -n
            this.z  *= -n
        end if
    end operator
    
    cv_op1(*)
    #undef cv_op1
    
    operator cvec.*= (byref v as const cvec)
        dim as real i =>  cos(this._a) * this._r *  cos(v._a) * v._r, _
                    j => -sin(this._a) * this._r * -sin(v._a) * v._r
        this._a => math.theta(i, j)
        this._r => math.hypot(i, j)
        this.z  *= v.z
    end operator
    
' math.cvec./= -----------------------------------------------------------------
    
    operator cvec./= (byref n as const real)
        if 0d < n then
            this._r /= n
            this.z  /= n
        elseif n <= 0d then
            this._a => wrap(this._a + pi, two_pi)
            this._r /= -n
            this.z  /= n
        else
            this._a => 0d
            this._r => 0d
            this.z  => 0d
        end if
    end operator
    
' math.cvec.cast ---------------------------------------------------------------
    
    operator cvec.cast () as vec3
        return vec3(cos(this._a) * this._r, _
                   -sin(this._a) * this._r, _
                    this.z)
    end operator
    
    operator cvec.cast () as string
        #ifdef _MATH_ANGLE_BI_
        return "<math.cvec>{ theta : " & angle.render(this._a, angleUnit.radian) & " , rho : " & this._r & " , z : " & this.z & " }"
        #else
        return "<math.cvec>{ theta : " & this._a                                 & " , rho : " & this._r & " , z : " & this.z & " }"
        #endif
    end operator
    
' math.cvec.let ----------------------------------------------------------------
    
    operator cvec.let (byref v as const vec2)
        this._a => v.theta
        this._r => v.norm
        this.z  => 0d
    end operator
    
    #ifdef _MATH_PVEC_BI_
    operator cvec.let (byref v as const pvec)
        this._a => v.theta
        this._r => v.rho
        this.z  => 0d
    end operator
    #endif
    
    operator cvec.let (byref v as const vec3)
        this._a => v.theta
        this._r => hypot(v.x, v.y)
        this.z  => v.z
    end operator
    
    operator cvec.let (byref v as const cvec)
        this._a => v._a
        this._r => v._r
        this.z  => v.z
    end operator
    
end namespace
