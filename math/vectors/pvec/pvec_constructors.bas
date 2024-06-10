namespace math
    
' constructors =================================================================
    
    constructor pvec ()
        ' Empty.
    end constructor
    
    #ifdef _MATH_ANGLE_BI_
    
    constructor pvec (byref n as const real, byref u as const angleUnit => defaultAngleUnit)
        this._a => wrap(angle.convert(n, u, angleUnit.radian), two_pi)
    end constructor
    
    constructor pvec (byref a as const angle)
        this._a => a.phi
    end constructor
    
    constructor pvec (byref n1 as const real, byref n2 as const real)
        if 0d <= n2 then
            this._a => wrap(angle.convert(n1, defaultAngleUnit, angleUnit.radian), two_pi)
            this._r => n2
        else
            this._a => wrap(angle.convert(n1, defaultAngleUnit, angleUnit.radian) + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    
    constructor pvec (byref n1 as const real, byref u as const angleUnit => defaultAngleUnit, byref n2 as const real)
        if 0d <= n2 then
            this._a => wrap(angle.convert(n1, u, angleUnit.radian), two_pi)
            this._r => n2
        else
            this._a => wrap(angle.convert(n1, u, angleUnit.radian) + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    
    constructor pvec (byref a as const angle, byref n as const real)
        if 0d <= n then
            this._a => a.phi
            this._r => n
        else
            this._a => wrap(a.phi + pi, two_pi)
            this._r => -n
        end if
    end constructor
    
    #else
    
    constructor pvec (byref n as const real)
        this._a => wrap(n, two_pi)
    end constructor
    
    constructor pvec (byref n1 as const real, byref n2 as const real)
        if 0d <= n2 then
            this._a => wrap(n1, two_pi)
            this._r => n2
        else
            this._a => wrap(n1 + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    
    #endif
    
    constructor pvec (byref v as const vec2)
        this._a => v.phi
        this._r => v.norm
    end constructor
    
    constructor pvec (byref v as const pvec)
        this._a => v._a
        this._r => v._r
    end constructor
    
end namespace
