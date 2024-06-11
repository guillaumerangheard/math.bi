namespace math
    
' operators ====================================================================
    
' math.quaternion.*= -----------------------------------------------------------
    
    operator quaternion.*= (byref n as const real)
        this.x *= n
        this.y *= n
        this.z *= n
        this.w *= n
    end operator
    
    operator quaternion.*= (byref q as const quaternion)
        dim as real i => this.w * q.x + this.x * q.w + this.y * q.z - this.z * q.y, _ ' x
                    j => this.w * q.y - this.x * q.z + this.y * q.w + this.z * q.x, _ ' y
                    k => this.w * q.z + this.x * q.y - this.y * q.x + this.z * q.w, _ ' z
                    l => this.w * q.w - this.x * q.x - this.y * q.y - this.z * q.z    ' w
        this.x => i
        this.y => j
        this.z => k
        this.w => l
    end operator
    
' math.quaternion./= -----------------------------------------------------------
    
    operator quaternion./= (byref n as const real)
        if n then
            this.x /= n
            this.y /= n
            this.z /= n
            this.w /= n
        else
            this.x => 0d
            this.y => 0d
            this.z => 0d
            this.w => 0d
        end if
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
