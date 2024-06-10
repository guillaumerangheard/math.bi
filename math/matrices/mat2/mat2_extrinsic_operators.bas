namespace math
    
' operators, continued =========================================================
    
' + ----------------------------------------------------------------------------
    
    #macro m2_op(_o_)
    operator _o_ (byref m1 as const mat2, byref m2 as const mat2) as mat2
        dim as mat2 r
        dim as real const ptr p1 => m1.data, p2 => m2.data, q  => r.data
        q[0%] => p1[0%] _o_ p2[0%] : q[1%] => p1[1%] _o_ p2[1%]
        q[2%] => p1[2%] _o_ p2[2%] : q[3%] => p1[3%] _o_ p2[3%]
        return r
    end operator
    #endmacro
    
    m2_op(+)
    
' - ----------------------------------------------------------------------------
    
    m2_op(-)
    
    #undef m2_op
    
' * ----------------------------------------------------------------------------
    
    operator * (byref m as const mat2, byref n as const real) as mat2
        dim as mat2 r
        dim as real const ptr p => m.data, q => r.data
        q[0%] => p[0%] * n : q[1%] => p[1%] * n
        q[2%] => p[2%] * n : q[3%] => p[3%] * n
        return r
    end operator
    
    operator * (byref n as const real, byref m as const mat2) as mat2
        dim as mat2 r
        dim as real const ptr p => m.data, q => r.data
        q[0%] => n * p[0%] : q[1%] => n * p[1%]
        q[2%] => n * p[2%] : q[3%] => n * p[3%]
        return r
    end operator
    
    operator * (byref m1 as const mat2, byref m2 as const mat2) as mat2
        dim as mat2 r
        dim as real const ptr p1 => m1.data, p2 => m2.data, q => r.data
        q[0%] => p1[0%] * p2[0%] + p1[1%] * p2[2%] : q[1%] => p1[0%] * p2[1%] + p1[1%] * p2[3%]
        q[2%] => p1[2%] * p2[0%] + p1[3%] * p2[2%] : q[3%] => p1[2%] * p2[1%] + p1[3%] * p2[3%]
        return r
    end operator
    
    operator * (byref m as const mat2, byref v as const vec2) as vec2
        dim as real const ptr p => m.data
        return vec2(p[0%] * v.x + p[1%] * v.y, _
                    p[2%] * v.x + p[3%] * v.y)
    end operator
    
    #ifdef _MATH_PVEC_BI_
    #ifdef MATH_FORCE_CARTESIAN
    operator * (byref m as const mat2, byref v as const pvec) as vec2
        dim as real x => v.x, y => v.y
        dim as real const ptr p => m.data
        return vec2(p[0%] * x + p[1%] * y, _
                    p[2%] * x + p[3%] * y)
    end operator
    #else
    operator * (byref m as const mat2, byref v as const pvec) as pvec
        dim as real x => v.x, y => v.y, i, j
        dim as real const ptr p => m.data
        i => p[0%] * x + p[1%] * y
        j => p[2%] * x + p[3%] * y
        #ifdef _MATH_ANGLE_BI_
        return pvec(math.phi(i, j), angleUnit.radian, hypot(i, j))
        #else
        return pvec(math.phi(i, j), hypot(i, j))
        #endif
    end operator
    #endif
    #endif
    
' / ----------------------------------------------------------------------------
    
    operator / (byref m as const mat2, byref n as const real) as mat2
        if n then
            dim as mat2 r
            dim as real const ptr p => m.data, q => r.data
            q[0%] => p[0%] / n : q[1%] => p[1%] / n
            q[2%] => p[2%] / n : q[3%] => p[3%] / n
            return r
        end if
        return mat2()
    end operator
    
end namespace
