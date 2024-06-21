namespace math
    
' functions ====================================================================
    
' math.cmp ---------------------------------------------------------------------
    
    function cmp (byref q1 as const quaternion, byref q2 as const quaternion, byref s as const real => epsilon) as boolean
        dim as real t => abs(s)
        return iif((abs(q1.x - q2.x) <= t) and _
                   (abs(q1.y - q2.y) <= t) and _
                   (abs(q1.z - q2.z) <= t) and _
                   (abs(q1.w - q2.w) <= t), true, false)
    end function
    
' math.slerp -------------------------------------------------------------------
    
    
    
end namespace
