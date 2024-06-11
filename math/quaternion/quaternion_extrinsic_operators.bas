namespace math
    
' operators, continued =========================================================
    
' * ----------------------------------------------------------------------------
    
    operator * (byref q as const quaternion, byref n as const real) as quaternion
        return quaternion(q.x * n, q.y * n, q.z * n, q.w * n)
    end operator
    
    operator * (byref n as const real, byref q as const quaternion) as quaternion
        return quaternion(n * q.x, n * q.y, n * q.z, n * q.w)
    end operator
    
    ' Cf. https://stackoverflow.com/questions/19956555/how-to-multiply-two-quaternions
    operator * (byref q1 as const quaternion, byref q2 as const quaternion) as quaternion
        return quaternion(q1.w * q2.x + q1.x * q2.w + q1.y * q2.z - q1.z * q2.y, _ ' x
                          q1.w * q2.y - q1.x * q2.z + q1.y * q2.w + q1.z * q2.x, _ ' y
                          q1.w * q2.z + q1.x * q2.y - q1.y * q2.x + q1.z * q2.w, _ ' z
                          q1.w * q2.w - q1.x * q2.x - q1.y * q2.y - q1.z * q2.z)   ' w
    end operator
    
' = ----------------------------------------------------------------------------
    
    operator = (byref q1 as const quaternion, byref q2 as const quaternion) as boolean
        return iif((q1.x = q2.x) and (q1.y = q2.y) and (q1.z = q2.z) and (q1.w = q2.w), true, false)
    end operator
    
' <> ---------------------------------------------------------------------------
    
    operator <> (byref q1 as const quaternion, byref q2 as const quaternion) as boolean
        return iif((q1.x <> q2.x) or (q1.y <> q2.y) or (q1.z <> q2.z) or (q1.w <> q2.w), true, false)
    end operator
    
end namespace
