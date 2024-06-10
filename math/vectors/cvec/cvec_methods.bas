namespace math
    
' methods ======================================================================
    
' math.cvec.MiNorm -------------------------------------------------------------
    
    function cvec.MiNorm (byref e as const real) as real
        return iif(e, (abs(cos(this._a) * this._r) ^ e + _
                       abs(sin(this._a) * this._r) ^ e + _
                       abs(this.z)                 ^ e) ^ (1d / e), 0d)
    end function
    
' math.cvec.toJSON -------------------------------------------------------------
    
    function cvec.toJSON (byref a as const boolean => false) as string
        return iif(a, "["         & this._a &  ","         & this._r &  ","       & this.z & "]", _
                     !"{\"phi\":" & this._a & !",\"rho\":" & this._r & !",\"z\":" & this.z & "}")
    end function
    
' math.cvec.unitX --------------------------------------------------------------
    
    function cvec.unitX () as cvec
        return cvec(0d, 1d, 0d)
    end function
    
' math.cvec.unitY --------------------------------------------------------------
    
    function cvec.unitY () as cvec
        #ifdef _MATH_ANGLE_BI_
        return cvec(half_tau * 1.5d, 1d, 0d)
        #else
        return cvec(pi * 1.5d, 1d, 0d)
        #endif
    end function
    
' math.cvec.unitZ --------------------------------------------------------------
    
    function cvec.unitZ () as cvec
        return cvec(0d, 0d, 1d)
    end function
    
end namespace
