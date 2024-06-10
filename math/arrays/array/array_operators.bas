namespace math
    
' operators ====================================================================
    
' math.array.&= ----------------------------------------------------------------
    
    operator array.&= (byref n as const real)
        if this._l then
            this._l += 1%
            dim as real ptr q => new real[this._l]
            for i as integer => 0% to this._l - 2%
                q[i] => this._p[i]
            next i
            this._p[this._l - 1%] => n
            delete[] this._p
            this._p => q
        else
            this._l => 1%
            this._p => new real[1%]
            this._p[0%] => n
        end if
    end operator
    
    operator array.&= (byref a as const array)
        if @this <> @a then
            if a._l then
                if this._l then
                    dim as real ptr q => new real[this._l + a._l]
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
                    this._p => new real[this._l]
                    for i as integer => 0% to this._l - 1%
                        this._p[i] => a._p[i]
                    next i
                end if
            end if
        else
            if this._l then
                dim as real ptr q => new real[this._l * 2%]
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
    
' math.array.[] ----------------------------------------------------------------
    
    operator array.[] (byref i as const integer) byref as real
        if (0% <= i) and (i < this._l) then return this._p[i]
        this._d => 0d
        return this._d
    end operator
    
' math.array.+= ----------------------------------------------------------------
    
    #macro a_op(_o_)
    operator array.##_o_##= (byref n as const real)
        if this._l then
            for i as integer => 0% to this._l - 1%
                this._p[i] _o_##= n
            next i
        #ifdef  MATH_VERBOSE
        else : print "<math.array." & #_o_ & "=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    
    operator array.##_o_##= (byref a as const array)
        if (0% < a._l) and (a._l = this._l) then
            for i as integer => 0% to this._l - 1%
                this._p[i] _o_##= a._p[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.array" & #_o_ & "=> Unable to proceed. Arrays must have non-null matching lengths."
        #endif
        end if
    end operator
    #endmacro
    
    a_op(+)
    
' math.array.-= ----------------------------------------------------------------
    
    a_op(-)
    
' math.array.*= ----------------------------------------------------------------
    
    a_op(*)
    
' math.array./= ----------------------------------------------------------------
    
    operator array./= (byref n as const real)
        if this._l then
            if n then : for i as integer => 0% to this._l - 1% : this._p[i] /= n  : next i
            else      : for i as integer => 0% to this._l - 1% : this._p[i] => 0d : next i
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.array./=> Unable to procedd. Array is empty."
        #endif
        end if
    end operator
    
    operator array./= (byref a as const array)
        if (0% < a._l) and (a._l = this._l) then
            for i as integer => 0% to this._l - 1%
                this._p[i] => iif(a._p[i], this._p[i] / a._p[i], 0d)
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.array" & #_o_ & "=> Unable to proceed. Arrays must have non-null matching lengths."
        #endif
        end if
    end operator
    
' math.array.^= ----------------------------------------------------------------
    
    a_op(^)
    
    #undef a_op
    
' math.array.cast --------------------------------------------------------------
    
    operator array.cast () as string
        return "<math.array>{ length : " & this._l & " }"
    end operator
    
' math.array.let ---------------------------------------------------------------
    
    operator array.let (byref a as const array)
        if @this <> @a then
            this._l => 0%
            if this._p then
                delete[] this._p
                this._p => 0
            end if
            if a._l then
                this._l => a._l
                this._p => new real[a._l]
                for i as integer => 0% to a._l - 1%
                    this._p[i] => a._p[i]
                next i
            end if
        end if
    end operator
    
end namespace
