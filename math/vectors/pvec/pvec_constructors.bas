namespace math
    
' constructors =================================================================
    
    constructor pvec ()
        ' Empty.
    end constructor
    
    #ifdef _MATH_ANGLE_BI_
    
    #ifdef _MATH_RATIONAL_BI_
    constructor pvec (byref r as const rational, byref u as const angleUnit => defaultAngleUnit)
        this._a => wrap(angle.convert(m_crl(r), u, angleUnit.radian), two_pi)
    end constructor
    #endif
    
    constructor pvec (byref n as const real, byref u as const angleUnit => defaultAngleUnit)
        this._a => wrap(angle.convert(n, u, angleUnit.radian), two_pi)
    end constructor
    
    constructor pvec (byref a as const angle)
        this._a => a.theta
    end constructor
    
    #ifdef _MATH_RATIONAL_BI_
    constructor pvec (byref r1 as const rational, byref r2 as const rational)
        dim as real n1 => m_crl(r1), n2 => m_crl(r2)
        if 0d <= n2 then
            this._a => wrap(angle.convert(n1, defaultAngleUnit, angleUnit.radian), two_pi)
            this._r => n2
        else
            this._a => wrap(angle.convert(n1, defaultAngleUnit, angleUnit.radian) + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    
    constructor pvec (byref r1 as const rational, byref n2 as const real)
        dim as real n1 => m_crl(r1)
        if 0d <= n2 then
            this._a => wrap(angle.convert(n1, defaultAngleUnit, angleUnit.radian), two_pi)
            this._r => n2
        else
            this._a => wrap(angle.convert(n1, defaultAngleUnit, angleUnit.radian) + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    
    constructor pvec (byref n1 as const real, byref r2 as const rational)
        dim as real n2 => m_crl(r2)
        if 0d <= n2 then
            this._a => wrap(angle.convert(n1, defaultAngleUnit, angleUnit.radian), two_pi)
            this._r => n2
        else
            this._a => wrap(angle.convert(n1, defaultAngleUnit, angleUnit.radian) + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    #endif
    
    constructor pvec (byref n1 as const real, byref n2 as const real)
        if 0d <= n2 then
            this._a => wrap(angle.convert(n1, defaultAngleUnit, angleUnit.radian), two_pi)
            this._r => n2
        else
            this._a => wrap(angle.convert(n1, defaultAngleUnit, angleUnit.radian) + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    
    #ifdef _MATH_RATIONAL_BI_
    constructor pvec (byref r1 as const rational, byref u as const angleUnit, byref r2 as const rational)
        dim as real n1 => m_crl(r1), n2 => m_crl(r2)
        if 0d <= n2 then
            this._a => wrap(angle.convert(n1, u, angleUnit.radian), two_pi)
            this._r => n2
        else
            this._a => wrap(angle.convert(n1, u, angleUnit.radian) + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    
    constructor pvec (byref r1 as const rational, byref u as const angleUnit, byref n2 as const real)
        dim as real n1 => m_crl(r1)
        if 0d <= n2 then
            this._a => wrap(angle.convert(n1, u, angleUnit.radian), two_pi)
            this._r => n2
        else
            this._a => wrap(angle.convert(n1, u, angleUnit.radian) + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    
    constructor pvec (byref n1 as const real, byref u as const angleUnit, byref r2 as const rational)
        dim as real n2 => m_crl(r2)
        if 0d <= n2 then
            this._a => wrap(angle.convert(n1, u, angleUnit.radian), two_pi)
            this._r => n2
        else
            this._a => wrap(angle.convert(n1, u, angleUnit.radian) + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    #endif
    
    constructor pvec (byref n1 as const real, byref u as const angleUnit, byref n2 as const real)
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
            this._a => a.theta
            this._r => n
        else
            this._a => wrap(a.theta + pi, two_pi)
            this._r => -n
        end if
    end constructor
    
    #else
    
    #ifdef _MATH_RATIONAL_BI_
    constructor pvec (byref r as const rational)
        this._a => wrap(m_crl(r), two_pi)
    end constructor
    #endif
    
    constructor pvec (byref n as const real)
        this._a => wrap(n, two_pi)
    end constructor
    
    #ifdef _MATH_RATIONAL_BI_
    constructor pvec (byref r1 as const rational, byref r2 as const rational)
        dim as real n1 => m_crl(r1), n2 => m_crl(r2)
        if 0d <= n2 then
            this._a => wrap(n1, two_pi)
            this._r => n2
        else
            this._a => wrap(n1 + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    
    constructor pvec (byref r1 as const rational, byref n2 as const real)
        dim as real n1 => m_crl(r1)
        if 0d <= n2 then
            this._a => wrap(n1, two_pi)
            this._r => n2
        else
            this._a => wrap(n1 + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    
    constructor pvec (byref n1 as const real, byref r2 as const rational)
        dim as real n2 => m_crl(r2)
        if 0d <= n2 then
            this._a => wrap(n1, two_pi)
            this._r => n2
        else
            this._a => wrap(n1 + pi, two_pi)
            this._r => -n2
        end if
    end constructor
    #endif
    
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
        this._a => v.theta
        this._r => v.norm
    end constructor
    
    constructor pvec (byref v as const pvec)
        this._a => v._a
        this._r => v._r
    end constructor
    
end namespace
