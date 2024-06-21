namespace math
    
' constructors =================================================================
    
    constructor cvec ()
        ' Empty.
    end constructor
    
    #ifdef _MATH_ANGLE_BI_
    
    constructor cvec (byref n1 as const real, byref n2 as const real, byref n3 as const real => 0d)
        if 0d <= n2 then
            this._a => wrap(angle.convert(n1, defaultAngleUnit, angleUnit.radian), two_pi)
            this._r => n2
        else
            this._a => wrap(angle.convert(n1, defaultAngleUnit, angleUnit.radian) + pi, two_pi)
            this._r => -n2
        end if
        this.z => n3
    end constructor
    
    constructor cvec (byref n1 as const real, byref u as const angleUnit, byref n2 as const real, byref n3 as const real => 0d)
        if 0d <= n2 then
            this._a => wrap(angle.convert(n1, u, angleUnit.radian), two_pi)
            this._r => n2
        else
            this._a => wrap(angle.convert(n1, u, angleUnit.radian) + pi, two_pi)
            this._r => -n2
        end if
        this.z => n3
    end constructor
    
    constructor cvec (byref a as const angle, byref n1 as const real, byref n2 as const real => 0d)
        if 0d <= n2 then
            this._a => a.theta
            this._r => n1
        else
            this._a => wrap(a.theta + pi, two_pi)
            this._r => -n1
        end if
        this.z => n2
    end constructor
    
    #else
    
    constructor cvec (byref n1 as const real, byref n2 as const real, byref n3 as const real => 0d)
        if 0d <= n2 then
            this._a => wrap(n1, two_pi)
            this._r => n2
        else
            this._a => wrap(n1 + pi, two_pi)
            this._r => -n2
        end if
        this.z => n3
    end constructor
    
    #endif
    
    constructor cvec (byref v as const vec2, byref n as const real => 0d)
        this._a => v.theta
        this._r => v.norm
        this.z  => n
    end constructor
    
    #ifdef _MATH_PVEC_BI_
    constructor cvec (byref v as const pvec, byref n as const real => 0d)
        this._a => v.theta
        this._r => v.rho
        this.z  => n
    end constructor
    #endif
    
    constructor cvec (byref v as const vec3)
        this._a => v.theta
        this._r => hypot(v.x, v.y)
        this.z  => v.z
    end constructor
    
    constructor cvec (byref v as const cvec)
        this._a => v._a
        this._r => v._r
        this.z  => v.z
    end constructor
    
end namespace
