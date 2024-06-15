namespace math
    
' operators, continued =========================================================
    
' + ----------------------------------------------------------------------------
    
    operator + (byref c as const complex, byref n as const real) as complex
        return complex(c.r + n, c.i)
    end operator
    
    operator + (byref n as const real, byref c as const complex) as complex
        return complex(n + c.r, c.i)
    end operator
    
    operator + (byref c1 as const complex, byref c2 as const complex) as complex
        return complex(c1.r + c2.r, c1.i + c2.i)
    end operator
    
' - ----------------------------------------------------------------------------
    
    operator - (byref c as const complex) as complex
        return complex(-c.r, -c.i)
    end operator
    
    operator - (byref c as const complex, byref n as const real) as complex
        return complex(c.r - n, c.i)
    end operator
    
    operator - (byref n as const real, byref c as const complex) as complex
        return complex(n - c.r, -c.i)
    end operator
    
    operator - (byref c1 as const complex, byref c2 as const complex) as complex
        return complex(c1.r - c2.r, c1.i - c2.i)
    end operator
    
' * ----------------------------------------------------------------------------
    
    operator * (byref c as const complex, byref n as const real) as complex
        return complex(c.r * n, c.i * n)
    end operator
    
    operator * (byref n as const real, byref c as const complex) as complex
        return complex(n * c.r, n * c.i)
    end operator
    
    operator * (byref c1 as const complex, byref c2 as const complex) as complex
        return complex(c1.r * c2.r - c1.i * c2.i, c1.r * c2.i + c1.i * c2.r)
    end operator
    
' / ----------------------------------------------------------------------------
    
    operator / (byref c as const complex, byref n as const real) as complex
        return iif(n, complex(c.r / n, c.i / n), complex())
    end operator
    
    operator / (byref n as const real, byref c as const complex) as complex
        if (0d <> c.r) or (0d <> c.i) then
            dim as real d => c.r * c.r + c.i * c.i
            return complex((n * c.r) / d, _
                           (-n * c.i) / d)
        end if
        return complex()
    end operator
    
    operator / (byref c1 as const complex, byref c2 as const complex) as complex
        if (0d <> c2.r) or (0d <> c2.i) then
            dim as real d => c2.r * c2.r + c2.i * c2.i
            return complex((c1.r * c2.r + c1.i * c2.i) / d,_
                           (c1.i * c2.r - c1.r * c2.i) / d)
        end if
        return complex()
    end operator
    
' ^ ----------------------------------------------------------------------------
    
    ' Still trying to wrap my head around this.
    
' = ----------------------------------------------------------------------------
    
    operator = (byref n as const real, byref c as const complex) as boolean
        return iif((n = c.r) and (0d = c.i), true, false)
    end operator
    
    operator = (byref c as const complex, byref n as const real) as boolean
        return iif((c.r = n) and (c.i = 0d), true, false)
    end operator
    
    operator = (byref c1 as const complex, byref c2 as const complex) as boolean
        return iif((c1.r = c2.r) and (c1.i = c2.i), true, false)
    end operator
    
' <> ---------------------------------------------------------------------------
    
    operator <> (byref n as const real, byref c as const complex) as boolean
        return iif((n <> c.r) or (0d <> c.i), true, false)
    end operator
    
    operator <> (byref c as const complex, byref n as const real) as boolean
        return iif((c.r <> n) or (c.i <> 0d), true, false)
    end operator
    
    operator <> (byref c1 as const complex, byref c2 as const complex) as boolean
        return iif((c1.r <> c2.r) or (c1.i <> c2.i), true, false)
    end operator
    
end namespace
