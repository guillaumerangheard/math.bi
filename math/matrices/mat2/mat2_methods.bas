namespace math
    
' methods ======================================================================
    
' math.mat2.get ----------------------------------------------------------------
    
    function mat2.get (byref x as const integer, byref y as const integer) as real
        return iif((0% <= x) and (x < 2%) and (0% <= y) and (y < 2%), this._p[x + y * 2%], 0d)
    end function
    
' math.mat2.getColumn ----------------------------------------------------------
    
    function mat2.getColumn (byref x as const integer) as vec2
        select case x
        case 0%   : return vec2(this._p[0%], this._p[2%])
        case 1%   : return vec2(this._p[1%], this._p[3%])
        case else : return vec2()
        end select
    end function
    
' math.mat2.getRow -------------------------------------------------------------
    
    function mat2.getRow (byref y as const integer) as vec2
        select case y
        case 0%   : return vec2(this._p[0%], this._p[1%])
        case 1%   : return vec2(this._p[2%], this._p[3%])
        case else : return vec2()
        end select
    end function
    
' math.mat2.set ----------------------------------------------------------------
    
    function mat2.set (byref x as const integer, byref y as const integer, byref n as const real) as boolean
        if (0% <= x) and (x < 2%) and (0% <= y) and (y < 2%) then
            this._p[x + y * 2%] => n
            return true
        end if
        return false
    end function
    
' math.mat2.setColumn ----------------------------------------------------------
    
    function mat2.setColumn overload (byref x as const integer, byref n1 as const real, byref n2 as const real) as boolean
        select case x
        case 0%   : this._p[0%] => n1 : this._p[2%] => n2
        case 1%   : this._p[1%] => n1 : this._p[3%] => n2
        case else : return false
        end select
        return true
    end function
    
    function mat2.setColumn overload (byref x as const integer, byref v as const vec2) as boolean
        select case x
        case 0%   : this._p[0%] => v.x : this._p[2%] => v.y
        case 1%   : this._p[1%] => v.x : this._p[3%] => v.y
        case else : return false
        end select
        return true
    end function
    
    #ifdef _MATH_PVEC_BI_
    function mat2.setColumn overload (byref x as const integer, byref v as const pvec) as boolean
        select case x
        case 0%   : this._p[0%] => v.x : this._p[2%] => v.y
        case 1%   : this._p[1%] => v.x : this._p[3%] => v.y
        case else : return false
        end select
        return true
    end function
    #endif
    
' math.mat2.setRow -------------------------------------------------------------
    
    function mat2.setRow overload (byref y as const integer, byref n1 as const real, byref n2 as const real) as boolean
        select case y
        case 0%   : this._p[0%] => n1 : this._p[1%] => n2
        case 1%   : this._p[2%] => n1 : this._p[3%] => n2
        case else : return false
        end select
        return true
    end function
    
    function mat2.setRow overload (byref y as const integer, byref v as const vec2) as boolean
        select case y
        case 0%   : this._p[0%] => v.x : this._p[1%] => v.y
        case 1%   : this._p[2%] => v.x : this._p[3%] => v.y
        case else : return false
        end select
        return true
    end function
    
    #ifdef _MATH_PVEC_BI_
    function mat2.setRow overload (byref y as const integer, byref v as const pvec) as boolean
        select case y
        case 0%   : this._p[0%] => v.x : this._p[1%] => v.y
        case 1%   : this._p[2%] => v.x : this._p[3%] => v.y
        case else : return false
        end select
        return true
    end function
    #endif
    
end namespace
