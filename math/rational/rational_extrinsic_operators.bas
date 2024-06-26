namespace math
    
' operators, continued =========================================================
    
' + ----------------------------------------------------------------------------
    
    #macro r_op1(_o_)
    operator _o_ (byref i as const longint, byref r as const rational) as rational
        return rational(r.n _o_ r.d * i, r.d)
    end operator
    
    operator _o_ (byref r as const rational, byref i as const longint) as rational
        return rational(r.n _o_ r.d * i, r.d)
    end operator
    
    operator _o_ (byref r1 as const rational, byref r2 as const rational) as rational
        return rational(r1.n * r2.d _o_ r1.d * r2.n, r1.d * r2.d)
    end operator
    #endmacro
    
    #macro r_op2(_o_)
    operator _o_ (byref n as const real, byref r as const rational) as real
        return n _o_ (m_crl(r.n) / m_crl(r.d))
    end operator
    
    operator _o_ (byref r as const rational, byref n as const real) as real
        return (m_crl(r.n) / m_crl(r.d)) _o_ n
    end operator
    #endmacro
    
    r_op1(+)
    r_op2(+)
    
' - ----------------------------------------------------------------------------
    
    operator - (byref r as const rational) as rational
        return rational(-r.n, r.d)
    end operator
    
    r_op1(-)
    r_op2(-)
    
    #undef r_op1
    
' * ----------------------------------------------------------------------------
    
    operator * (byref i as const longint, byref r as const rational) as rational
        return rational(i * r.n, r.d)
    end operator
    
    operator * (byref r as const rational, byref i as const longint) as rational
        return rational(r.n * i, r.d)
    end operator
    
    operator * (byref r1 as const rational, byref r2 as const rational) as rational
        return rational(r1.n * r2.n, r1.d * r2.d)
    end operator
    
    r_op2(*)
    
' / ----------------------------------------------------------------------------
    
    operator / (byref i as const longint, byref r as const rational) as rational
        dim as longint a => r.n
        return iif(a, rational(i * r.d, a), rational())
    end operator
    
    operator / (byref n as const real, byref r as const rational) as real
        dim as real m => m_crl(r.n) / m_crl(r.d)
        return iif(m, n / m, 0d)
    end operator
    
    operator / (byref r as const rational, byref i as const longint) as rational
        return iif(i, rational(r.n, r.d * i), rational())
    end operator
    
    operator / (byref r as const rational, byref n as const real) as real
        return iif(n, (m_crl(r.n) / m_crl(r.d)) / n, 0d)
    end operator
    
    operator / (byref r1 as const rational, byref r2 as const rational) as rational
        dim as longint b => r1.d, c => r2.n, d => r2.d
        return iif((0ll <> b) and (0ll <> c) and (0ll <> d), _
                   rational(r1.n * d, b * c), _
                   rational())
    end operator
    
' ^ ----------------------------------------------------------------------------
    
    operator ^ (byref r as const rational, byref i as const longint) as rational
        if 0ll < i then
            return rational(r.n ^ i, r.d ^ i)
        elseif i < 0ll then
            dim as longint a => r.n
            return iif(a, rational(r.d ^ i, a ^ i), rational())
        else
            return rational(1ll)
        end if
    end operator
    
    r_op2(^)
    
    #undef r_op2
    
' < ----------------------------------------------------------------------------
    
    #macro r_op(_o_)
    operator _o_ (byref i as const longint, byref r as const rational) as boolean
        return iif((i * r.d) _o_ r.n, true, false)
    end operator
    
    operator _o_ (byref n as const real, byref r as const rational) as boolean
        return iif(n _o_ (m_crl(r.n) / m_crl(r.d)), true, false)
    end operator
    
    operator _o_ (byref r as const rational, byref i as const longint) as boolean
        return iif(r.n _o_ (r.d * i), true, false)
    end operator
    
    operator _o_ (byref r as const rational, byref n as const real) as boolean
        return iif((r.n / r.d) _o_ n, true, false)
    end operator
    
    operator _o_ (byref r1 as const rational, byref r2 as const rational) as boolean
        return iif((r1.n * r2.d) _o_ (r1.d * r2.n), true, false)
    end operator
    #endmacro
    
    r_op(<)
    
' <= ---------------------------------------------------------------------------
    
    r_op(<=)
    
' = ----------------------------------------------------------------------------
    
    r_op(=)
    
' <> ---------------------------------------------------------------------------
    
    r_op(<>)
    
' >= ---------------------------------------------------------------------------
    
    r_op(>=)
    
' > ----------------------------------------------------------------------------
    
    r_op(>)
    
    #undef r_op
    
' abs --------------------------------------------------------------------------
    
    ' Returns the absolute value of r.
    
    operator abs (byref r as const rational) as rational
        return rational(abs(r.n), abs(r.d))
    end operator
    
' acos -------------------------------------------------------------------------
    
    #macro trig_f(_a_)
    operator _a_ (byref r as const rational) as real
        return _a_##(m_crl(r.n) / m_crl(r.d))
    end operator
    #endmacro
    
    ' Returns the arccosine of r.
    
    trig_f(acos)
    
' asin -------------------------------------------------------------------------
    
    ' Returns the arcsine of r.
    
    trig_f(asin)
    
' atn --------------------------------------------------------------------------
    
    ' Returns the arctangent of r.
    
    trig_f(atn)
    
' cos --------------------------------------------------------------------------
    
    ' Returns the cosine of r.
    
    trig_f(cos)
    
' sgn --------------------------------------------------------------------------
    
    ' Returns the sign of r, i.e. the signs of both its numerator and
    ' denominator.
    
    operator sgn (byref r as const rational) as rational
        dim as longint n => r.n, d => r.d
        return rational(n / abs(n), d / abs(d))
    end operator
    
' sin --------------------------------------------------------------------------
    
    ' Returns the sine of r.
    
    trig_f(sin)
    
' tan --------------------------------------------------------------------------
    
    ' Returns the tangent of r.
    
    trig_f(tan)
    
    #undef trig_f
    
end namespace
