namespace math
    
' methods ======================================================================
    
' math.vec4.isNull -------------------------------------------------------------
    
    function vec4.isNull overload () as boolean
        return iif(0d = this.norm, true, false)
    end function
    
    function vec4.isNull (byref t as const real) as boolean
        return iif(this.norm <= abs(t), true, false)
    end function
    
' math.vec4.isUnit -------------------------------------------------------------
    
    function vec4.isUnit overload () as boolean
        return iif(1d = this.norm, true, false)
    end function
    
    function vec4.isUnit (byref t as const real) as boolean
        return iif(abs(1d - this.norm) <= abs(t), true, false)
    end function
    
' math.vec4.MiNorm -------------------------------------------------------------
    
    function vec4.MiNorm (byref e as const real => 2d) as real
        return iif(e, (abs(this.x) ^ e + _
                       abs(this.y) ^ e + _
                       abs(this.z) ^ e + _
                       abs(this.w) ^ e) ^ (1d / e), 0d)
    end function
    
' math.vec4.normalise ----------------------------------------------------------
    
    sub vec4.normalise ()
        dim as real h => this.norm
        if (0d < h) and (h <> 1d) then
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
