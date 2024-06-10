namespace math
    
' properties ===================================================================
    
' math.angle.cosine ------------------------------------------------------------
    
    property angle.cosine () as real
        return cos(this._v * two_pi)
    end property
    
' math.angle.cosh --------------------------------------------------------------
    
    property angle.cosh () as real
        return math.cosh(this._v * two_pi)
    end property
    
' math.angle.octant ------------------------------------------------------------
    
    #macro a_nt(_a_,_b_)
    property angle.##_a_##ant () as real
        return iif(1d = this._v, 0d, this._v) * _b_
    end property
    #endmacro
    
    a_nt(oct,8d)
    
' math.angle.phi ---------------------------------------------------------------
    
    property angle.phi () as real
        return this._v * two_pi
    end property
    
    property angle.phi (byref n as const real)
        this._v => wrap(n / two_pi)
    end property
    
' math.angle.quadrant ----------------------------------------------------------
    
    a_nt(quadr,4d)
    
' math.angle.sextant -----------------------------------------------------------
    
    a_nt(sext,6d)
    
    #undef a_nt
    
' math.angle.sine --------------------------------------------------------------
    
    property angle.sine () as real
        return sin(this._v * two_pi)
    end property
    
' math.angle.sinh --------------------------------------------------------------
    
    property angle.sinh () as real
        return math.sinh(this._v * two_pi)
    end property
    
' math.angle.tangent -----------------------------------------------------------
    
    property angle.tangent () as real
        return tan(this._v * two_pi)
    end property
    
' math.angle.tanh --------------------------------------------------------------
    
    property angle.tanh () as real
        return math.tanh(this._v * two_pi)
    end property
    
' math.angle.value -------------------------------------------------------------
    
    property angle.value () as real
        return this._v
    end property
    
    property angle.value (byref n as const real)
        this._v => wrap(n)
    end property
    
end namespace
