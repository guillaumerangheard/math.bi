namespace math
    
' methods ======================================================================
    
' math.vec2.fromPolar ----------------------------------------------------------
    
    #ifdef _MATH_ANGLE_BI_
    
    function vec2.fromPolar (byref n1 as const real, byref n2 as const real) as vec2
        if 0d <= n2 then
            dim as real t => angle.convert(n1, defaultAngleUnit, angleUnit.radian)
            return vec2(cos(t) * n2, -sin(t) * n2)
        else
            dim as real t => angle.convert(n1 + pi, defaultAngleUnit, angleUnit.radian), r => -n2
            return vec2(cos(t) * r, -sin(t) * r)
        end if
    end function
    
    function vec2.fromPolar (byref n1 as const real, byref u as const angleUnit, byref n2 as const real) as vec2
        if 0d <= n2 then
            dim as real t => angle.convert(n1, u, angleUnit.radian)
            return vec2(cos(t) * n2, -sin(t) * n2)
        else
            dim as real t => angle.convert(n1 + pi, u, angleUnit.radian), r => -n2
            return vec2(cos(t) * r, -sin(t) * r)
        end if
    end function
    
    function vec2.fromPolar (byref a as const angle, byref n as const real) as vec2
        if 0d <= n then
            return vec2(a.cosine * n, -a.sine * n)
        else
            dim as real t => a.phi + pi, r => -n
            return vec2(cos(t) * r, -sin(t) * r)
        end if
    end function
    
    #else
    
    function vec2.fromPolar (byref n1 as const real, byref n2 as const real) as vec2
        if 0d <= n2 then
            return vec2(cos(n1) * n2, -sin(n1) * n2)
        else
            dim as real t => n1 + pi, r => -n2
            return vec2(cos(t) * r, -sin(t) * r)
        end if
    end function
    
    #endif
    
' math.vec2.isNull -------------------------------------------------------------
    
    function vec2.isNull overload () as boolean
        return iif((0d = this.x) and (0d = this.y), true, false)
    end function
    
    function vec2.isNull (byref s as const real) as boolean
        dim as real t => abs(s)
        return iif((abs(this.x) <= t) and (abs(this.y) <= t), true, false)
    end function
    
' math.vec2.isUnit -------------------------------------------------------------
    
    function vec2.isUnit overload () as boolean
        return iif(1d = this.norm, true, false)
    end function
    
    function vec2.isUnit (byref t as const real) as boolean
        return iif(abs(1d - this.norm) <= abs(t), true, false)
    end function
    
' math.vec2.MiNorm -------------------------------------------------------------
    
    function vec2.MiNorm (byref e as const real => 2.0) as real
        return iif(e, (abs(this.x) ^ e + abs(this.y) ^ e) ^ (1.0 / e), 0.0)
    end function
    
' math.vec2.normalise ----------------------------------------------------------
    
    sub vec2.normalise ()
        dim as real h => this.norm
        if (0d < h) and (h <> 1d) then
            this.x /= h
            this.y /= h
        end if
    end sub
    
' math.vec2.random -------------------------------------------------------------
    
    #ifdef _RNG_BI_
    function vec2.random () as vec2
        dim as real t => math.random(two_pi)
        return vec2(cos(t), -sin(t))
    end function
    
    function vec2.random (n as const real) as vec2
        dim as real t => math.random(two_pi)
        return vec2(abs(n) * cos(t), -abs(n) * sin(t))
    end function
    
    function vec2.random (byref n1 as const real, byref n2 as const real) as vec2
        return vec2(math.random(n1), math.random(n2))
    end function
    
    function vec2.random (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref n4 as const real) as vec2
        return vec2(math.random(n1, n2), math.random(n3, n4))
    end function
    #endif
    
' math.vec2.rotate -------------------------------------------------------------
    
    #ifndef _MATH_ANGLE_BI_
    
    function vec2.rotate overload (byref n1 as const real, byref n2 as const real, byref n3 as const real) as vec2
        dim as real c => cos(n3), s => sin(n3)
        return vec2(c * n1 - s * n2, s * n1 + c * n2)
    end function
    
    function vec2.rotate (byref v as const vec2, byref n as const real) as vec2
        dim as real c => cos(n), s => sin(n)
        return vec2(c * v.x - s * v.y, s * v.x + c * v.y)
    end function
    
    sub vec2.rotate (byref n as const real)
        dim as real c => cos(n), s => sin(n), _
                    i => c * this.x - s * this.y, _
                    j => s * this.x + c * this.y
        this.x => i
        this.y => j
    end sub
    
    #else
    
    function vec2.rotate overload (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref u as const angleUnit => defaultAngleUnit) as vec2
        dim as real t => angle.convert(n3, u, angleUnit.radian), _
                    c => cos(t), s => sin(t)
        return vec2(c * n1 - s * n2, s * n1 + c * n2)
    end function
    
    function vec2.rotate (byref v as const vec2, byref n as const real, byref u as const angleUnit => defaultAngleUnit) as vec2
        dim as real t => angle.convert(n, u, angleUnit.radian), _
                    c => cos(t), s => sin(t)
        return vec2(c * v.x - s * v.y, s * v.x + c * v.y)
    end function
    
    function vec2.rotate (byref v as const vec2, byref a as const math.angle) as vec2
        dim as real c => a.cosine, s => a.sine
        return vec2(c * v.x - s * v.y, s * v.x + c * v.y)
    end function
    
    sub vec2.rotate (byref n as const real, byref u as const angleUnit => defaultAngleUnit)
        dim as real t => angle.convert(n, u, angleUnit.radian), _
                    c => cos(t), s => cos(t), _
                    i => c * this.x - s * this.y, _
                    j => s * this.x + c * this.y
        this.x => i
        this.y => j
    end sub
    
    sub vec2.rotate (byref a as const math.angle)
        dim as real c => a.cosine, s => a.sine, _
                    i => c * this.x - s * this.y, _
                    j => s * this.x + c * this.y
        this.x => i
        this.y => j
    end sub
    
    #endif
    
' math.vec2.toJSON -------------------------------------------------------------
    
    function vec2.toJSON (byref a as const boolean => false) as string
        return iif(a, "["       & this.x &  ","       & this.y & "]", _
                     !"{\"x\":" & this.x & !",\"y\":" & this.y & "}")
    end function
    
' math.vec2.unitX --------------------------------------------------------------
    
    function vec2.unitX () as vec2
        return vec2(1.0, 0.0)
    end function
    
' math.vec2.unitY --------------------------------------------------------------
    
    function vec2.unitY () as vec2
        return vec2(0.0, 1.0)
    end function
    
end namespace
