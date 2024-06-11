namespace math
    
' functions ====================================================================
    
' math.eq ----------------------------------------------------------------------
    
    function eq (byref x1 as const real, byref y1 as const real, byref z1 as const real, byref w1 as const real, byref q2 as const quaternion, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(x1 - q2.x) <= t) and (abs(y1 - q2.y) <= t) and (abs(z1 - q2.z) <= t) and (abs(w1 - q2.w) <= t), true, false)
    end function
    
    function eq (byref q1 as const quaternion, byref x2 as const real, byref y2 as const real, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(q1.x - x2) <= t) and (abs(q1.y - y2) <= t) and (abs(q1.z - z2) <= t) and (abs(q1.w - w2) <= t), true, false)
    end function
    
    #macro q_e(_t_)
    function eq (byref v1 as const _t_, byref z1 as const real, byref w1 as const real, byref q2 as const quaternion, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - q2.x) <= t) and _
                   (abs(v1.y - q2.y) <= t) and _
                   (abs(z1 - q2.z) <= t) and _
                   (abs(w1 - q2.w) <= t), true, false)
    end function
    
    function eq (byref q1 as const quaternion, byref v2 as const _t_, byref z2 as const real, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(q1.x - v2.x) <= t) and _
                   (abs(q1.y - v2.y) <= t) and _
                   (abs(q1.z - z2) <= t) and _
                   (abs(q1.w - w2) <= t), true, false)
    end function
    #endmacro
    q_e(vec2)
    #ifdef _MATH_PVEC_BI_
    q_e(pvec)
    #endif
    #undef q_e
    
    #macro q_e(_t_)
    function eq (byref v1 as const _t_, byref w1 as const real, byref q2 as const quaternion, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(v1.x - q2.x) <= t) and (abs(v1.y - q2.y) <= t) and (abs(v1.z - q2.z) <= t) and (abs(w1 - q2.w) <= t), true, false)
    end function
    
    function eq (byref q1 as const quaternion, byref v2 as const _t_, byref w2 as const real, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(q1.x - v2.x) <= t) and (abs(q1.y - v2.y) <= t) and (abs(q1.z - v2.z) <= t) and (abs(q1.w - w2) <= t), true, false)
    end function
    #endmacro
    q_e(vec3)
    #ifdef _MATH_CVEC_BI_
    q_e(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    q_e(svec)
    #endif
    #undef q_e
    
    #macro q_e(_t1_,_t2_)
    function eq (byref q1 as const _t1_, byref q2 as const _t2_, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(q1.x - q2.x) <= t) and (abs(q1.y - q2.y) <= t) and (abs(q1.z - q2.z) <= t) and (abs(q1.w - q2.w) <= t), true, false)
    end function
    #endmacro
    q_e(vec4,quaternion)
    q_e(quaternion,vec4)
    q_e(quaternion,quaternion)
    #undef q_e
    
' math.slerp -------------------------------------------------------------------
    
    
    
end namespace
