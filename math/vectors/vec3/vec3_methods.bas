namespace math
    
' methods ======================================================================
    
' math.vec3.isNull -------------------------------------------------------------
    
    function vec3.isNull overload () as boolean
        return iif((0d = this.x) and (0d = this.y) and (0d = this.z), true, false)
    end function
    
    function vec3.isNull (byref s as const real) as boolean
        dim as real t => abs(s)
        return iif((abs(this.x) <= t) and (abs(this.y) <= t) and (abs(this.z) <= t), true, false)
    end function
    
' math.vec3.isUnit -------------------------------------------------------------
    
    function vec3.isUnit overload () as boolean
        return iif(1d = this.norm, true, false)
    end function
    
    function vec3.isUnit (byref t as const real) as boolean
        return iif(abs(1d - this.norm) <= abs(t), true, false)
    end function
    
' math.vec3.MiNorm -------------------------------------------------------------
    
    function vec3.MiNorm (byref e as const real => 2d) as real
        return iif(e, (abs(this.x) ^ e + _
                       abs(this.y) ^ e + _
                       abs(this.z) ^ e) ^ (1d / e) , 0d)
    end function
    
' math.vec3.normalise ----------------------------------------------------------
    
    sub vec3.normalise ()
        dim as real h => this.norm
        if (0d < h) and (1d <> h) then
            this.x /= h
            this.y /= h
            this.z /= h
        end if
    end sub
    
' math.vec3.toJSON -------------------------------------------------------------
    
    function vec3.toJSON (byref a as const boolean => false) as string
        return iif(a, "["       & this.x &  ","       & this.y &  ","       & this.z & "]", _
                     !"{\"x\":" & this.x & !",\"y\":" & this.y & !",\"z\":" & this.z & "}")
    end function
    
' math.vec3.unitX --------------------------------------------------------------
    
    function vec3.unitX () as vec3
        return vec3(1d, 0d, 0d)
    end function
    
' math.vec3.unitY --------------------------------------------------------------
    
    function vec3.unitY () as vec3
        return vec3(0d, 1d, 0d)
    end function
    
' math.vec3.unitZ --------------------------------------------------------------
    
    function vec3.unitZ () as vec3
        return vec3(0d, 0d, 1d)
    end function
    
' math.vec3.xRotate ------------------------------------------------------------
    
    
    
' math.vec3.yRotate ------------------------------------------------------------
    
    #ifdef _MATH_ANGLE_BI_
    
    sub vec3.yRotate overload (byref n as const real, byref u as const angleUnit => defaultAngleUnit)
        math.yrot(this.x, this.z, angle.convert(n, u, angleUnit.radian))
    end sub
    
    #ifdef _MATH_RATIONAL_BI_
    sub vec3.yRotate (byref r as const rational, byref u as const angleUnit => defaultAngleUnit)
        math.yrot(this.x, this.z, angle.convert(m_crl(r), u, angleUnit.radian))
    end sub
    #endif
    
    #else
    
    #ifdef _MATH_RATIONAL_BI_
    sub vec3.yRotate overload (byref r as const rational)
        math.yrot(this.x, this.z, m_crl(r))
    end sub
    #endif
    
    sub vec3.yRotate (byref n as const real)
        math.yrot(this.x, this.z, n)
    end sub
    
    #endif
    
' math.vec3.zRotate ------------------------------------------------------------
    
    #ifdef _MATH_ANGLE_BI_
    
    sub vec3.zRotate overload (byref n as const real, byref u as const angleUnit => defaultAngleUnit)
        math.zrot(this.x, this.y, angle.convert(n, u, angleUnit.radian))
    end sub
    
    #ifdef _MATH_RATIONAL_BI_
    sub vec3.zRotate (byref r as const rational, byref u as const angleUnit => defaultAngleUnit)
        math.zrot(this.x, this.y, angle.convert(m_crl(r), u, angleUnit.radian))
    end sub
    #endif
    
    sub vec3.zRotate (byref a as const angle)
        math.zrot(this.x, this.y, a.theta)
    end sub
    
    #else
    
    #ifdef _MATH_RATIONAL_BI_
    sub vec3.zRotate overload (byref r as const rational)
        math.zrot(this.x, this.y, m_crl(r))
    end sub
    #endif
    
    sub vec3.zRotate (byref n as const real)
        math.zrot(this.x, this.y, n)
    end sub
    
    #endif
    
end namespace
