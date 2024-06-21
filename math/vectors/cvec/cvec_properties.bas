namespace math
    
' properties ===================================================================
    
' math.cvec.ChNorm -------------------------------------------------------------
    
    property cvec.ChNorm () as real
        return max(abs(cos(this._a) * this._r), _
                   abs(sin(this._a) * this._r), _
                   abs(this.z))
    end property
    
' math.cvec.MaNorm -------------------------------------------------------------
    
    property cvec.MaNorm () as real
        return abs(cos(this._a) * this._r) + _
               abs(sin(this._a) * this._r) + _
               abs(this.z)
    end property
    
' math.cvec.norm ---------------------------------------------------------------
    
    property cvec.norm () as real
        dim as real i =>  cos(this._a) * this._r, _
                    j => -sin(this._a) * this._r
        return sqr(i * i + j * j + this.z * this.z)
    end property
    
' math.cvec.rho ----------------------------------------------------------------
    
    property cvec.rho () as real
        return this_r
    end property
    
    property cvec.rho (byref n as const real)
        if 0d <= n then
            this._r => n
        else
            this._a => wrap(this._r + pi, two_pi)
            this._r => -n
        end if
    end property
    
' math.cvec.sqNorm -------------------------------------------------------------
    
    property cvec.sqNorm () as real
        dim as real i =>  cos(this._a) * this._r, _
                    j => -sin(this._a) * this._r
        return i * i + j * j + this.z * this.z
    end property
    
' math.cvec.theta --------------------------------------------------------------
    
    property cvec.theta () as real
        if this.x then
            if this.y then
                dim as real a => acos(x / hypot(this.x, this.y))
                return iif(0d < this.y, two_pi - a, a)
            end if
            return iif(0d <= this.x, 0d, pi)
        end if
        return iif(0d < this.y, half_pi, iif(this.y < 0d, pi * 1.5d, 0d))
    end property
    
    property cvec.theta (byref n as const real)
        dim as real h => hypot(this.x, this.y)
        if h then
            this.x =>  cos(n) * h
            this.y => -sin(n) * h
        end if
    end property
    
' math.cvec.x ------------------------------------------------------------------
    
    property cvec.x () as real
        return cos(this._a) * this._r
    end property
    
    property cvec.x (byref n as const real)
        dim as real j => -sin(this._a) * this._r
        this._a => math.phi(n, j)
        this._r => hypot(n, j)
    end property
    
' math.cvec.xy -----------------------------------------------------------------
    
    property cvec.xy () as vec2
        return vec2(cos(this._a * this._r, -sin(this._a) * this._r)
    end property
    
    property cvec.xy (byref v as const vec2)
        this._a => v.phi
        this._r => v.norm
    end property
    
    #ifdef _MATH_PVEC_BI_
    property cvec.xy (byref v as const pvec)
        this._a => v.phi
        this._r => v.rho
    end property
    #endif
    
' math.cvec.y ------------------------------------------------------------------
    
    property cvec.y () as real
        return -sin(this._a) * this._r
    end property
    
    property cvec.y (byref n as const real)
        dim as real i => cos(this._a) * this._r
        this._a => math.phi(i, n)
        this._r => hypot(i, n)
    end property
    
end namespace
