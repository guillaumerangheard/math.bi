namespace math
    
' properties ===================================================================    
    
' math.vec4.ChNorm -------------------------------------------------------------
    
    property vec4.ChNorm () as real
        return max(abs(this.x), _
                   abs(this.y), _
                   abs(this.z), _
                   abs(this.w))
    end property
    
' math.vec4.MaNorm -------------------------------------------------------------
    
    property vec4.MaNorm () as real
        return abs(this.x) + _
               abs(this.y) + _
               abs(this.z) + _
               abs(this.w)
    end property
    
' math.vec4.norm ---------------------------------------------------------------
    
    property vec4.norm () as real
        return sqr(this.x * this.x + _
                   this.y * this.y + _
                   this.z * this.z * _
                   this.w * this.w)
    end property
    
    #ifdef _MATH_RATIONAL_BI_
    property vec4.norm (byref r as const rational)
        dim as real n => m_crl(r)
        if n then
            dim as real h => this.norm
            if h then
                this.x => this.x / h * n
                this.y => this.y / h * n
                this.z => this.z / h * n
                this.w => this.w / h * n
            end if
        else
            this.x => 0d
            this.y => 0d
            this.z => 0d
            this.w => 0d
        end if
    end property
    #endif
    
    property vec4.norm (byref n as const real)
        if n then
            dim as real h => this.norm
            if h then
                this.x => this.x / h * n
                this.y => this.y / h * n
                this.z => this.z / h * n
                this.w => this.w / h * n
            end if
        else
            this.x => 0d
            this.y => 0d
            this.z => 0d
            this.w => 0d
        end if
    end property
    
' math.vec4.sqNorm -------------------------------------------------------------
    
    property vec4.sqNorm () as real
        return this.x * this.x + _
               this.y * this.y + _
               this.z * this.z * _
               this.w * this.w
    end property
    
' math.vec4.theta --------------------------------------------------------------
    
    property vec4.theta () as real
        return math.theta(this.x, this.y)
    end property
    
    #ifdef _MATH_RATIONAL_BI_
    property vec4.theta (byref r as const rational)
        dim as real h => hypot(this.x, this.y)
        if h then
            dim as real n => m_crl(r)
            this.x => cos(n) * h
            #ifdef MATH_FLIP_GRAPHICAL_PLANE
            this.y => -sin(n) * h
            #else
            this.y => sin(n) * h
            #endif
        end if
    end property
    #endif
    
    property vec4.theta (byref n as const real)
        dim as real h => hypot(this.x, this.y)
        if h then
            this.x =>  cos(n) * h
            #ifdef MATH_FLIP_GRAPHICAL_PLANE
            this.y => -sin(n) * h
            #else
            this.y => sin(n) * h
            #endif
        end if
    end property
    
' math.vec4.xy -----------------------------------------------------------------
    
    property vec4.xy () as vec2
        return vec2(this.x, this.y)
    end property
    
    #macro v4_xy(_t_)
    property vec4.xy (byref v as const _t_)
        this.x => v.x
        this.y => v.y
    end property
    #endmacro
    v4_xy(vec2)
    #ifdef _MATH_PVEC_BI_
    v4_xy(pvec)
    #endif
    #undef v4_xy
    
' math.vec4.xyz ----------------------------------------------------------------
    
    property vec4.xyz () as vec3
        return vec3(this.x, this.y, this.z)
    end property
    
    #macro v4_xyz(_t_)
    property vec4.xyz (byref v as const _t_)
        this.x => v.x
        this.y => v.y
        this.z => v.z
    end property
    #endmacro
    v4_xyz(vec3)
    #ifdef _MATH_CVEC_BI_
    v4_xyz(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    v4_xyz(svec)
    #endif
    #undef v4_xyz
    
end namespace
