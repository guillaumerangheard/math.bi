namespace math
    
' operators, continued =========================================================
    
' + ----------------------------------------------------------------------------
    
    #macro r_op(_o_)
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
    
    r_op(+)
    
' - ----------------------------------------------------------------------------
    
    operator - (byref r as const rational) as rational
        return rational(-r.n, r.d)
    end operator
    
    r_op(-)
    
    #undef r_op
    
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
    
' / ----------------------------------------------------------------------------
    
    operator / (byref r as const rational, byref i as const longint) as rational
        return iif(i, rational(r.n, r.d * i), rational())
    end operator
    
    operator / (byref i as const longint, byref r as const rational) as rational
        dim as longint a => r.n
        return iif(a, rational(i * r.d, a), rational())
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
    
' < ----------------------------------------------------------------------------
    
    
    
' <= ---------------------------------------------------------------------------
    
    
    
' = ----------------------------------------------------------------------------
    
    
    
' <> ---------------------------------------------------------------------------
    
    
    
' >= ---------------------------------------------------------------------------
    
    
    
' > ----------------------------------------------------------------------------
    
    
    
' abs --------------------------------------------------------------------------
    
    operator abs (byref r as const rational) as rational
        return rational(abs(r.n), abs(r.d))
    end operator
    
' acos -------------------------------------------------------------------------
    
    #macro trig_f(_a_)
    operator _a_ (byref r as const rational) as real
        return _a_##(m_crl(r.n) / m_crl(r.d))
    end operator
    #endmacro
    
    trig_f(acos)
    
' asin -------------------------------------------------------------------------
    
    trig_f(asin)
    
' atn --------------------------------------------------------------------------
    
    trig_f(atn)
    
' cos --------------------------------------------------------------------------
    
    trig_f(cos)
    
' sin --------------------------------------------------------------------------
    
    trig_f(sin)
    
' tan --------------------------------------------------------------------------
    
    trig_f(tan)
    
    #undef trig_f
    
end namespace
