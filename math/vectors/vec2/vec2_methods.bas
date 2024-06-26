namespace math
    
' methods ======================================================================
    
' math.vec2.fromPolar ----------------------------------------------------------
    
    #ifdef _MATH_ANGLE_BI_
    
    function vec2.fromPolar overload (byref n1 as const real, byref n2 as const real) as vec2
        return vec2.fromPolar(n1, defaultAngleUnit, n2)
    end function
    
    #ifdef _MATH_RATIONAL_BI_
    function vec2.fromPolar (byref n1 as const real, byref r2 as const rational) as vec2
        return vec2.fromPolar(n1, defaultAngleUnit, m_crl(r2))
    end function
    
    function vec2.fromPolar (byref r1 as const rational, byref n2 as const real) as vec2
        return vec2.fromPolar(m_crl(r1), defaultAngleUnit, n2)
    end function
    
    function vec2.fromPolar (byref r1 as const rational, byref r2 as const rational) as vec2
        return vec2.fromPolar(m_crl(r1), defaultAngleUnit, m_crl(r2))
    end function
    #endif
    
    function vec2.fromPolar (byref n1 as const real, byref u as const angleUnit, byref n2 as const real) as vec2
        if 0d <= n2 then
            dim as real t => angle.convert(n1, u, angleUnit.radian)
            #ifdef MATH_FLIP_GRAPHICAL_PLANE
            return vec2(cos(t) * n2, -sin(t) * n2)
            #else
            return vec2(cos(t) * n2, sin(t) * n2)
            #endif
        else
            dim as real t => angle.convert(n1 + pi, u, angleUnit.radian), r => -n2
            #ifdef MATH_FLIP_GRAPHICAL_PLANE
            return vec2(cos(t) * r, -sin(t) * r)
            #else
            return vec2(cos(t) * r, sin(t) * r)
            #endif
        end if
    end function
    
    #ifdef _MATH_RATIONAL_BI_
    function vec2.fromPolar (byref n1 as const real, byref u as const angleUnit, byref r2 as const rational) as vec2
        return vec2.fromPolar(n1, u, m_crl(r2))
    end function
    
    function vec2.fromPolar (byref r1 as const rational, byref u as const angleUnit, byref n2 as const real) as vec2
        return vec2.fromPolar(m_crl(r1), u, n2)
    end function
    
    function vec2.fromPolar (byref r1 as const rational, byref u as const angleUnit, byref r2 as const rational) as vec2
        return vec2.fromPolar(m_crl(r1), u, m_crl(r2))
    end function
    #endif
    
    function vec2.fromPolar (byref a as const angle, byref n as const real) as vec2
        return vec2.fromPolar(a.theta, angleUnit.radian, n)
    end function
    
    #ifdef _MATH_RATIONAL_BI_
    function vec2.fromPolar (byref a as const angle, byref r as const rational) as vec2
        return vec2.fromPolar(a.theta, angleUnit.radian, m_crl(r))
    end function
    #endif
    
    #else
    
    #ifdef _MATH_RATIONAL_BI_
    function vec2.fromPolar overload (byref r1 as const rational, byref r2 as const rational) as vec2
        return vec2.fromPolar(m_crl(r1), m_crl(r2))
    end function
    
    function vec2.fromPolar (byref r1 as const rational, byref n2 as const real) as vec2
        return vec2.fromPolar(m_crl(r1), n2)
    end function
    
    function vec2.fromPolar (byref n1 as const real, byref r2 as const rational) as vec2
        return vec2.fromPolar(n1, m_crl(r2))
    end function
    #endif
    
    function vec2.fromPolar (byref n1 as const real, byref n2 as const real) as vec2
        if 0d <= n2 then
            #ifdef MATH_FLIP_GRAPHICAL_PLANE
            return vec2(cos(n1) * n2, -sin(n1) * n2)
            #else
            return vec2(cos(n1) * n2, sin(n1) * n2)
            #endif
        else
            dim as real t => n1 + pi, r => -n2
            #ifdef MATH_FLIP_GRAPHICAL_PLANE
            return vec2(cos(t) * r, -sin(t) * r)
            #else
            return vec2(cos(t) * r, sin(t) * r)
            #endif
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
    
    function vec2.MiNorm (byref e as const real => 2d) as real
        return iif(e, (abs(this.x) ^ e + abs(this.y) ^ e) ^ (1d / e), 0d)
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
    
    function vec2.random (byref n as const real) as vec2
        dim as real r => abs(n), t => math.random(two_pi)
        return vec2(r * cos(t), -r * sin(t))
    end function
    
    function vec2.random (byref n1 as const real, byref n2 as const real) as vec2
        return vec2(math.random(n1), math.random(n2))
    end function
    
    function vec2.random (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref n4 as const real) as vec2
        return vec2(math.random(n1, n2), math.random(n3, n4))
    end function
    
    #endif
    
' math.vec2.rotate -------------------------------------------------------------
    
    #ifdef _MATH_ANGLE_BI_
    
    sub vec2.rotate overload (byref n as const real, byref u as const angleUnit => defaultAngleUnit)
        math.zrot(this.x, this.y, angle.convert(n, u, angleUnit.radian))
    end sub
    
    #ifdef _MATH_RATIONAL_BI_
    sub vec2.rotate (byref r as const rational, byref u as const angleUnit => defaultAngleUnit)
        math.zrot(this.x, this.y, angle.convert(m_crl(r), u, angleUnit.radian))
    end sub
    #endif
    
    sub vec2.rotate (byref a as const math.angle)
        math.zrot(this.x, this.y, a.theta)
    end sub
    
    #else
    
    #ifdef _MATH_RATIONAL_BI_
    sub vec2.rotate overload (byref r as const rational)
        math.zrot(this.x, this.y, m_crl(r))
    end sub
    #endif
    
    sub vec2.rotate (byref n as const real)
        math.zrot(this.x, this.y, n)
    end sub
    
    #endif
    
' math.vec2.toJSON -------------------------------------------------------------
    
    function vec2.toJSON (byref a as const boolean => false) as string
        return iif(a, "["       & this.x &  ","       & this.y & "]", _
                     !"{\"x\":" & this.x & !",\"y\":" & this.y & "}")
    end function
    
' math.vec2.unitX --------------------------------------------------------------
    
    function vec2.unitX () as vec2
        return vec2(1d, 0d)
    end function
    
' math.vec2.unitY --------------------------------------------------------------
    
    function vec2.unitY () as vec2
        return vec2(0d, 1d)
    end function
    
end namespace
