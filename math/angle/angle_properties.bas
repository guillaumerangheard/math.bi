namespace math
    
' properties ===================================================================
    
' math.angle.quadrant ----------------------------------------------------------
    
    property angle.quadrant () as real
        if this._v < 0.25d then return 0d
        if this._v < 0.5d  then return 1d
        if this._v < 0.75d then return 2d
        return 3d
    end property
    
' math.angle.theta -------------------------------------------------------------
    
    property angle.theta () as real
        return this._v * two_pi
    end property
    
    property angle.theta (byref n as const real)
        this._v => wrap(n / two_pi)
    end property
    
' math.angle.value -------------------------------------------------------------
    
    property angle.value () as real
        return this._v
    end property
    
    property angle.value (byref n as const real)
        this._v => wrap(n)
    end property
    
end namespace
