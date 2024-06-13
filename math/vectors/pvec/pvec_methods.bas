namespace math
    
' methods ======================================================================
    
' math.pvec.fromCartesian ------------------------------------------------------
    
    function pvec.fromCartesian (byref n1 as const real, byref n2 as const real) as pvec
        #ifdef _MATH_ANGLE_BI_
        return pvec(math.phi(n1, n2), angleUnit.radian, math.hypot(n1, n2))
        #else
        return pvec(math.phi(n1, n2), math.hypot(n1, n2))
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
        if e then
            dim as real i =>  cos(this._a) * this._r, j => -sin(this._a) * this._r
            return (abs(i) ^ e + abs(j) ^ e) ^ (1d / e)
        end if
        return 0d
    end function
    
' math.pvec.normalise ----------------------------------------------------------
    
    sub pvec.normalise ()
        this._r => 1d
    end sub
    
' math.pvec.random -------------------------------------------------------------
    
    #ifdef _MATH_ANGLE_BI_
    
    function pvec.random overload () as pvec
        return pvec(math.random(tau), 1d)
    end function
    
    function pvec.random (byref a1 as const real, byref a2 as const real, byref r1 as const real, byref r2 as const real) as pvec
        dim as real a => math.random(a1, a2), r => math.random(r1, r2)
        return iif(r < 0d, pvec(a + pi, -r), pvec(a, r))
    end function
    
    function pvec.random (byref a1 as const real, byref a2 as const real, byref u2 as const angleUnit, byref r1 as const real, byref r2 as const real) as pvec
        dim as real a => math.random(a1, angle.convert(a2, u2, defaultAngleUnit)), r => math.random(r1, r2)
        return iif(r < 0d, pvec(a + pi, -r), pvec(a, r))
    end function
    
    function pvec.random (byref a1 as const real, byref a2 as const angle, byref r1 as const real, byref r2 as const real) as pvec
        dim as real a => math.random(a1, a2.value * angles(defaultAngleUnit)), r => math.random(r1, r2)
        return iif(r < 0d, pvec(a + pi, -r), pvec(a, r))
    end function
    
    function pvec.random (byref a1 as const real, byref u1 as const angleUnit, byref a2 as const real, byref r1 as const real, byref r2 as const real) as pvec
        dim as real a => math.random(angle.convert(a1, u1, defaultAngleUnit), a2), r => math.random(r1, r2)
        return iif(r < 0d, pvec(a + pi, -r), pvec(a, r))
    end function
    
    function pvec.random (byref a1 as const real, byref u1 as const angleUnit, byref a2 as const real, byref u2 as const angleUnit, byref r1 as const real, byref r2 as const real) as pvec
        dim as real a => math.random(angle.convert(a1, u1, defaultAngleUnit), angle.convert(a2, u2, defaultAngleUnit)), r => math.random(r1, r2)
        return iif(r < 0d, pvec(a + pi, -r), pvec(a, r))
    end function
    
    function pvec.random (byref a1 as const real, byref u1 as const angleUnit, byref a2 as const angle, byref r1 as const real, byref r2 as const real) as pvec
        dim as real a => math.random(angle.convert(a1, u1, defaultAngleUnit), a2.value * angles(defaultAngleUnit)), r => math.random(r1, r2)
        return iif(r < 0d, pvec(a + pi, -r), pvec(a, r))
    end function
    
    function pvec.random (byref a1 as const angle, byref a2 as const real, byref r1 as const real, byref r2 as const real) as pvec
        dim as real a => math.random(a1.value * angles(defaultAngleUnit), a2), r => math.random(r1, r2)
        return iif(r < 0d, pvec(a + pi, -r), pvec(a, r))
    end function
    
    function pvec.random (byref a1 as const angle, byref a2 as const real, byref u2 as const angleUnit, byref r1 as const real, byref r2 as const real) as pvec
        dim as real a => math.random(a1.value * angles(defaultAngleUnit), angle.convert(a2, u2, defaultAngleUnit)), r => math.random(r1, r2)
        return iif(r < 0d, pvec(a + pi, -r), pvec(a, r))
    end function
    
    function pvec.random (byref a1 as const angle, byref a2 as const angle, byref r1 as const real, byref r2 as const real) as pvec
        dim as real a => math.random(a1.value * angles(defaultAngleUnit), a2.value * angles(defaultAngleUnit)), r => math.random(r1, r2)
        return iif(r < 0d, pvec(a + pi, -r), pvec(a, r))
    end function
    
    #else
    
    function pvec.random overload () as pvec
        return pvec(math.random(two_pi), 1d)
    end function
    
    function pvec.random (byref a1 as const real, byref a2 as const real, byref r1 as const real, byref r2 as const real) as pvec
        dim as real a => math.random(a1, a2), r => math.random(r1, r2)
        return iif(r < 0d, pvec(a + pi, -r), pvec(a, r))
    end function
    
    #endif
    
' math.pvec.toJSON -------------------------------------------------------------
    
    function pvec.toJSON (byref a as const boolean => false) as string
        return iif(a, "["         & this._a &  ","         & this._r & "]", _
                     !"{\"phi\":" & this._a & !",\"rho\":" & this._r & "}")
    end function
    
' math.pvec.unitX --------------------------------------------------------------
    
    function pvec.unitX () as pvec
        return pvec(0d, 1d)
    end function
    
' math.pvec.unitY --------------------------------------------------------------
    
    function pvec.unitY () as pvec
        #ifdef _MATH_ANGLE_BI_
        return pvec(1.5d * tau, 1d)
        #else
        return pvec(1.5d * two_pi, 1d)
        #endif
    end function
    
end namespace
