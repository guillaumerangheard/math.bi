namespace math
    
' properties ===================================================================
    
' math.complex.argument --------------------------------------------------------
    
    ' Returns the argument of c.
    ' Cf. https://en.wikipedia.org/wiki/Argument_(complex_analysis)
    
    property complex.argument () as real
        if this.r < 0d then
            if this.i < 0d then     : return acos(this.r / abs(this)) + half_pi     ' x < 0, y < 0
            elseif 0d < this.i then : return acos(this.r / abs(this))               ' x < 0, y > 0
            else                    : return pi                                     ' x < 0, y = 0
            end if
        elseif 0d < this.r then
            if this.i < 0d then     : return two_pi - acos(this.r / abs(this))      ' x > 0, y < 0
            elseif 0d < this.i then : return acos(this.r / abs(this))               ' x > 0, y > 0
            else                    : return 0d                                     ' x > 0, y = 0
            end if
        else
            if this.i < 0d then     : return pi + half_pi                           ' x = 0, y < 0
            elseif 0d < this.i then : return half_pi                                ' x = 0, y > 0
            else                    : return 0d                                     ' x = 0, y = 0
            end if
        end if
    end property
    
' math.complex.conjugate -------------------------------------------------------
    
    ' Returns the (complex) conjugate of c.
    ' Cf. https://en.wikipedia.org/wiki/Complex_conjugate
    
    property complex.conjugate () as complex
        return complex(this.r, -this.i)
    end property
    
' math.complex.isImaginary -----------------------------------------------------
    
    ' Returns true if c is purely imaginary, i.e. if its real part is null, and false otherwise.
    
    property complex.isImaginary () as boolean
        return iif(0d = this.r, true, false)
    end property
    
' math.complex.isReal ----------------------------------------------------------
    
    ' Returns true if c is purely real, i.e. if its imaginary part is null, and false otherwise.
    
    property complex.isReal () as boolean
        return iif(0d = this.i, true, false)
    end property
    
' math.complex.modulus ---------------------------------------------------------
    
    ' Returns the modulus (i.e. magnitude) of c.
    ' Cf. https://en.wikipedia.org/wiki/Absolute_value#Complex_numbers
    
    property complex.modulus () as real
        return iif (this.i, sqr(this.r * this.r + this.i * this.i), abs(this.r))
    end property
    
' math.complex.reciprocal ------------------------------------------------------
    
    ' Returns the (complex) reciprocal of c.
    
    property complex.reciprocal () as complex
        if(0d <> this.r) or (0d <> this.i) then
            dim as real d => this.r * this.r + this.i * this.i
            return complex(this.r / d, -this.i / d)
        end if
        return complex()
    end property
    
end namespace
