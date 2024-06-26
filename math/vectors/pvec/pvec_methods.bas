namespace math
    
' methods ======================================================================
    
' math.pvec.fromCartesian ------------------------------------------------------
    
    function pvec.fromCartesian (byref n1 as const real, byref n2 as const real) as pvec
        #ifdef _MATH_ANGLE_BI_
        return pvec(math.theta(n1, n2), angleUnit.radian, math.hypot(n1, n2))
        #else
        return pvec(math.theta(n1, n2), math.hypot(n1, n2))
        #endif
    end function
    
' math.pvec.isNull -------------------------------------------------------------
    
    function pvec.isNull overload () as boolean
        return iif(0d = this._r, true, false)
    end function
    
    function pvec.isNull (byref t as const real) as boolean
        return iif(this._r <= abs(t), true, false)
    end function
    
' math.pvec.isUnit -------------------------------------------------------------
    
    function pvec.isUnit overload () as boolean
        return iif(1d = this._r, true, false)
    end function
    
    function pvec.isUnit (byref t as const real) as boolean
        return iif(abs(1d - this._r) <= abs(t), true, false)
    end function
    
' math.pvec.MiNorm -------------------------------------------------------------
    
    function pvec.MiNorm (byref e as const real => 2d) as real
        return iif(e, (abs(this.x) ^ e + abs(this.y) ^ e) ^ (1d / e), 0d)
    end function
    
' math.pvec.normalise ----------------------------------------------------------
    
    sub pvec.normalise ()
        this._r => 1d
    end sub
    
' math.pvec.random -------------------------------------------------------------
    
    #ifdef _RNG_BI_
    
    
    
    #endif
    
' math.pvec.toJSON -------------------------------------------------------------
    
    function pvec.toJSON (byref a as const boolean => false) as string
        return iif(a, "["           & this._a &  ","         & this._r & "]", _
                     !"{\"theta\":" & this._a & !",\"rho\":" & this._r & "}")
    end function
    
' math.pvec.unitX --------------------------------------------------------------
    
    function pvec.unitX () as pvec
        return pvec(0d, 1d)
    end function
    
' math.pvec.unitY --------------------------------------------------------------
    
    function pvec.unitY () as pvec
        #ifdef _MATH_ANGLE_BI_
        #ifdef MATH_FLIP_GRAPHICAL_PLANE
        return pvec(half_pi, angleUnit.radian, 1d)
        #else
        return pvec(pi + half_pi, angleUnit.radian, 1d)
        #endif
        #else
        #ifdef MATH_FLIP_GRAPHICAL_PLANE
        return pvec(half_pi, 1d)
        #else
        return pvec(pi + half_pi, 1d)
        #endif
        #endif
    end function
    
end namespace
