namespace math
    
' properties ===================================================================
    
' math.complex.conjugate -------------------------------------------------------
    
    property complex.conjugate () as complex
        return complex(this.r, -this.i)
    end property
    
' math.complex.magnitude -------------------------------------------------------
    
    property complex.magnitude () as real
        return sqr(this.r * this.r + this.i * this.i)
    end property
    
' math.complex.reciprocal ------------------------------------------------------
    
    property complex.reciprocal () as complex
        if(0d <> this.r) or (0d <> this.i) then
            dim as real d => this.r * this.r + this.i * this.i
            return complex(this.r / d, -this.i / d)
        end if
        return complex()
    end property
    
end namespace