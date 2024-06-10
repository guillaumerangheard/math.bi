namespace math
    
' methods ======================================================================
    
' math.vec4.MiNorm -------------------------------------------------------------
    
    function vec4.MiNorm (byref e as const real => 2d) as real
        return iif(e, (abs(this.x) ^ e + _
                       abs(this.y) ^ e + _
                       abs(this.z) ^ e + _
                       abs(this.w) ^ e) ^ (1d / e), 0d)
    end function
    
' math.vec4.normalise ----------------------------------------------------------
    
    function vec4.normalise overload (byref n1 as const real, byref n2 as const real, byref n3 as const real, byref n4 as const real) as vec4
        dim as real h => hypot(n1, n2, n3, n4)
        return iif(h, vec4(n1 / h, n2 / h, n3 / h, n4 / h), vec4())
    end function
    
    function vec4.normalise (byref v as const vec2, byref n1 as const real, byref n2 as const real) as vec4
        dim as real h => hypot(v.x, v.y, n1, n2)
        return iif(h, vec4(v.x / h, v.y / h, n1 / h, n2 / h), vec4())
    end function
    
    #ifdef _MATH_PVEC_BI_
    function vec4.normalise (byref v as const pvec, byref n1 as const real, byref n2 as const real) as vec4
        dim as real i => v.x, j => v.y, h => hypot(i, j, n1, n2)
        return iif(h, vec4(i / h, j / h, n1 / h, n2 / h), vec4())
    end function
    #endif
    
    function vec4.normalise (byref v as const vec3, byref n as const real) as vec4
        dim as real h => hypot(v.x, v.y, v.z, n)
        return iif(h, vec4(v.x / h, v.y / h, v.z / h, n / h), vec4())
    end function
    
    #macro v4_n(_t_)
    function vec4.normalise (byref v as const _t_, byref n as const real) as vec4
        dim as real i => v.x, j => v.y, k => v.z, h => hypot(i, j, k, n)
        return iif(h, vec4(i / h, j / h, k / h, n / h), vec4())
    end function
    #endmacro
    #ifdef _MATH_CVEC_BI_
    v4_l(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    v4_l(svec)
    #endif
    #undef v4_n
    
    function vec4.normalise (byref v as const vec4) as vec4
        dim as real h => v.norm
        return iif(h, vec4(v.x / h, v.y / h, v.z / h, v.w / h), vec4())
    end function
    
    sub vec4.normalise ()
        dim as real h => this.norm
        if h then
            this.x /= h
            this.y /= h
            this.z /= h
            this.w /= h
        end if
    end sub
    
' math.vec4.toJSON -------------------------------------------------------------
    
    function vec4.toJSON (byref a as const boolean => false) as string
        return iif(a, "["       & this.x &  ","       & this.y &  ","       & this.z &  ","       & this.w & "]", _
                     !"{\"x\":" & this.x & !",\"y\":" & this.y & !",\"z\":" & this.z & !",\"w\":" & this.w & "}")
    end function
    
' math.vec4.unitX --------------------------------------------------------------
    
    function vec4.unitX () as vec4
        return vec4(1d, 0d, 0d, 0d)
    end function
    
' math.vec4.unitY --------------------------------------------------------------
    
    function vec4.unitY () as vec4
        return vec4(0d, 1d, 0d, 0d)
    end function
    
' math.vec4.unitZ --------------------------------------------------------------
    
    function vec4.unitZ () as vec4
        return vec4(0d, 0d, 1d, 0d)
    end function
    
' math.vec4.unitW --------------------------------------------------------------
    
    function vec4.unitW () as vec4
        return vec4(0d, 0d, 0d, 1d)
    end function
    
end namespace
