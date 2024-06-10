namespace math
    
' operators ====================================================================
    
' math.quaternion.*= -----------------------------------------------------------
    
    operator quaternion.*= (byref n as const real)
        this.x *= n
        this.y *= n
        this.z *= n
        this.w *= n
    end operator
    
' math.quaternion.cast ---------------------------------------------------------
    
    operator quaternion.cast () as string
        return "<math.quaternion>{ x : " & this.x & " , y : " & this.y & " , z : " & this.z & " , w : " & this.w & " }"
    end operator
    
' math.quaternion.let ----------------------------------------------------------
    
    operator quaternion.let (byref q as const quaternion)
        this.x => q.x
        this.y => q.y
        this.z => q.z
        this.w => q.w
    end operator
    
end namespace
