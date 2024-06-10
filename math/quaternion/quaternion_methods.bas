namespace math
    
' methods ======================================================================
    
' math.quaternion.isUnit -------------------------------------------------------
    
    function quaternion.isUnit overload () as boolean
        return iif(1d = this.norm, true, false)
    end function
    
    function quaternion.isUnit (byref t as const real) as boolean
        return iif(abs(1d - this.norm) <= abs(t), true, false)
    end function
    
' math.quaternion.normalise ----------------------------------------------------
    
    sub quaternion.normalise ()
        dim as real h => this.norm
        if (0d < h) and (1d <> h) then
            this.x /= h
            this.y /= h
            this.z /= h
            this.w /= h
        end if
    end sub
    
' math.quaternion.toJSON -------------------------------------------------------
    
    function quaternion.toJSON (byref a as const boolean => false) as string
        return iif(a, "["       & this.x &  ","       & this.y &  ","       & this.z &  ","       & this.w & "]", _
                     !"{\"x\":" & this.x & !",\"y\":" & this.y & !",\"z\":" & this.z & !",\"w\":" & this.w & "}")
    end function
    
end namespace
