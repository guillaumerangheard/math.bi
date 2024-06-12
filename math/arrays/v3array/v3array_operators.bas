namespace math
    
' operators ====================================================================
    
' math.v3array.&= --------------------------------------------------------------
    
    #macro v3a_e(_t_)
    operator v3array.&= (byref v as const _t_)
        if this._l then
            this._l += 1%
            dim as vec3 ptr q => new vec3[this._l]
            for i as integer => 0% to this._l - 2%
                q[i] => this._p[i]
            next i
            this._p[this._l - 1%] => v
            delete[] this._p
            this._p => q
        else
            this._l => 1%
            this._p => new vec3[1%]
            this._p[0%] => v
        end if
    end operator
    #endmacro
    v3a_e(vec2)
    #ifdef _MATH_PVEC_BI_
    v3a_e(pvec)
    #endif
    v3a_e(vec3)
    #ifdef _MATH_CVEC_BI_
    v3a_e(cvec)
    #endif
    #ifdef _MATH_SVEC_BI_
    v3a_e(svec)
    #endif
    #undef v3a_e
    
    #macro v3a_e(_a_,_t_)
    operator v3array.&= (byref a as const _a_##array)
        if a._l then
            if this._l then
                dim as vec3 ptr q => new vec3[this._l + a._l]
                dim as integer i
                for i => 0% to this._l - 1%
                    q[i] => this._p[i]
                next i
                dim as _t_ const ptr p => a.data
                for i => 0% to a._l - 1%
                    q[this._l + i] => p[i]
                next i
                this._l += a._l
                delete[] this._p
                this._p => q
            else
                this._l => a._l
                this._p => new vec3[this._l]
                dim as _t_ const ptr p => a.data
                for i as integer => 0% to this._l - 1%
                    this._p[i] => p[i]
                next i
            end if
        end if
    end operator
    #endmacro
    #ifdef _MATH_V2ARRAY_BI_
    v3a_e(v2,vec2)
    #endif
    #ifdef _MATH_PVARRAY_BI_
    v3a_e(pv,pvec)
    #endif
    #undef v3a_e
    
    operator v3array.&= (byref a as const v3array)
        if @this <> @a then
            if a._l then
                if this._l then
                    dim as vec3 ptr q => new vec3[this._l + a._l]
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
                    this._p => new vec3[this._l]
                    for i as integer => 0% to this._l - 1%
                        this._p[i] => a._p[i]
                    next i
                end if
            end if
        else
            if this._l then
                dim as vec3 ptr q => new vec3[this._l * 2%]
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
    
' math.v3array.[] --------------------------------------------------------------
    
    operator v3array.[] (byref i as const integer) byref as vec3
        if (0% <= i) and (i < this._l) then return this._p[i]
        this._d.x => 0d
        this._d.y => 0d
        this._d.z => 0d
        return this._d
    end operator
    
' math.v3array.+= --------------------------------------------------------------
    
    #macro v3a_op1(_o_)
    operator v3array.##_o_##= (byref v as const vec3)
        if this._l then
            for i as integer => 0% to this._l - 1%
                this._p[i] _o_##= v
            next i
        #ifdef  MATH_VERBOSE
        else : print "<math.v3array." & #_o_ & "=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    
    #ifdef _MATH_CVEC_BI_
    operator v3array.##_o_##= (byref v as const cvec)
        if this._l then
            dim as real x => v.x, y => v.y
            for i as integer => 0% to this._l - 1%
                this._p[i].x _o_##= x
                this._p[i].y _o_##= y
                this._p[i].z _o_##= v.z
            next i
        #ifdef  MATH_VERBOSE
        else : print "<math.v3array." & #_o_ & "=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    #endif
    
    #ifdef _MATH_SVEC_BI_
    
    #endif
    #endmacro
    
    #macro v3a_op2(_o_)
    operator v3array.##_o_##= (byref a as const v3array)
        if (0% < a._l) and (a._l = this._l) then
            for i as integer => 0% to this._l - 1%
                this._p[i] _o_##= a._p[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v3array." & #_o_ & "=> Unable to proceed. Arrays must have non-null matching lengths."
        #endif
        end if
    end operator
    #endmacro
    
    v3a_op1(+)
    v3a_op2(+)
    
' math.v3array.-= --------------------------------------------------------------
    
    v3a_op1(-)
    v3a_op2(-)
    
' math.v3array.*= --------------------------------------------------------------
    
    operator v3array.*= (byref n as const real)
        if this._l then
            for i as integer => 0% to this._l - 1%
                this._p[i].x *= n
                this._p[i].y *= n
                this._p[i].z *= n
            next i
        end if
    end operator
    
    v3a_op1(*)
    #undef v3a_op1
    v3a_op2(*)
    #undef v3a_op2
    
' math.v3array./= --------------------------------------------------------------
    
    operator v3array./= (byref n as const real)
        if this._l then
            if n then
                for i as integer => 0% to this._l - 1%
                    this._p[i].x /= n
                    this._p[i].y /= n
                    this._p[i].z /= n
                next i
            else
                for i as integer => 0% to this._l - 1%
                    this._p[i].x => 0d
                    this._p[i].y => 0d
                    this._p[i].z => 0d
                next i
            end if
        end if
    end operator
    
    operator v3array./= (byref v as const vec3)
        if this._l then
            if v.x then
                if v.y then
                    if v.z then
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x /= v.x
                            this._p[i].y /= v.y
                            this._p[i].z /= v.z
                        next i
                    else
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x /= v.x
                            this._p[i].y /= v.y
                            this._p[i].z => 0d
                        next i
                    end if
                else
                    if v.z then
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x /= v.x
                            this._p[i].y => 0d
                            this._p[i].z /= v.z
                        next i
                    else
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x /= v.x
                            this._p[i].y => 0d
                            this._p[i].z => 0d
                        next i
                    end if
                end if
            else
                if v.y then
                    if v.z then
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x => 0d
                            this._p[i].y /= v.y
                            this._p[i].z /= v.z
                        next i
                    else
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x => 0d
                            this._p[i].y /= v.y
                            this._p[i].z => 0d
                        next i
                    end if
                else
                    if v.z then
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x => 0d
                            this._p[i].y => 0d
                            this._p[i].z /= v.z
                        next i
                    else
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x => 0d
                            this._p[i].y => 0d
                            this._p[i].z => 0d
                        next i
                    end if
                end if
            end if
        #ifdef  MATH_VERBOSE
        else : print "<math.v3array./=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    
    #ifdef _MATH_CVEC_BI_
    operator v3array./= (byref v as const cvec)
        if this._l then
            dim as real x => v.x, y => v.y
            if x then
                if y then
                    if v.z then
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x /= x
                            this._p[i].y /= y
                            this._p[i].z /= v.z
                        next i
                    else
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x /= x
                            this._p[i].y /= y
                            this._p[i].z => 0d
                        next i
                    end if
                else
                    if v.z then
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x /= x
                            this._p[i].y => 0d
                            this._p[i].z /= v.z
                        next i
                    else
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x /= x
                            this._p[i].y => 0d
                            this._p[i].z => 0d
                        next i
                    end if
                end if
            else
                if y then
                    if v.z then
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x => 0d
                            this._p[i].y /= y
                            this._p[i].z /= v.z
                        next i
                    else
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x => 0d
                            this._p[i].y /= y
                            this._p[i].z => 0d
                        next i
                    end if
                else
                    if v.z then
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x => 0d
                            this._p[i].y => 0d
                            this._p[i].z /= v.z
                        next i
                    else
                        for i as integer => 0% to this._l - 1%
                            this._p[i].x => 0d
                            this._p[i].y => 0d
                            this._p[i].z => 0d
                        next i
                    end if
                end if
            end if
        #ifdef  MATH_VERBOSE
        else : print "<math.v3array./=> Unable to proceed. Array is empty."
        #endif
        end if
    end operator
    #endif
    
    operator v3array./= (byref a as const v3array)
        if (0% < a._l) and (a._l = this._l) then
            for i as integer => 0% to this._l - 1%
                this._p[i].x => iif(a._p[i].x, this._p[i].x / a._p[i].x, 0d)
                this._p[i].y => iif(a._p[i].y, this._p[i].y / a._p[i].y, 0d)
                this._p[i].z => iif(a._p[i].z, this._p[i].z / a._p[i].z, 0d)
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v3array." & #_o_ & "=> Unable to proceed. Arrays must have non-null matching lengths."
        #endif
        end if
    end operator
    
' math.v3array.cast ------------------------------------------------------------
    
    operator v3array.cast () as string
        return "<math.v3array>{ length : " & this._l & " }"
    end operator
    
' math.v3array.let -------------------------------------------------------------
    
    operator v3array.let (byref a as const v3array)
        if @this <> @a then
            this._l => 0%
            if this._p then
                delete[] this._p
                this._p => 0
            end if
            if a._l then
                this._l => a._l
                this._p => new vec3[a._l]
                for i as integer => 0% to a._l - 1%
                    this._p[i] => a._p[i]
                next i
            end if
        end if
    end operator
    
end namespace
