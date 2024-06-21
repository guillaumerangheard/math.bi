namespace math
    
' operators, continued =========================================================
    
' + ----------------------------------------------------------------------------
    
    #macro m3_op(_o_)
    operator _o_ (byref m1 as const mat3, byref m2 as const mat3) as mat3
        dim as mat3 r
        dim as real const ptr p1 => m1.data, p2 => m2.data, q  => r.data
        q[0%] => p1[0%] _o_ p2[0%] : q[1%] => p1[1%] _o_ p2[1%] : q[2%] => p1[2%] _o_ p2[2%]
        q[3%] => p1[3%] _o_ p2[3%] : q[4%] => p1[4%] _o_ p2[4%] : q[5%] => p1[5%] _o_ p2[5%]
        q[6%] => p1[6%] _o_ p2[6%] : q[7%] => p1[7%] _o_ p2[7%] : q[8%] => p1[8%] _o_ p2[8%]
        return r
    end operator
    #endmacro
    
    m3_op(+)
    
' - ----------------------------------------------------------------------------
    
    m3_op(-)
    
    #undef m3_op
    
' * ----------------------------------------------------------------------------
    
    operator * (byref m as const mat3, byref n as const real) as mat3
        dim as mat3 r
        dim as real const ptr p => m.data, q => r.data
        q[0%] => p[0%] * n : q[1%] => p[1%] * n : q[2%] => p[2%] * n
        q[3%] => p[3%] * n : q[4%] => p[4%] * n : q[5%] => p[5%] * n
        q[6%] => p[6%] * n : q[7%] => p[7%] * n : q[8%] => p[8%] * n
        return r
    end operator
    
    operator * (byref n as const real, byref m as const mat3) as mat3
        dim as mat3 r
        dim as real const ptr p => m.data, q => r.data
        q[0%] => n * p[0%] : q[1%] => n * p[1%] : q[2%] => n * p[2%]
        q[3%] => n * p[3%] : q[4%] => n * p[4%] : q[5%] => n * p[5%]
        q[6%] => n * p[6%] : q[7%] => n * p[7%] : q[8%] => n * p[8%]
        return r
    end operator
    
    operator * (byref m1 as const mat3, byref m2 as const mat3) as mat3
        dim as mat3 r
        dim as real const ptr p1 => m1.data, p2 => m2.data, q => r.data
        q[0%] => p1[0%] * p2[0%] + p1[1%] * p2[3%] + p1[2%] * p2[6%] : q[1%] => p1[0%] * p2[1%] + p1[1%] * p2[4%] + p1[2%] * p2[7%] : q[2%] => p1[0%] * p2[2%] + p1[1%] * p2[5%] + p1[2%] * p2[8%]
        q[3%] => p1[3%] * p2[0%] + p1[4%] * p2[3%] + p1[5%] * p2[6%] : q[4%] => p1[3%] * p2[1%] + p1[4%] * p2[4%] + p1[5%] * p2[7%] : q[5%] => p1[3%] * p2[2%] + p1[4%] * p2[5%] + p1[5%] * p2[8%]
        q[6%] => p1[6%] * p2[0%] + p1[7%] * p2[3%] + p1[8%] * p2[6%] : q[7%] => p1[6%] * p2[1%] + p1[7%] * p2[4%] + p1[8%] * p2[7%] : q[8%] => p1[6%] * p2[2%] + p1[7%] * p2[5%] + p1[8%] * p2[8%]
        return r
    end operator
    
    operator * (byref m as const mat3, byref v as const vec3) as vec3
        dim as real const ptr p => m.data
        return vec3(p[0%] * v.x + p[1%] * v.y + p[2%] * v.z, _
                    p[3%] * v.x + p[4%] * v.y + p[5%] * v.z, _
                    p[6%] * v.x + p[7%] * v.y + p[8%] * v.z)
    end operator
    
    #ifdef _MATH_CVEC_BI_
    #ifdef MATH_FORCE_CARTESIAN
    operator * (byref m as const mat3, byref v as const cvec) as vec3
        dim as real x => v.x, y => v.y
        dim as real const ptr p => m.data
        return vec3(p[0%] * x + p[1%] * y + p[2%] * v.z, _
                    p[3%] * x + p[4%] * y + p[5%] * v.z, _
                    p[6%] * x + p[7%] * y + p[8%] * v.z)
    end operator
    #else
    operator * (byref m as const mat3, byref v as const cvec) as cvec
        dim as real x => v.x, y => v.y, i, j, k
        dim as real const ptr p => m.data
        i => p[0%] * x + p[1%] * y + p[2%] * v.z
        j => p[3%] * x + p[4%] * y + p[5%] * v.z
        k => p[6%] * x + p[7%] * y + p[8%] * v.z
        #ifdef _MATH_ANGLE_BI_
        return cvec(math.theta(i, j), angleUnit.radian, hypot(i, j), k)
        #else
        return cvec(math.theta(i, j), hypot(i, j), k)
        #endif
    end operator
    #endif
    #endif
    
    #ifdef _MATH_SVEC_BI_
    #ifdef MATH_FORCE_CARTESIAN
    
    #else
    
    #endif
    #endif
    
' / ----------------------------------------------------------------------------
    
    operator / (byref m as const mat3, byref n as const real) as mat3
        if n then
            dim as mat3 r
            dim as real const ptr p => m.data, q => r.data
            q[0%] => p[0%] / n : q[1%] => p[1%] / n : q[2%] => p[2%] / n
            q[3%] => p[3%] / n : q[4%] => p[4%] / n : q[5%] => p[5%] / n
            q[6%] => p[6%] / n : q[7%] => p[7%] / n : q[8%] => p[8%] / n
            return r
        end if
        return mat3()
    end operator
    
end namespace
