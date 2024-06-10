namespace math
    
' operators ====================================================================
    
' math.complexArray.&= ---------------------------------------------------------
    
    operator complexArray.&= (byref n as const real)
        if this._l then
            this._l += 1%
            dim as complex ptr q => new complex[this._l]
            for i as integer => 0% to this._l - 2%
                q[i] => this._p[i]
            next i
            this._p[this._l - 1%].r => n
            delete[] this._p
            this._p => q
        else
            this._l => 1%
            this._p => new complex[1%]
            this._p[0%].r => n
        end if
    end operator
    
    #ifdef _MATH_ARRAY_BI_
    operator complexArray.&= (byref a as const array)
        if a._l then
            if this._l then
                dim as complex ptr q => new complex[this._l + a._l]
                dim as integer i
                for i => 0% to this._l - 1%
                    q[i] => this._p[i]
                next i
                dim as real const ptr p => a.data
                for i => 0% to a._l - 1%
                    q[this._l + i].r => p[i]
                next i
                this._l += a._l
                delete[] this._p
                this._p => q
            else
                this._l => a._l
                this._p => new complex[this._l]
                dim as real const ptr p => a.data
                for i as integer => 0% to this._l - 1%
                    this._p[i].r => p[i]
                next i
            end if
        end if
    end operator
    #endif
    
    operator complexArray.&= (byref c as const complex)
        if this._l then
            this._l += 1%
            dim as complex ptr q => new complex[this._l]
            for i as integer => 0% to this._l - 2%
                q[i] => this._p[i]
            next i
            this._p[this._l - 1%] => c
            delete[] this._p
            this._p => q
        else
            this._l => 1%
            this._p => new complex[1%]
            this._p[0%] => c
        end if
    end operator
    
    operator complexArray.&= (byref a as const complexArray)
        if @this <> @a then
            if a._l then
                if this._l then
                    dim as complex ptr q => new complex[this._l + a._l]
                    dim as integer i
                    for i => 0% to this._l - 1%
                        q[i] => this._p[i]
                    next i
                    for i => 0% to a._l - 1%
                        q[this._l + i] => a._p[i]
                    next i
                    this._l += a._l
                    delete[] this._p
                    this._p => q
                else
                    this._l => a._l
                    this._p => new complex[this._l]
                    for i as integer => 0% to this._l - 1%
                        this._p[i] => a._p[i]
                    next i
                end if
            end if
        else
            if this._l then
                dim as complex ptr q => new complex[this._l * 2%]
                for i as integer => 0% to this._l - 1%
                    q[i]           => this._p[i]
                    q[this._l + i] => this._p[i]
                next i
                this._l *= 2%
                delete[] this._p
                this._p => q
            end if
        end if
    end operator
    
' math.complexArray.[] ---------------------------------------------------------
    
    operator complexArray.[] (byref i as const integer) byref as complex
        if (0% <= i) and (i < this._l) then return this._p[i]
        this._d.r => 0d
        this._d.i => 0d
        return this._d
    end operator
    
' math.complexArray.+= ---------------------------------------------------------
    
    #macro ca_op(_o_)
    operator complexArray.##_o_##= (byref n as const real)
        if this._l then
            for i as integer => 0% to this._l - 1%
                this._p[i] _o_##= n
            next i
        #ifdef  MATH_VERBOSE
        else : print "<math.complexArray." & #_o_ & "=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    
    #ifdef _MATH_ARRAY_BI_
    operator complexArray.##_o_##= (byref a as const array)
        if (0% < a._l) and (a._l = this._l) then
            dim as real const ptr p => a.data
            for i as integer => 0% to this._l - 1%
                this._p[i] _o_##= p[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray" & #_o_ & "=> Unable to proceed. Arrays must have non-null matching lengths."
        #endif
        end if
    end operator
    #endif
    
    operator complexArray.##_o_##= (byref c as const complex)
        if this._l then
            for i as integer => 0% to this._l - 1%
                this._p[i] _o_##= c
            next i
        #ifdef  MATH_VERBOSE
        else : print "<math.complexArray." & #_o_ & "=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    
    operator complexArray.##_o_##= (byref a as const complexArray)
        if (0% < a._l) and (a._l = this._l) then
            for i as integer => 0% to this._l - 1%
                this._p[i] _o_##= a._p[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray" & #_o_ & "=> Unable to proceed. Arrays must have non-null matching lengths."
        #endif
        end if
    end operator
    #endmacro
    
    ca_op(+)
    
' math.complexArray.-= ---------------------------------------------------------
    
    ca_op(-)
    
' math.complexArray.*= ---------------------------------------------------------
    
    ca_op(*)
    
    #undef ca_op
    
' math.complexArray./= ---------------------------------------------------------
    
    operator complexArray./= (byref n as const real)
        if this._l then
            if n then
                for i as integer => 0% to this._l - 1%
                    this._p[i].r /= n
                    this._p[i].i /= n
                next i
            else
                for i as integer => 0% to this._l - 1%
                    this._p[i].r => 0d
                    this._p[i].i => 0d
                next i
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray./=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    
    #ifdef _MATH_ARRAY_BI_
    operator complexArray./= (byref a as const array)
        if (0% < a._l) and (a._l = this._l) then
            dim as real const ptr p => a.data
            for i as integer => 0% to this._l - 1%
                if p[i] then
                    this._p[i].r /= p[i]
                    this._p[i].i /= p[i]
                else
                    this._p[i].r => 0d
                    this._p[i].i => 0d
                end if
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray./=> Unable to proceed. Arrays must have non-null matching lengths."
        #endif
        end if
    end operator
    #endif
    
    operator complexArray./= (byref c as const complex)
        if this._l then
            if (0d <> c.r) or (0d <> c.i) then
                dim as real d => c.r * c.r + c.i * c.i, x, y
                for i as integer => 0% to this._l - 1%
                    x => (this._p[i].r * c.r + this._p[i].i * c.i) / d
                    y => (this._p[i].i * c.r - this._p[i].r * c.i) / d
                    this._p[i].r => x
                    this._p[i].i => y
                next i
            else
                for i as integer => 0% to this._l - 1%
                    this._p[i].r => 0d
                    this._p[i].i => 0d
                next i
            end if
        #if MATH_VERBOSE
        else
            print "<math.complexArray./=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    
    operator complexArray./= (byref a as const complexArray)
        if (0% < a._l) and (a._l = this._l) then
            for i as integer => 0% to this._l - 1%
                this._p[i] /= a._p[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray./=> Unable to proceed. Arrays must have non-null matching lengths."
        #endif
        end if
    end operator
    
' math.complexArray.^= ---------------------------------------------------------
    
    ' Must implement the ^= and ^ operators for math.complex.
    
' math.complexArray.cast -------------------------------------------------------
    
    operator complexArray.cast () as string
        return "<math.complexArray>{ length : " & this._l & " }"
    end operator
    
' math.complexArray.let --------------------------------------------------------
    
    #ifdef _MATH_ARRAY_BI_
    operator complexArray.let (byref a as const array)
        this._l => 0%
        if this._p then
            delete[] this._p
            this._p => 0
        end if
        if a._l then
            this._l => a._l
            this._p => new complex[a._l]
            dim as real const ptr p => a.data
            for i as integer => 0% to a._l - 1%
                this._p[i].r => p[i]
            next i
        end if
    end operator
    #endif
    
    operator complexArray.let (byref a as const complexArray)
        if @this <> @a then
            this._l => 0%
            if this._p then
                delete[] this._p
                this._p => 0
            end if
            if a._l then
                this._l => a._l
                this._p => new complex[a._l]
                for i as integer => 0% to a._l - 1%
                    this._p[i] => a._p[i]
                next i
            end if
        end if
    end operator
    
end namespace
