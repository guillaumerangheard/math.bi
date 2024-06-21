namespace math
    
' properties ===================================================================
    
' math.vec3.ChNorm -------------------------------------------------------------
    
    property vec3.ChNorm () as real
        return max(abs(this.x), abs(this.y), abs(this.z))
    end property
    
' math.vec3.MaNorm -------------------------------------------------------------
    
    property vec3.MaNorm () as real
        return abs(this.x) + abs(this.y) + abs(this.z)
    end property
    
' math.vec3.norm ---------------------------------------------------------------
    
    property vec3.norm () as real
       return sqr(this.x * this.x + this.y * this.y + this.z * this.z)
    end property
    
    property vec3.norm (byref n as const real)
        if n then
            dim as real h => this.norm
            if h then
                this.x => this.x / h * n
                this.y => this.y / h * n
                this.z => this.z / h * n
            end if
        else
            this.x => 0d
            this.y => 0d
            this.z => 0d
        end if
    end property
    
' math.vec3.sqNorm -------------------------------------------------------------
    
    property vec3.sqNorm () as real
        return this.x * this.x + this.y * this.y + this.z * this.z
    end property
    
' math.vec3.theta --------------------------------------------------------------
    
    property vec3.theta () as real
        if this.x then
            if this.y then
                dim as real a => acos(x / hypot(this.x, this.y))
                return iif(0d < this.y, two_pi - a, a)
            end if
            return iif(0d <= this.x, 0d, pi)
        end if
        return iif(0d < this.y, half_pi, iif(this.y < 0d, pi * 1.5d, 0d))
    end property
    
    property vec3.theta (byref n as const real)
        dim as real h => hypot(this.x, this.y)
        if h then
            this.x =>  cos(n) * h
            this.y => -sin(n) * h
        end if
    end property
    
' math.vec3.xy -----------------------------------------------------------------
    
    property vec3.xy () as vec2
        return vec2(this.x, this.y)
    end property
    
    #macro v3_p(_t_)
    property vec3.xy (byref v as const _t_)
        this.x => v.x
        this.y => v.y
    end property
    #endmacro
    v3_p(vec2)
    #ifdef _MATH_PVEC_BI_
    v3_p(pvec)
    #endif
    #undef v3_p
    
end namespace
