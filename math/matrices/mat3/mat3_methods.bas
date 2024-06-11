namespace math
    
' methods ======================================================================
    
' math.mat3.fromScale ----------------------------------------------------------
    
    function mat3.fromScale overload (byref s as const real) as mat3
        dim as mat3 r
        r._p[0%] => s
        r._p[4%] => s
        r._p[8%] => s
        return r
    end function
    
    function mat3.fromScale overload (byref sx as const real, byref sy as const real, byref sz as const real => 1d) as mat3
        dim as mat3 r
        r._p[0%] => sx
        r._p[4%] => sy
        r._p[8%] => sz
        return r
    end function
    
' math.mat3.get ----------------------------------------------------------------
    
    function mat3.get (byref x as const integer, byref y as const integer) as real
        return iif((0% <= x) and (x < 3%) and (0% <= y) and (y < 3%), this._p[x + y * 3%], 0d)
    end function
    
' math.mat3.getColumn ----------------------------------------------------------
    
    function mat3.getColumn (byref x as const integer) as vec3
        select case x
        case 0%   : return vec3(this._p[0%], this._p[3%], this._p[6%])
        case 1%   : return vec3(this._p[1%], this._p[4%], this._p[7%])
        case 2%   : return vec3(this._p[2%], this._p[5%], this._p[8%])
        case else : return vec3()
        end select
    end function
    
' math.mat3.getRow -------------------------------------------------------------
    
    function mat3.getRow (byref y as const integer) as vec3
        select case y
        case 0%   : return vec3(this._p[0%], this._p[1%], this._p[2%])
        case 1%   : return vec3(this._p[3%], this._p[4%], this._p[5%])
        case 2%   : return vec3(this._p[6%], this._p[7%], this._p[8%])
        case else : return vec3()
        end select
    end function
    
' math.mat3.set ----------------------------------------------------------------
    
    function mat3.set (byref x as const integer, byref y as const integer, byref n as const real) as boolean
        if (0% <= x) and (x < 3%) and (0% <= y) and (y < 3%) then
            this._p[x + y * 3%] => n
            return true
        end if
        return false
    end function
    
' math.mat3.setColumn ----------------------------------------------------------
    
    function mat3.setColumn overload (byref x as const integer, byref n1 as const real, byref n2 as const real, byref n3 as const real) as boolean
        select case x
        case 0%   : this._p[0%] => n1 : this._p[3%] => n2 : this._p[6%] => n3
        case 1%   : this._p[1%] => n1 : this._p[4%] => n2 : this._p[7%] => n3
        case 2%   : this._p[2%] => n1 : this._p[5%] => n2 : this._p[8%] => n3
        case else : return false
        end select
        return true
    end function
    
    #macro m3_sc(_t_)
    function mat3.setColumn (byref x as const integer, byref v as const _t_, byref n as const real) as boolean
        select case x
        case 0%   : this._p[0%] => v.x : this._p[3%] => v.y : this._p[6%] => n
        case 1%   : this._p[1%] => v.x : this._p[4%] => v.y : this._p[7%] => n
        case 2%   : this._p[2%] => v.x : this._p[5%] => v.y : this._p[8%] => n
        case else : return false
        end select
        return true
    end function
    #endmacro
    m3_sc(vec2)
    #ifdef _MATH_PVEC_BI_
    m3_sc(pvec)
    #endif
    #undef m3_sc
    
    #macro m3_sc(_t_)
    function mat3.setColumn (byref x as const integer, byref v as const _t_) as boolean
        select case x
        case 0%   : this._p[0%] => v.x : this._p[3%] => v.y : this._p[6%] => v.z
        case 1%   : this._p[1%] => v.x : this._p[4%] => v.y : this._p[7%] => v.z
        case 2%   : this._p[2%] => v.x : this._p[5%] => v.y : this._p[8%] => v.z
        case else : return false
        end select
        return true
    end function
    #endmacro
    m3_sc(vec3)
    #ifdef _MATH_CVEC_BI_
    m3_sc(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    m3_sc(svec)
    #endif
    #undef m3_sc
    
' math.mat3.setRow -------------------------------------------------------------
    
    function mat3.setRow overload (byref y as const integer, byref n1 as const real, byref n2 as const real, byref n3 as const real) as boolean
        select case y
        case 0%   : this._p[0%] => n1 : this._p[1%] => n2 : this._p[2%] => n3
        case 1%   : this._p[3%] => n1 : this._p[4%] => n2 : this._p[5%] => n3
        case 2%   : this._p[6%] => n1 : this._p[7%] => n2 : this._p[8%] => n3
        case else : return false
        end select
        return true
    end function
    
    #macro m3_sr(_t_)
    function mat3.setRow (byref y as const integer, byref v as const _t_, byref n as const real) as boolean
        select case y
        case 0%   : this._p[0%] => v.x : this._p[1%] => v.y : this._p[2%] => n
        case 1%   : this._p[3%] => v.x : this._p[4%] => v.y : this._p[5%] => n
        case 2%   : this._p[6%] => v.x : this._p[7%] => v.y : this._p[8%] => n
        case else : return false
        end select
        return true
    end function
    #endmacro
    m3_sr(vec2)
    #ifdef _MATH_PVEC_BI_
    m3_sr(pvec)
    #endif
    #undef m3_sr
    
    #macro m3_sr(_t_)
    function mat3.setRow (byref y as const integer, byref v as const _t_) as boolean
        select case y
        case 0%   : this._p[0%] => v.x : this._p[1%] => v.y : this._p[2%] => v.z
        case 1%   : this._p[3%] => v.x : this._p[4%] => v.y : this._p[5%] => v.z
        case 2%   : this._p[6%] => v.x : this._p[7%] => v.y : this._p[8%] => v.z
        case else : return false
        end select
        return true
    end function
    #endmacro
    m3_sr(vec3)
    #ifdef _MATH_CVEC_BI_
    m3_sr(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    m3_sr(svec)
    #endif
    #undef m3_sr
    
end namespace
