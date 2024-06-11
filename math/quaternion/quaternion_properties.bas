namespace math
    
' properties ===================================================================
    
' math.quaternion.conjugate ----------------------------------------------------
    
    property quaternion.conjugate () as quaternion
        return quaternion(-this.x, -this.y, -this.z, this.w)
    end property
    
' math.quaternion.inverse ------------------------------------------------------
    
    property quaternion.inverse () as quaternion
        dim as real h => this.norm
        return iif(0d < h, quaternion(-this.x / h, -this.y / h, -this.z / h, this.w / h), quaternion())
    end property
    
' math.quaternion.norm ---------------------------------------------------------
    
    property quaternion.norm () as real
        return sqr(this.x * this.x + this.y * this.y + this.z * this.z + this.w * this.w)
    end property
    
    property quaternion.norm (byref n as const real)
        if 0d < n then
            dim as real h => sqr(this.x * this.x + this.y * this.y + this.z * this.z + this.w * this.w)
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
    
' math.quaternion.versor -------------------------------------------------------
    
    property quaternion.versor () as quaternion
        dim as real h => this.norm
        return iif(h, quaternion(this.x / h, this.y / h, this.z / h, this.w / h), quaternion())
    end property
    
' math.quaternion.xy -----------------------------------------------------------
    
    property quaternion.xy () as vec2
        return vec2(this.x, this.y)
    end property
    
    #macro q_xy(_t_)
    property quaternion.xy (byref v as const _t_)
        this.x => v.x
        this.y => v.y
    end property
    #endmacro
    q_xy(vec2)
    #ifdef _MATH_PVEC_BI_
    q_xy(pvec)
    #endif
    #undef q_xy
    
' math.quaternion.xyz ----------------------------------------------------------
    
    property quaternion.xyz () as vec3
        return vec3(this.x, this.y, this.z)
    end property
    
    #macro q_xyz(_t_)
    property quaternion.xyz (byref v as const _t_)
        this.x => v.x
        this.y => v.y
        this.z => v.z
    end property
    #endmacro
    q_xyz(vec3)
    #ifdef _MATH_CVEC_BI_
    q_xyz(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    q_xyz(svec)
    #endif
    #undef q_xyz
    
end namespace
