namespace math
    
' methods ======================================================================
    
' math.mat4.fromScale ----------------------------------------------------------
    
    function mat4.fromScale overload (byref s as const real) as mat4
        dim as mat4 r
        r._p[0%]  => s
        r._p[5%]  => s
        r._p[10%] => s
        r._p[15%] => s
        return r
    end function
    
    function mat4.fromScale (byref sx as const real, byref sy as const real, byref sz as const real => 1d) as mat4
        dim as mat4 r
        r._p[0%]  => sx
        r._p[5%]  => sy
        r._p[10%] => sz
        return r
    end function
    
' math.mat4.fromTranslation ----------------------------------------------------
    
    function mat4.fromTranslation overload (byref tx as const real, byref ty as const real, byref tz as const real) as mat4
        dim as mat4 r
        r._p[3%]  => tx
        r._p[7%]  => ty
        r._p[11%] => tz
        return r
    end function
    
    #macro m4_ft(_t_)
    function mat4.fromTranslation (byref t as const _t_, byref tz as const real => 0d) as mat4
        dim as mat4 r
        r._p[3%]  => t.x
        r._p[7%]  => t.y
        r._p[11%] => tz
        return r
    end function
    #endmacro
    m4_ft(vec2)
    #ifdef _MATH_PVEC_BI_
    m4_ft(pvec)
    #endif
    #undef m4_ft
    
    #macro m4_ft(_t_)
    function mat4.fromTranslation (byref t as const _t_) as mat4
        dim as mat4 r
        r._p[3%]  => t.x
        r._p[7%]  => t.y
        r._p[11%] => t.z
        return r
    end function
    #endmacro
    m4_ft(vec3)
    #ifdef _MATH_CVEC_BI_
    m4_ft(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    m4_ft(svec)
    #endif
    #undef m4_ft
    
' math.mat4.get ----------------------------------------------------------------
    
    function mat4.get (byref x as const integer, byref y as const integer) as real
        return iif((0% <= x) and (x < 4%) and (0% <= y) and (y < 4%), this._p[x + y * 4%], 0d)
    end function
    
' math.mat4.getColumn ----------------------------------------------------------
    
    function mat4.getColumn (byref x as const integer) as vec4
        select case x
        case 0%   : return vec4(this._p[0%], this._p[4%], this._p[8%] , this._p[12%])
        case 1%   : return vec4(this._p[1%], this._p[5%], this._p[9%] , this._p[13%])
        case 2%   : return vec4(this._p[2%], this._p[6%], this._p[10%], this._p[14%])
        case 3%   : return vec4(this._p[3%], this._p[7%], this._p[11%], this._p[15%])
        case else : return vec4()
        end select
    end function
    
' math.mat4.getRow -------------------------------------------------------------
    
    function mat4.getRow (byref y as const integer) as vec4
        select case y
        case 0%   : return vec4(this._p[0%] , this._p[1%] , this._p[2%] , this._p[3%])
        case 1%   : return vec4(this._p[4%] , this._p[5%] , this._p[6%] , this._p[7%])
        case 2%   : return vec4(this._p[8%] , this._p[9%] , this._p[10%], this._p[11%])
        case 3%   : return vec4(this._p[12%], this._p[13%], this._p[14%], this._p[15%])
        case else : return vec4()
        end select
    end function
    
' math.mat4.set ----------------------------------------------------------------
    
    function mat4.set (byref x as const integer, byref y as const integer, byref n as const real) as boolean
        if (0% <= x) and (x < 4%) and (0% <= y) and (y < 4%) then
            this._p[x + y * 4%] => n
            return true
        end if
        return false
    end function
    
' math.mat4.setColumn ----------------------------------------------------------
    
    function mat4.setColumn overload (byref x as const integer, byref n1 as const real, byref n2 as const real, byref n3 as const real, byref n4 as const real) as boolean
        select case x
        case 0%   : this._p[0%] => n1 : this._p[4%] => n2 : this._p[8%]  => n3 : this._p[12%] => n4
        case 1%   : this._p[1%] => n1 : this._p[5%] => n2 : this._p[9%]  => n3 : this._p[13%] => n4
        case 2%   : this._p[2%] => n1 : this._p[6%] => n2 : this._p[10%] => n3 : this._p[14%] => n4
        case 3%   : this._p[3%] => n1 : this._p[7%] => n2 : this._p[11%] => n3 : this._p[15%] => n4
        case else : return false
        end select
        return true
    end function
    
    #macro m4_sc(_t_)
    function mat4.setColumn (byref x as const integer, byref v as const _t_, byref n1 as const real, byref n2 as const real) as boolean
        select case x
        case 0%   : this._p[0%] => v.x : this._p[4%] => v.y : this._p[8%]  => n1 : this._p[12%] => n2
        case 1%   : this._p[1%] => v.x : this._p[5%] => v.y : this._p[9%]  => n1 : this._p[13%] => n2
        case 2%   : this._p[2%] => v.x : this._p[6%] => v.y : this._p[10%] => n1 : this._p[14%] => n2
        case 3%   : this._p[3%] => v.x : this._p[7%] => v.y : this._p[11%] => n1 : this._p[15%] => n2
        case else : return false
        end select
        return true
    end function
    #endmacro
    m4_sc(vec2)
    #ifdef _MATH_PVEC_BI_
    m4_sc(pvec)
    #endif
    #undef m4_sc
    
    #macro m4_sc(_t_)
    function mat4.setColumn (byref x as const integer, byref v as const _t_, byref n as const real) as boolean
        select case x
        case 0%   : this._p[0%] => v.x : this._p[4%] => v.y : this._p[8%]  => v.z : this._p[12%] => n
        case 1%   : this._p[1%] => v.x : this._p[5%] => v.y : this._p[9%]  => v.z : this._p[13%] => n
        case 2%   : this._p[2%] => v.x : this._p[6%] => v.y : this._p[10%] => v.z : this._p[14%] => n
        case 3%   : this._p[3%] => v.x : this._p[7%] => v.y : this._p[11%] => v.z : this._p[15%] => n
        case else : return false
        end select
        return true
    end function
    #endmacro
    m4_sc(vec3)
    #ifdef _MATH_CVEC_BI_
    m4_sc(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    m4_sc(svec)
    #endif
    #undef m4_sc
    
    function mat4.setColumn (byref x as const integer, byref v as const vec4) as boolean
        select case x
        case 0%   : this._p[0%] => v.x : this._p[4%] => v.y : this._p[8%]  => v.z : this._p[12%] => v.w
        case 1%   : this._p[1%] => v.x : this._p[5%] => v.y : this._p[9%]  => v.z : this._p[13%] => v.w
        case 2%   : this._p[2%] => v.x : this._p[6%] => v.y : this._p[10%] => v.z : this._p[14%] => v.w
        case 3%   : this._p[3%] => v.x : this._p[7%] => v.y : this._p[11%] => v.z : this._p[15%] => v.w
        case else : return false
        end select
        return true
    end function
    
' math.mat4.setRow -------------------------------------------------------------
    
    function mat4.setRow overload (byref y as const integer, byref n1 as const real, byref n2 as const real, byref n3 as const real, byref n4 as const real) as boolean
        select case y
        case 0%   : this._p[0%]  => n1 : this._p[1%]  => n2 : this._p[2%]  => n3 : this._p[3%]  => n4
        case 1%   : this._p[4%]  => n1 : this._p[5%]  => n2 : this._p[6%]  => n3 : this._p[7%]  => n4
        case 2%   : this._p[8%]  => n1 : this._p[9%]  => n2 : this._p[10%] => n3 : this._p[11%] => n4
        case 3%   : this._p[12%] => n1 : this._p[11%] => n2 : this._p[14%] => n3 : this._p[15%] => n4
        case else : return false
        end select
        return true
    end function
    
    #macro m4_sr(_t_)
    function mat4.setRow (byref y as const integer, byref v as const _t_, byref n1 as const real, byref n2 as const real) as boolean
        select case y
        case 0%   : this._p[0%]  => v.x : this._p[1%]  => v.y : this._p[2%]  => n1 : this._p[3%]  => n2
        case 1%   : this._p[4%]  => v.x : this._p[5%]  => v.y : this._p[6%]  => n1 : this._p[7%]  => n2
        case 2%   : this._p[8%]  => v.x : this._p[9%]  => v.y : this._p[10%] => n1 : this._p[11%] => n2
        case 3%   : this._p[12%] => v.x : this._p[11%] => v.y : this._p[14%] => n1 : this._p[15%] => n2
        case else : return false
        end select
        return true
    end function
    #endmacro
    m4_sr(vec2)
    #ifdef _MATH_PVEC_BI_
    m4_sr(pvec)
    #endif
    #undef m4_sr
    
    #macro m4_sr(_t_)
    function mat4.setRow (byref y as const integer, byref v as const _t_, byref n as const real) as boolean
        select case y
        case 0%   : this._p[0%]  => v.x : this._p[1%]  => v.y : this._p[2%]  => v.z : this._p[3%]  => n
        case 1%   : this._p[4%]  => v.x : this._p[5%]  => v.y : this._p[6%]  => v.z : this._p[7%]  => n
        case 2%   : this._p[8%]  => v.x : this._p[9%]  => v.y : this._p[10%] => v.z : this._p[11%] => n
        case 3%   : this._p[12%] => v.x : this._p[11%] => v.y : this._p[14%] => v.z : this._p[15%] => n
        case else : return false
        end select
        return true
    end function
    #endmacro
    m4_sr(vec3)
    #ifdef _MATH_CVEC_BI_
    m4_sr(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    m4_sr(svec)
    #endif
    #undef m4_sr
    
    function mat4.setRow (byref y as const integer, byref v as const vec4) as boolean
        select case y
        case 0%   : this._p[0%]  => v.x : this._p[1%]  => v.y : this._p[2%]  => v.z : this._p[3%]  => v.w
        case 1%   : this._p[4%]  => v.x : this._p[5%]  => v.y : this._p[6%]  => v.z : this._p[7%]  => v.w
        case 2%   : this._p[8%]  => v.x : this._p[9%]  => v.y : this._p[10%] => v.z : this._p[11%] => v.w
        case 3%   : this._p[12%] => v.x : this._p[11%] => v.y : this._p[14%] => v.z : this._p[15%] => v.w
        case else : return false
        end select
        return true
    end function
    
end namespace
