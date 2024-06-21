namespace math
    
' operators, continued =========================================================
    
' + ----------------------------------------------------------------------------
    
    #ifdef MATH_FORCE_CARTESIAN
    
    #macro pv_op1(_o_)
    operator _o_ (byref v1 as const vec2, byref v2 as const pvec) as vec2
        return vec2(v1.x _o_ v2.x, v1.y _o_ v2.y)
    end operator
    
    operator _o_ (byref v1 as const pvec, byref v2 as const vec2) as vec2
        return vec2(v1.x _o_ v2.x, v1.y _o_ v2.y)
    end operator
    #endmacro
    
    #else
    
    #macro pv_op1(_o_)
    operator _o_ (byref v1 as const vec2, byref v2 as const pvec) as pvec
        dim as real i => v1.x _o_ v2.x, j => v1.y _o_ v2.y
        #ifdef _MATH_ANGLE_BI_
        return pvec(math.theta(i, j), angleUnit.radian, math.hypot(i, j))
        #else
        return pvec(math.theta(i, j), math.hypot(i, j))
        #endif
    end operator
    
    operator _o_ (byref v1 as const pvec, byref v2 as const vec2) as pvec
        dim as real i => v1.x _o_ v2.x, j => v1.y _o_ v2.y
        #ifdef _MATH_ANGLE_BI_
        return pvec(math.theta(i, j), angleUnit.radian, math.hypot(i, j))
        #else
        return pvec(math.theta(i, j), math.hypot(i, j))
        #endif
    end operator
    #endmacro
    
    #endif
    
    #macro pv_op2(_o_)
    operator _o_ (byref v1 as const pvec, byref v2 as const pvec) as pvec
        dim as real i => v1.x _o_ v2.x, j => v1.y _o_ v2.y
        #ifdef _MATH_ANGLE_BI_
        return pvec(math.theta(i, j), angleUnit.radian, math.hypot(i, j))
        #else
        return pvec(math.theta(i, j), math.hypot(i, j))
        #endif
    end operator
    #endmacro
    
    pv_op1(+)
    pv_op2(+)
    
' - ----------------------------------------------------------------------------
    
    pv_op1(-)
    pv_op2(-)
    
' * ----------------------------------------------------------------------------
    
    operator * (byref v as const pvec, byref n as const real) as pvec
        if 0d < n then
            #ifdef _MATH_ANGLE_BI_
            return pvec(v.theta, angleUnit.radian, v.rho * n)
            #else
            return pvec(v.theta, v.rho * n)
            #endif
        elseif n < 0d then
            #ifdef _MATH_ANGLE_BI_
            return pvec(v.theta + pi, angleUnit.radian, v.rho * -n)
            #else
            return pvec(v.theta + pi, v.rho * -n)
            #endif
        end if
        return pvec()
    end operator
    
    operator * (byref n as const real, byref v as const pvec) as pvec
        if 0d < n then
            #ifdef _MATH_ANGLE_BI_
            return pvec(v.theta, angleUnit.radian, n * v.rho)
            #else
            return pvec(v.theta, n * v.rho)
            #endif
        elseif n < 0d then
            #ifdef _MATH_ANGLE_BI_
            return pvec(v.theta + pi, angleUnit.radian, n * v.rho)
            #else
            return pvec(v.theta + pi, n * v.rho)
            #endif
        end if
        return pvec()
    end operator
    
    pv_op1(*)
    pv_op2(*)
    #undef pv_op
    
' / ----------------------------------------------------------------------------
    
    operator / (byref v as const pvec, byref n as const real) as pvec
        if 0d < n then
            #ifdef _MATH_ANGLE_BI_
            return pvec(v.theta, angleUnit.radian, v.rho / n)
            #else
            return pvec(v.theta, v.rho / n)
            #endif
        elseif n < 0d then
            #ifdef _MATH_ANGLE_BI_
            return pvec(v.theta + pi, angleUnit.radian, v.rho / -n)
            #else
            return pvec(v.theta + pi, v.rho / -n)
            #endif
        end if
        return pvec()
    end operator
    
    #ifdef MATH_FORCE_CARTESIAN
    
    operator / (byref v1 as const vec2, byref v2 as const pvec) as vec2
        return iif(v.rho, vec2(v1.x / v2.x, v1.y / v2.y), vec2())
    end operator
    
    operator / (byref v1 as const pvec, byref v2 as const vec2) as vec2
        return vec2(iif(v2.x, v1.x / v2.x, 0d), _
                    iif(v2.y, v1.y / v2.y, 0d))
    end operator
    
    #else
    
    operator / (byref v1 as const vec2, byref v2 as const pvec) as pvec
        if v2.rho then
            dim as real i => v1.x / v2.x, j => v1.y / v2.y
            #ifdef _MATH_ANGLE_BI_
            return pvec(math.theta(i, j), angleUnit.radian, math.hypot(i, j))
            #else
            return pvec(math.theta(i, j), math.hypot(i, j))
            #endif
        end if
        return pvec()
    end operator
    
    #endif
    
    operator / (byref v1 as const pvec, byref v2 as const pvec) as pvec
        dim as real x2 => v2.x, y2 => v2.y
        if x2 then
            if y2 then
                dim as real i => v1.x / x2, j => v1.y / y2
                #ifdef _MATH_ANGLE_BI_
                return pvec(math.theta(i, j), angleUnit.radian, math.hypot(i, j))
                #else
                return pvec(math.theta(i, j), math.hypot(i, j))
                #endif
            else
                dim as real i => v1.x / x2
                #ifdef _MATH_ANGLE_BI_
                return iif(0d <= i, pvec(0d, i), pvec(half_tau, -i))
                #else
                return iif(0d <= i, pvec(0d, i), pvec(half_pi, -i))
                #endif
            end if
        else
            if y2 then
                dim as real j => v1.y / y2
                #ifdef _MATH_ANGLE_BI_
                return iif(0d <= j, pvec(quarter_tau, j), pvec(tau * 1.5d, -j))
                #else
                return iif(0d <= j, pvec(half_pi, j), pvec(pi * 1.5d, -j))
                #endif
            else
                return pvec()
            end if
        end if
    end operator
    
' = ----------------------------------------------------------------------------
    
    operator = (byref v1 as const pvec, byref v2 as const pvec) as boolean
        return iif((v1.theta = v2.theta) and (v1.rho = v2.rho), true, false)
    end operator
    
' <> ---------------------------------------------------------------------------
    
    operator <> (byref v1 as const pvec, byref v2 as const pvec) as boolean
        return iif((v1.theta <> v2.theta) or (v1.rho <> v2.rho), true, false)
    end operator
    
end namespace
