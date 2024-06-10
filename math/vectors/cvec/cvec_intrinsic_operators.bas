namespace math
    
' operators ====================================================================
    
' math.cvec.+= -----------------------------------------------------------------
    
    
    
' math.cvec.-= -----------------------------------------------------------------
    
    
    
' math.cvec.*= -----------------------------------------------------------------
    
    
    
' math.cvec./= -----------------------------------------------------------------
    
    
    
' math.cvec.cast ---------------------------------------------------------------
    
    operator cvec.cast () as string
        #ifdef _MATH_ANGLE_BI_
        return "<math.cvec>{ phi : " & angle.render(this._a, angleUnit.radian) & " , rho : " & this._r & " , z : " & this.z & " }"
        #else
        return "<math.cvec>{ phi : " & this._a                                   " , rho : " & this._r & " , z : " & this.z & " }"
        #endif
    end operator
    
' math.cvec.let ----------------------------------------------------------------
    
    operator cvec.let (byref v as const vec2)
        this._a => v.phi
        this._r => v.norm
        this.z  => 0d
    end operator
    
    #ifdef _MATH_PVEC_BI_
    operator cvec.let (byref v as const pvec)
        this._a => v.phi
        this._r => v.rho
        this.z  => 0d
    end operator
    #endif
    
    operator cvec.let (byref v as const vec3)
        this._a => v.phi
        this._r => hypot(v.x, v.y)
        this.z  => v.z
    end operator
    
    operator cvec.let (byref v as const cvec)
        this._a => v._a
        this._r => v._r
        this.z  => v.z
    end operator
    
end namespace
