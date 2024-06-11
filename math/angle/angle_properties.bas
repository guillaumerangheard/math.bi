namespace math
    
' properties ===================================================================
    
' math.angle.cosecant ----------------------------------------------------------
    
    property angle.cosecant () as real
        dim as real s => sin(this._v * two_pi)
        return iif(s, 1d / s, 0d)
    end property
    
' math.angle.cosine ------------------------------------------------------------
    
    property angle.cosine () as real
        return cos(this._v * two_pi)
    end property
    
' math.angle.cotangent ---------------------------------------------------------
    
    property angle.cotangent () as real
        dim as real t => tan(this._v * two_pi)
        return iif(t, 1d / t, 0d)
    end property
    
' math.angle.cosh --------------------------------------------------------------
    
    property angle.cosh () as real
        return math.cosh(this._v * two_pi)
    end property
    
' math.angle.covercosine -------------------------------------------------------
    
    property angle.covercosine () as real
        return 1d + sin(this._v * two_pi)
    end property
    
' math.angle.coversine ---------------------------------------------------------
    
    property angle.coversine () as real
        return 1d - sin(this._v * two_pi)
    end property
    
' math.angle.excosecant --------------------------------------------------------
    
    property angle.excosecant () as real
        return this.cosecant - 1d
    end property
    
' math.angle.exsecant ----------------------------------------------------------
    
    property angle.exsecant () as real
        return this.secant - 1d
    end property
    
' math.angle.hacovercosine -----------------------------------------------------
    
    property angle.hacovercosine () as real
        return (1d + sin(this._v * two_pi)) / 2d
    end property
    
' math.angle.hacoversine -------------------------------------------------------
    
    property angle.hacoversine () as real
        return (1d - sin(this._v * two_pi)) / 2d
    end property
    
' math.angle.havercosine -------------------------------------------------------
    
    property angle.havercosine () as real
        return (1d + cos(this._v * two_pi)) / 2d
    end property
    
' math.angle.haversine ---------------------------------------------------------
    
    property angle.haversine () as real
        return (1d - cos(this._v * two_pi)) / 2d
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
    
' math.angle.secant ------------------------------------------------------------
    
    property angle.secant () as real
        dim as real c => cos(this._v * two_pi)
        return iif(c, 1d / c, 0d)
    end property
    
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
    
' math.angle.vercosine ---------------------------------------------------------
    
    property angle.vercosine () as real
        return 1d + cos(this._v * two_pi)
    end property
    
' math.angle.versine -----------------------------------------------------------
    
    property angle.versine () as real
        return 1d - cos(this._v * two_pi)
    end property
    
end namespace
