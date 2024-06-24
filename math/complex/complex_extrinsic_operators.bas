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
    
' abs --------------------------------------------------------------------------
    
    ' Returns the absolute value (i.e. magnitude or modulus) of c.
    
    operator abs (byref c as const complex) as real
        return iif(c.i, sqr(c.r * c.r + c.i * c.i), abs(c.r))
    end operator
    
' cos --------------------------------------------------------------------------
    
    ' Returns the cosine of c.
    ' Cf. https://proofwiki.org/wiki/Cosine_of_Complex_Number
        
    operator cos (byref c as const complex) as complex
        return complex(cos(c.r) * cosh(c.i), -(sin(c.r) * sinh(c.i)))
    end operator
    
' log --------------------------------------------------------------------------
    
    ' Returns the natural logarithm of c.
    ' Cf. https://www.tutorchase.com/answers/a-level/maths/how-to-calculate-the-natural-logarithm-of-a-complex-number
    
    operator log (byref c as const complex) as complex
        return complex(log(c.modulus), c.argument)
    end operator
    
' sgn --------------------------------------------------------------------------
    
    ' Return the sign(um) of c, i.e. c / abs(c).
    
    operator sgn (byref c as const complex) as complex
        return c / abs(c)
    end operator
    
' sin --------------------------------------------------------------------------
    
    ' Returns the sine of c.
    ' Cf. https://proofwiki.org/wiki/Sine_of_Complex_Number
    
    operator sin (byref c as const complex) as complex
        return complex(sin(c.r) * cosh(c.i), cos(c.r) * sinh(c.i))
    end operator
    
' sqr --------------------------------------------------------------------------
    
    ' Returns the square root of c.
    
    operator sqr (byref c as const complex) as complex
        dim as real a => abs(c)
        return complex((1d / sqr_2) * sqr(a + c.r), (sgn(c.i) / sqr_2) * sqr(a - c.r))
    end operator
    
' tan --------------------------------------------------------------------------
    
    ' Returns the tangent of c.
    ' Cf. https://proofwiki.org/wiki/Tangent_of_Complex_Number
    
    operator tan (byref c as const complex) as complex
        dim as real a => tan(c.r), b => tanh(c.i), d => 1d - a * a * b * b
        return iif(d, complex((a - a * b * b) / d, (b + a * a * b) / d), complex())
    end operator
    
end namespace
