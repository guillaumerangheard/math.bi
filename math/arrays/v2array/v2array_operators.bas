namespace math
    
' operators ====================================================================
    
' math.v2array.&= --------------------------------------------------------------
    
    #macro v2a_e(_a_,_b_)
    operator v2array.&= (byref v as const _a_)
        if this._l then
            this._l += 1%
            dim as vec2 ptr q => new vec2[this._l]
            for i as integer => 0% to this._l - 2%
                q[i] => this._p[i]
            next i
            this._p[this._l - 1%] => _b_
            delete[] this._p
            this._p => q
        else
            this._l => 1%
            this._p => new vec2[1%]
            this._p[0%] => _b_
        end if
    end operator
    #endmacro
    v2a_e(vec2,v)
    #ifdef _MATH_PVEC_BI_
    v2a_e(pvec,vec2(v.x, v.y))
    #endif
    #undef v2a_e
    
    operator v2array.&= (byref a as const v2array)
        if @this <> @a then
            if a._l then
                if this._l then
                    dim as vec2 ptr q => new vec2[this._l + a._l]
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
                    this._p => new vec2[this._l]
                    for i as integer => 0% to this._l - 1%
                        this._p[i] => a._p[i]
                    next i
                end if
            end if
        else
            if this._l then
                dim as vec2 ptr q => new vec2[this._l * 2%]
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
    
' math.v2array.[] --------------------------------------------------------------
    
    operator v2array.[] (byref i as const integer) byref as vec2
        if (0% <= i) and (i < this._l) then return this._p[i]
        this._d.x => 0d
        this._d.y => 0d
        return this._d
    end operator
    
' math.v2array.+= --------------------------------------------------------------
    
    #macro v2a_op(_o_)
    operator v2array.##_o_##= (byref v as const vec2)
        if this._l then
            for i as integer => 0% to this._l - 1%
                this._p[i] _o_##= v
            next i
        #ifdef  MATH_VERBOSE
        else : print "<math.v2array." & #_o_ & "=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    
    #ifdef _MATH_PVEC_BI_
    operator v2array.##_o_##= (byref v as const pvec)
        if this._l then
            dim as real x => v.x, y => v.y
            for i as integer => 0% to this._l - 1%
                this._p[i].x _o_##= x
                this._p[i].y _o_##= y
            next i
        #ifdef  MATH_VERBOSE
        else : print "<math.v2array." & #_o_ & "=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    #endif
    
    operator v2array.##_o_##= (byref a as const v2array)
        if (0% < a._l) and (a._l = this._l) then
            for i as integer => 0% to this._l - 1%
                this._p[i] _o_##= a._p[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v2array." & #_o_ & "=> Unable to proceed. Arrays must have non-null matching lengths."
        #endif
        end if
    end operator
    #endmacro
    
    v2a_op(+)
    
' math.v2array.-= --------------------------------------------------------------
    
    v2a_op(-)
    
' math.v2array.*= --------------------------------------------------------------
    
    operator v2array.*= (byref n as const real)
        if this._l then
            for i as integer => 0% to this._l - 1%
                this._p[i].x *= n
                this._p[i].y *= n
            next i
        #ifdef  MATH_VERBOSE
        else : print "<math.v2array.*=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    
    #ifdef _MATH_ARRAY_BI_
    operator v2array.*= (byref a as const array)
        if (0% < a._l) and (a._l = this._l) then
            dim as real const ptr p => a.data
            for i as integer => 0% to this._l - 1%
                this._p[i] *= p[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.*=> Unable to proceed. Arrays must have non-null matching lengths."
        #endif
        end if
    end operator
    #endif
    
    v2a_op(*)
    
    #undef v2a_op
    
' math.v2array./= --------------------------------------------------------------
    
    operator v2array./= (byref n as const real)
        if this._l then
            if n then
                for i as integer => 0% to this._l - 1%
                    this._p[i].x /= n
                    this._p[i].y /= n
                next i
            else
                for i as integer => 0% to this._l - 1%
                    this._p[i].x => 0d
                    this._p[i].y => 0d
                next i
            end if
        #ifdef  MATH_VERBOSE
        else : print "<math.v2array./=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    
    #ifdef _MATH_ARRAY_BI_
    operator v2array./= (byref a as const array)
        if (0% < a._l) and (a._l = this._l) then
            dim as real const ptr p => a.data
            for i as integer => 0% to this._l - 1%
                if p[i] then
                    this._p[i].x /= p[i]
                    this._p[i].y /= p[i]
                else
                    this._p[i].x => 0d
                    this._p[i].y => 0d
                end if
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v2array./=> Unable to proceed. Arrays must have non-null matching lengths."
        #endif
        end if
    end operator
    #endif
    
    operator v2array./= (byref v as const vec2)
        if this._l then
            if v.x then
                if v.y then
                    for i as integer => 0% to this._l - 1%
                        this._p[i].x /= v.x
                        this._p[i].y /= v.y
                    next i
                else
                    for i as integer => 0% to this._l - 1%
                        this._p[i].x /= v.x
                        this._p[i].y => 0d
                    next i
                end if
            else
                if v.y then
                    for i as integer => 0% to this._l - 1%
                        this._p[i].x => 0d
                        this._p[i].y /= v.y
                    next i
                else
                    for i as integer => 0% to this._l - 1%
                        this._p[i].x => 0d
                        this._p[i].y => 0d
                    next i
                end if
            end if
        #ifdef  MATH_VERBOSE
        else : print "<math.v2array./=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    
    #ifdef _MATH_PVEC_BI_
    operator v2array./= (byref v as const pvec)
        if this._l then
            dim as real x => v.x, y => v.y
            if x then
                if y then
                    for i as integer => 0% to this._l - 1%
                        this._p[i].x /= x
                        this._p[i].y /= y
                    next i
                else
                    for i as integer => 0% to this._l - 1%
                        this._p[i].x /= x
                        this._p[i].y => 0d
                    next i
                end if
            else
                if y then
                    for i as integer => 0% to this._l - 1%
                        this._p[i].x => 0d
                        this._p[i].y /= y
                    next i
                else
                    for i as integer => 0% to this._l - 1%
                        this._p[i].x => 0d
                        this._p[i].y => 0d
                    next i
                end if
            end if
        #ifdef  MATH_VERBOSE
        else : print "<math.v2array./=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    #endif
    
    operator v2array./= (byref a as const v2array)
        if (0% < a._l) and (a._l = this._l) then
            for i as integer => 0% to this._l - 1%
                this._p[i].x => iif(a._p[i].x, this._p[i].x / a._p[i].x, 0d)
                this._p[i].y => iif(a._p[i].y, this._p[i].y / a._p[i].y, 0d)
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v2array./=> Unable to proceed. Arrays must have non-null matching lengths."
        #endif
        end if
    end operator
    
' math.v2array.cast ------------------------------------------------------------
    
    operator v2array.cast () as string
        return "<math.v2array>{ length : " & this._l & " }"
    end operator
    
' math.v2array.let -------------------------------------------------------------
    
    operator v2array.let (byref a as const v2array)
        if @this <> @a then
            this._l => 0%
            if this._p then
                delete[] this._p
                this._p => 0
            end if
            if a._l then
                this._l => a._l
                this._p => new vec2[a._l]
                for i as integer => 0% to a._l - 1%
                    this._p[i] => a._p[i]
                next i
            end if
        end if
    end operator
    
end namespace
