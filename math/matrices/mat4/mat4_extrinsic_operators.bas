namespace math
    
' + ----------------------------------------------------------------------------
    
    #macro m4_op(_o_)
    operator _o_ (byref m1 as const mat4, byref m2 as const mat4) as mat4
        dim as mat4 r
        dim as real const ptr p1 => m1.data, p2 => m2.data, q => r.data
        q[0%]  => p1[0%]  _o_ p2[0%]  : q[1%]  => p1[1%]  _o_ p2[1%]  : q[2%]  => p1[2%]  _o_ p2[2%]  : q[3%]  => p1[3%]  _o_ p2[3%]
        q[4%]  => p1[4%]  _o_ p2[4%]  : q[5%]  => p1[5%]  _o_ p2[5%]  : q[6%]  => p1[6%]  _o_ p2[6%]  : q[7%]  => p1[7%]  _o_ p2[7%]
        q[8%]  => p1[8%]  _o_ p2[8%]  : q[9%]  => p1[9%]  _o_ p2[9%]  : q[10%] => p1[10%] _o_ p2[10%] : q[11%] => p1[11%] _o_ p2[11%]
        q[12%] => p1[12%] _o_ p2[12%] : q[13%] => p1[13%] _o_ p2[13%] : q[14%] => p1[14%] _o_ p2[14%] : q[15%] => p1[15%] _o_ p2[15%]
        return r
    end operator
    #endmacro
    
    m4_op(+)
    
' - ----------------------------------------------------------------------------
    
    m4_op(-)
    
' * ----------------------------------------------------------------------------
    
    operator * (byref m as const mat4, byref n as const real) as mat4
        dim as mat4 r
        dim as real const ptr p => m.data, q => r.data
        q[0%]  => p[0%]  * n : q[1%]  => p[1%]  * n : q[2%]  => p[2%]  * n : q[3%]  => p[3%]  * n
        q[4%]  => p[4%]  * n : q[5%]  => p[5%]  * n : q[6%]  => p[6%]  * n : q[7%]  => p[7%]  * n
        q[8%]  => p[8%]  * n : q[9%]  => p[9%]  * n : q[10%] => p[10%] * n : q[11%] => p[11%] * n
        q[12%] => p[12%] * n : q[13%] => p[13%] * n : q[14%] => p[14%] * n : q[15%] => p[15%] * n
        return r
    end operator
    
    operator * (byref n as const real, byref m as const mat4) as mat4
        dim as mat4 r
        dim as real const ptr p => m.data, q => r.data
        q[0%]  => n * p[0%]  : q[1%]  => n * p[1%]  : q[2%]  => n * p[2%]  : q[3%]  => n * p[3%]
        q[4%]  => n * p[4%]  : q[5%]  => n * p[5%]  : q[6%]  => n * p[6%]  : q[7%]  => n * p[7%]
        q[8%]  => n * p[8%]  : q[9%]  => n * p[9%]  : q[10%] => n * p[10%] : q[11%] => n * p[11%]
        q[12%] => n * p[12%] : q[13%] => n * p[13%] : q[14%] => n * p[14%] : q[15%] => n * p[15%]
        return r
    end operator
    
    operator * (byref m1 as const mat4, byref m2 as const mat4) as mat4
        dim as mat4 r
        dim as real const ptr p1 => m1.data, p2 => m2.data, q => r.data
        q[0%]  => p1[0]  * p2[0] + p1[1]  * p2[4] + p1[2]  * p2[8] + p1[3]  * p2[12] : q[1%]  => p1[0]  * p2[0] + p1[1]  * p2[4] + p1[2]  * p2[8] + p1[3]  * p2[12] : q[2%]  => p1[0]  * p2[0] + p1[1]  * p2[4] + p1[2]  * p2[8] + p1[3]  * p2[12] : q[3%]  => p1[0]  * p2[0] + p1[1]  * p2[4] + p1[2]  * p2[8] + p1[3]  * p2[12]
        q[4%]  => p1[4]  * p2[0] + p1[5]  * p2[4] + p1[6]  * p2[8] + p1[7]  * p2[12] : q[5%]  => p1[4]  * p2[0] + p1[5]  * p2[4] + p1[6]  * p2[8] + p1[7]  * p2[12] : q[6%]  => p1[4]  * p2[0] + p1[5]  * p2[4] + p1[6]  * p2[8] + p1[7]  * p2[12] : q[7%]  => p1[4]  * p2[0] + p1[5]  * p2[4] + p1[6]  * p2[8] + p1[7]  * p2[12]
        q[8%]  => p1[8]  * p2[0] + p1[9]  * p2[4] + p1[10] * p2[8] + p1[11] * p2[12] : q[9%]  => p1[8]  * p2[0] + p1[9]  * p2[4] + p1[10] * p2[8] + p1[11] * p2[12] : q[10%] => p1[8]  * p2[0] + p1[9]  * p2[4] + p1[10] * p2[8] + p1[11] * p2[12] : q[11%] => p1[8]  * p2[0] + p1[9]  * p2[4] + p1[10] * p2[8] + p1[11] * p2[12]
        q[12%] => p1[12] * p2[0] + p1[13] * p2[4] + p1[14] * p2[8] + p1[15] * p2[12] : q[13%] => p1[12] * p2[0] + p1[13] * p2[4] + p1[14] * p2[8] + p1[15] * p2[12] : q[14%] => p1[12] * p2[0] + p1[13] * p2[4] + p1[14] * p2[8] + p1[15] * p2[12] : q[15%] => p1[12] * p2[0] + p1[13] * p2[4] + p1[14] * p2[8] + p1[15] * p2[12]
        return r
    end operator
    
    operator * (byref m as const mat4, byref v as const vec4) as vec4
        dim as real const ptr p => m.data
        return vec4(p[0]  * v.x + p[1]  * v.y + p[2]  * v.z + p[3]  * v.w, _
                    p[4]  * v.x + p[5]  * v.y + p[6]  * v.z + p[7]  * v.w, _
                    p[8]  * v.x + p[9]  * v.y + p[10] * v.z + p[11] * v.w, _
                    p[12] * v.x + p[13] * v.y + p[14] * v.z + p[15] * v.w)
    end operator
    
' / ----------------------------------------------------------------------------
    
    operator / (byref m as const mat4, byref n as const real) as mat4
        if n then
            dim as mat4 r
            dim as real const ptr p => m.data, q => r.data
            q[0%]  => p[0%]  / n : q[1%]  => p[1%]  / n : q[2%]  => p[2%]  / n : q[3%]  => p[3%]  / n
            q[4%]  => p[4%]  / n : q[5%]  => p[5%]  / n : q[6%]  => p[6%]  / n : q[7%]  => p[7%]  / n
            q[8%]  => p[8%]  / n : q[9%]  => p[9%]  / n : q[10%] => p[10%] / n : q[11%] => p[11%] / n
            q[12%] => p[12%] / n : q[13%] => p[13%] / n : q[14%] => p[14%] / n : q[15%] => p[15%] / n
            return r
        end if
        return mat4()
    end operator
    
end namespace
