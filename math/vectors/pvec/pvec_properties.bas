namespace math
    
' properties ===================================================================
    
' math.pvec.azimuth ------------------------------------------------------------
    
    #ifdef _MATH_ANGLE_BI_
    property pvec.azimuth () as angle
        return angle(this._a, angleUnit.radian)
    end property
    
    #ifdef _MATH_RATIONAL_BI_
    property pvec.azimuth (byref r as const rational)
        this._a => wrap(angle.convert(m_crl(r), defaultAngleUnit, angleUnit.radian), two_pi)
    end property
    #endif
    
    property pvec.azimuth (byref n as const real)
        this._a => wrap(angle.convert(n, defaultAngleUnit, angleUnit.radian), two_pi)
    end property
    
    property pvec.azimuth (byref a as const angle)
        this._a => a.theta
    end property
    #endif
    
' math.pvec.ChNorm -------------------------------------------------------------
    
    property pvec.ChNorm () as real
        return max(abs(cos(this._a)) * this._r, _
                   abs(sin(this._a)) * this._r)
    end property
    
' math.pvec.MaNorm -------------------------------------------------------------
    
    property pvec.MaNorm () as real
        return abs(cos(this._a)) * this._r + _
               abs(sin(this._a)) * this._r
    end property
    
' math.pvec.rho ----------------------------------------------------------------
    
    property pvec.rho () as real
        return this._r
    end property
    
    property pvec.rho (byref n as const real)
        if 0d <= n then
            this._r => n
        else
            this._a => wrap(this._a + pi, two_pi)
            this._r => -n
        end if
    end property
    
' math.pvec.sqNorm -------------------------------------------------------------
    
    property pvec.sqNorm () as real
        return this._r * this._r
    end property
    
' math.pvec.theta ----------------------------------------------------------------
    
    property pvec.theta () as real
        return this._a
    end property
    
    #ifdef _MATH_RATIONAL_BI_
    property pvec.theta (byref r as const rational)
        this._a => wrap(m_crl(r), two_pi)
    end property
    #endif
    
    property pvec.theta (byref n as const real)
        this._a => wrap(n, two_pi)
    end property
    
' math.pvec.x ------------------------------------------------------------------
    
    property pvec.x () as real
        return cos(this._a) * this._r
    end property
    
    property pvec.x (byref n as const real)
        #ifdef MATH_FLIP_GRAPHICAL_PLANE
        dim as real j => -sin(this._a) * this._r
        #else
        dim as real j => sin(this._a) * this._r
        #endif
        this._a => math.theta(n, j)
        this._r => math.hypot(n, j)
    end property
    
' math.pvec.y ------------------------------------------------------------------
    
    property pvec.y () as real
        #ifdef MATH_FLIP_GRAPHICAL_PLANE
        return -sin(this._a) * this._r
        #else
        return sin(this._a) * this._r
        #endif
    end property
    
    property pvec.y (byref n as const real)
        dim as real i => cos(this._a) * this._r
        this._a => math.theta(i, n)
        this._r => math.hypot(i, n)
    end property
    
end namespace
