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
    
    
    
' math.v3array.-= --------------------------------------------------------------
    
    
    
' math.v3array.*= --------------------------------------------------------------
    
    
    
' math.v3array./= --------------------------------------------------------------
    
    
    
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
