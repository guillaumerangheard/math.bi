namespace math
    
' properties ===================================================================
    
' math.angle.chord -------------------------------------------------------------
    
    property angle.chord () as real
        return 2d * sin(this._v * pi)
    end property
    
' math.angle.cosine ------------------------------------------------------------
    
    property angle.cosine () as real
        return cos(this._v * two_pi)
    end property
    
' math.angle.cosecant ----------------------------------------------------------
    
    property angle.cosecant () as real
        return csec(this._v * two_pi)
    end property
    
' math.angle.cotangent ---------------------------------------------------------
    
    property angle.cotangent () as real
        return cot(this._v * two_pi)
    end property
    
' math.angle.covercosine -------------------------------------------------------
    
    property angle.covercosine () as real
        return 1d + sin(this._v * two_pi)
    end property
    
' math.angle.coversine ---------------------------------------------------------
    
    property angle.coversine () as real
        return 1d - sin(this._v * two_pi)
    end property
    
' math.angle.hacovercosine -----------------------------------------------------
    
    property angle.hacovercosine () as real
        return (1d + sin(this._v * two_pi)) * 0.5d
    end property
    
' math.angle.hacoversine -------------------------------------------------------
    
    property angle.hacoversine () as real
        return (1d - sin(this._v * two_pi)) * 0.5d
    end property
    
' math.angle.havercosine -------------------------------------------------------
    
    property angle.havercosine () as real
        return (1d + cos(this._v * two_pi)) * 0.5d
    end property
    
' math.angle.haversine ---------------------------------------------------------
    
    property angle.haversine () as real
        return (1d - cos(this._v * two_pi)) * 0.5d
    end property
    
' math.angle.phi ---------------------------------------------------------------
    
    property angle.phi () as real
        return this._v * two_pi
    end property
    
    property angle.phi (byref n as const real)
        this._v => wrap(n / two_pi)
    end property
    
' math.angle.quadrant ----------------------------------------------------------
    
    property angle.quadrant () as real
        if this._v < 0.25d then return 0d
        if this._v < 0.5d  then return 1d
        if this._v < 0.75d then return 2d
        return 3d
    end property
    
' math.angle.secant ------------------------------------------------------------
    
    property angle.secant () as real
        return sec(this._v * two_pi)
    end property
    
' math.angle.sine --------------------------------------------------------------
    
    property angle.sine () as real
        return sin(this._v * two_pi)
    end property
    
' math.angle.tangent -----------------------------------------------------------
    
    property angle.tangent () as real
        return tan(this._v * two_pi)
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
