namespace math
    
' methods ======================================================================
    
' math.vec3.MiNorm -------------------------------------------------------------
    
    function vec3.MiNorm (byref e as const real => 2d) as real
        return iif(e, (abs(this.x) ^ e + _
                       abs(this.y) ^ e + _
                       abs(this.z) ^ e) ^ (1d / e) , 0d)
    end function
    
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
    
end namespace
