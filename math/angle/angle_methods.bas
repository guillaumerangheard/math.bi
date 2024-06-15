namespace math
    
' methods ======================================================================    
    
' math.angle.convert -----------------------------------------------------------
    
    function angle.convert (byref n as const real, byref u1 as const angleUnit, byref u2 as const angleUnit => defaultAngleUnit) as real
        return iif(u1 <> u2, n / angles(u1) * angles(u2), n)
    end function
    
' math.angle.isAcute -----------------------------------------------------------
    
    function angle.isAcute overload () as boolean
        return iif(this._v < 0.25d, true, false)
    end function
    
    function angle.isAcute (byref t as const real) as boolean
        return iif(abs(0.25d - this._v) <= abs(t), true, false)
    end function
    
' math.angle.isFull ------------------------------------------------------------
    
    function angle.isFull overload () as boolean
        return iif(1d = this._v, true, false)
    end function
    
    function angle.isFull (byref t as const real) as boolean
        return iif(abs(1d - this._v) <= abs(t), true, false)
    end function
    
' math.angle.isNull ------------------------------------------------------------
    
    function angle.isNull overload () as boolean
        return iif(0d = this._v, true, false)
    end function
    
    function angle.isNull (byref t as const real) as boolean
        return iif(this._v <= abs(t), true, false)
    end function
    
' math.angle.isOblique ---------------------------------------------------------
    
    function angle.isOblique overload () as boolean
        return iif(frac(this._v / 0.25d) > epsilon, true, false)
    end function
    
    function angle.isOblique (byref t as const real) as boolean
        return iif(frac(this._v / 0.25d) > abs(t), true, false)
    end function
    
' math.angle.isObtuse ----------------------------------------------------------
    
    function angle.isObtuse overload () as boolean
        return iif((0.25d < this._v) and (this._v < 0.5d), true, false)
    end function
    
    function angle.isObtuse (byref s as const real) as boolean
        dim as real t => abs(s)
        return iif((t < abs(0.25d - this._v)) and (t < abs(0.5d - this._v)), true, false)
    end function
    
' math.angle.isReflex ----------------------------------------------------------
    
    function angle.isReflex overload () as boolean
        return iif(0.5d < this._v, true, false)
    end function
    
    function angle.isReflex (byref t as const real) as boolean
        return iif(abs(t) < abs(0.5d - this._v), true, false)
    end function
    
' math.angle.isRight -----------------------------------------------------------
    
    function angle.isRight overload () as boolean
        return iif(0.25d = this._v, true, false)
    end function
    
    function angle.isRight (byref t as const real) as boolean
        return iif(abs(0.25d - this._v) <= abs(t), true, false)
    end function
    
' math.angle.isStraight --------------------------------------------------------
    
    function angle.isStraight overload () as boolean
        return iif(0.5d = this._v, true, false)
    end function
    
    function angle.isStraight (byref t as const real) as boolean
        return iif(abs(0.25d - this._v) <= abs(t), true, false)
    end function
    
' math.angle.ntant -------------------------------------------------------------
    
    function angle.ntant (byref n as const integer) as real
        return iif(2% <= n, iif(1d = this._v, 0d, this._v) * cdbl(n), -1d)
    end function
    
' math.angle.random ------------------------------------------------------------
    
    function angle.random overload () as angle
        return angle(math.random() * angles(defaultAngleUnit))
    end function
    
    function angle.random (byref n as const real) as angle
        return angle(math.random() * n)
    end function
    
    function angle.random (byref n as const real, byref u as const angleUnit) as angle
        return angle(math.random() * angle.convert(n, u))
    end function
    
    function angle.random (byref a as const angle) as angle
        return angle(math.random() * a._v * angles(defaultAngleUnit))
    end function
    
    function angle.random (byref n1 as const real, byref n2 as const real) as angle
        return angle(math.random(n1, n2))
    end function
    
    function angle.random (byref n1 as const real, byref n2 as const real, byref u2 as const angleUnit) as angle
        return angle(math.random(n1, angle.convert(n2, u2)))
    end function
    
    function angle.random (byref n1 as const real, byref a2 as const angle) as angle
        return angle(math.random(n1, a2._v * angles(defaultAngleUnit)))
    end function
    
    function angle.random (byref n1 as const real, byref u1 as const angleUnit, byref n2 as const real) as angle
        return angle(math.random(angle.convert(n1, u1), n2))
    end function
    
    function angle.random (byref n1 as const real, byref u1 as const angleUnit, byref n2 as const real, byref u2 as const angleUnit) as angle
        return angle(math.random(angle.convert(n1, u1), angle.convert(n2, u2)))
    end function
    
    function angle.random (byref n1 as const real, byref u1 as const angleUnit, byref a2 as const angle) as angle
        return angle(math.random(angle.convert(n1, u1), a2._v * angles(defaultAngleUnit)))
    end function
    
    function angle.random (byref a1 as const angle, byref n2 as const real) as angle
        return angle(math.random(a1._v * angles(defaultAngleUnit), n2))
    end function
    
    function angle.random (byref a1 as const angle, byref n2 as const real, byref u2 as const angleUnit) as angle
        return angle(math.random(a1._v * angles(defaultAngleUnit), angle.convert(n2, u2)))
    end function
    
    function angle.random (byref a1 as const angle, byref a2 as const angle) as angle
        return angle(math.random(a1._v * angles(defaultAngleUnit), a2._v * angles(defaultAngleUnit)))
    end function
    
' math.angle.render ------------------------------------------------------------
    
    function angle.render overload (byref n as const real) as string
        return n & " " & angleNames(defaultAngleUnit) & "(s)"
    end function
    
    function angle.render (byref n as const real, byref u as const angleUnit) as string
        return angle.convert(n, u, defaultAngleUnit) & " " & angleNames(defaultAngleUnit) & "(s)"
    end function
    
    function angle.render () as string
        return (this._v * angles(this.unit)) & " " & angleNames(this.unit) & "(s)"
    end function
    
end namespace
