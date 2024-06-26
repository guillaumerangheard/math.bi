namespace math
    
' properties ===================================================================
    
' math.vec2.ChNorm -------------------------------------------------------------
    
    property vec2.ChNorm () as real
        return max(abs(this.x), abs(this.y))
    end property
    
' math.vec2.MaNorm -------------------------------------------------------------
    
    property vec2.MaNorm () as real
        return abs(this.x) + abs(this.y)
    end property
    
' math.vec2.norm ---------------------------------------------------------------
    
    property vec2.norm () as real
       return sqr(this.x * this.x + this.y * this.y)
    end property
    
    #ifdef _MATH_RATIONAL_BI_
    property vec2.norm (byref r as const rational)
        dim as real n => m_crl(r)
        if n then
            dim as real h => sqr(this.x * this.x + this.y * this.y)
            if h then
                this.x => this.x / h * n
                this.y => this.y / h * n
            end if
        else
            this.x => 0d
            this.y => 0d
        end if
    end property
    #endif
    
    property vec2.norm (byref n as const real)
        if n then
            dim as real h => sqr(this.x * this.x + this.y * this.y)
            if h then
                this.x => this.x / h * n
                this.y => this.y / h * n
            end if
        else
            this.x => 0d
            this.y => 0d
        end if
    end property
    
' math.vec2.sqNorm -------------------------------------------------------------
    
    property vec2.sqNorm () as real
        return this.x * this.x + this.y * this.y
    end property
    
' math.vec2.theta --------------------------------------------------------------
    
    property vec2.theta () as real
        if this.x then
            if this.y then
                dim as real a => acos(x / this.norm)
                return iif(0d < this.y, two_pi - a, a)
            end if
            return iif(0d <= this.x, 0d, pi)
        end if
        return iif(0d < this.y, half_pi, iif(this.y < 0d, pi * 1.5d, 0d))
    end property
    
    #ifdef _MATH_RATIONAL_BI_
    property vec2.theta (byref r as const rational)
        dim as real n => m_crl(r), _
                    h => this.norm
        if h then
            this.x => cos(n) * h
            #ifdef MATH_FLIP_GRAPHICAL_PLANE
            this.y => -sin(n) * h
            #else
            this.y => sin(n) * h
            #endif
        end if
    end property
    #endif
    
    property vec2.theta (byref n as const real)
        dim as real h => this.norm
        if h then
            this.x => cos(n) * h
            #ifdef MATH_FLIP_GRAPHICAL_PLANE
            this.y => -sin(n) * h
            #else
            this.y => sin(n) * h
            #endif
        end if
    end property
    
end namespace
