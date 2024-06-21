namespace math
    
' operators, continued =========================================================
    
' + ----------------------------------------------------------------------------
    
    #macro a_op(_o_)
    operator _o_ (byref a1 as const angle, byref a2 as const real) as angle
        return angle((a1.value * angles(defaultAngleUnit)) _o_ a2)
    end operator
    
    operator _o_ (byref a1 as const real, byref a2 as const angle) as angle
        return angle(a1 _o_ (a2.value * angles(defaultAngleUnit)))
    end operator
    
    operator _o_ (byref a1 as const angle, byref a2 as const angle) as angle
        return angle(a1.value _o_ a2.value, angleUnit.turn)
    end operator
    #endmacro
    
    a_op(+)
    
' - ----------------------------------------------------------------------------
    
    operator - (byref a as const angle) as angle
        return angle(1d - a.value, angleUnit.turn)
    end operator
    
    a_op(-)
    
    #undef a_op
    
' * ----------------------------------------------------------------------------
    
    operator * (byref a as const angle, byref n as const real) as angle
        return angle(a.value * n, angleUnit.turn)
    end operator
    
    operator * (byref n as const real, byref a as const angle) as angle
        return angle(n * a.value, angleUnit.turn)
    end operator
    
' / ----------------------------------------------------------------------------
    
    operator / (byref a as const angle, byref n as const real) as angle
        return iif(n, angle(a.value / n, angleUnit.turn), angle())
    end operator
    
' < ----------------------------------------------------------------------------
    
    #macro a_op(_o_)
    operator _o_ (byref a1 as const angle, byref a2 as const real) as boolean
        return iif(a1.value _o_ (a2 / angles(defaultAngleUnit)), true, false)
    end operator
    
    operator _o_ (byref a1 as const real, byref a2 as const angle) as boolean
        return iif((a1 / angles(defaultAngleUnit)) _o_ a2.value, true, false)
    end operator
    
    operator _o_ (byref a1 as const angle, byref a2 as const angle) as boolean
        return iif(a1.value _o_ a2.value, true, false)
    end operator
    #endmacro
    
    a_op(<)
    
' <= ---------------------------------------------------------------------------
    
    a_op(<=)
    
' = ----------------------------------------------------------------------------
    
    a_op(=)
    
' <> ---------------------------------------------------------------------------
    
    a_op(<>)
    
' >= ---------------------------------------------------------------------------
    
    a_op(>=)
    
' > ----------------------------------------------------------------------------
    
    a_op(>)
    
    #undef a_op
    
' cos --------------------------------------------------------------------------
    
    #macro a_op(_o_)
    operator _o_ (byref a as const angle) as real
        return _o_##(a.theta)
    end operator
    #endmacro
    
    a_op(cos)
    
' sin --------------------------------------------------------------------------
    
    a_op(sin)
    
' tan --------------------------------------------------------------------------
    
    a_op(tan)
    
    #undef a_op
    
end namespace
