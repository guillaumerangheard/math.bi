namespace math
    
' constructors / destructor ====================================================
    
    constructor v4array ()
        ' Empty.
    end constructor
    
    #ifdef _MATH_ARRAY_BI_
    constructor v4array (byref a1 as const array, byref a2 as const array, byref a3 as const array, byref a4 as const array)
        if (0% < a1._l) and (a1._l = a2._l) and (a2._l = a3._l) and (a3._l = a4._l) then
            this._l => a1._l
            this._p => new vec4[a1._l]
            dim as real const ptr p1 => a1.data, p2 => a2.data, p3 => a3.data, p4 => a4.data
            for i as integer => 0% to a1._l - 1%
                this._p[i].x => p1[i]
                this._p[i].y => p2[i]
                this._p[i].z => p3[i]
                this._p[i].w => p4[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v4array.constructor> Arrays must have non-null matching lengths."
        #endif
        end if
    end constructor
    #endif
    
    #macro v4_c(_a_,_t_)
    constructor v4array (byref a as const _a_##array)
        if a._l then
            this._l => a._l
            this._p => new vec4[a._l]
            dim as _t_ const ptr p => a.data
            for i as integer => 0% to this._l - 1%
                this._p[i].x => p[i].x
                this._p[i].y => p[i].y
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v4array.constructor> Initial array is empty."
        #endif
        end if
    end constructor
    
    #ifdef _MATH_ARRAY_BI_
    constructor v4array (byref a12 as const _a_##array, byref a3 as const array, byref a4 as const array)
        if (0% < a12._l) and (a12._l = a3._l) and (a3._l = a4._l) then
            this._l => a12._l
            this._p => new vec4[a12._l]
            dim as _t_ const ptr p12 => a12.data
            dim as real const ptr p3 => a3.data, p4 => a4.data
            for i as integer => 0% to a12._l - 1%
                this._p[i].x => p12[i].x
                this._p[i].y => p12[i].y
                this._p[i].z => p3[i]
                this._p[i].w => p4[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v4array.constructor> Initial arrays must have matching non-null lengths."
        #endif
        end if
    end constructor
    #endif
    #endmacro
    #ifdef _MATH_V2ARRAY_BI_
    v4_c(v2,vec2)
    #endif
    #ifdef _MATH_PVARRAY_BI_
    v4_c(pv,pvec)
    #endif
    #undef v4_c
    
    #macro v4_c(_a_,_t_)
    constructor v4array (byref a as const _a_##array)
        if a._l then
            this._l => a._l
            this._p => new vec4[a._l]
            dim as _t_ const ptr p => a.data
            for i as integer => 0% to this._l - 1%
                this._p[i].x => p[i].x
                this._p[i].y => p[i].y
                this._p[i].z => p[i].z
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v4array.constructor> Initial array is empty."
        #endif
        end if
    end constructor
    
    #ifdef _MATH_ARRAY_BI_
    constructor v4array (byref a123 as const _a_##array, byref a4 as const array)
        if (0% < a123._l) and (a123._l = a4._l) then
            this._l => a123._l
            this._p => new vec4[a123._l]
            dim as _t_ const ptr p123 => a123.data
            dim as real const ptr p4 => a4.data
            for i as integer => 0% to a123._l - 1%
                this._p[i].x => p123[i].x
                this._p[i].y => p123[i].y
                this._p[i].z => p123[i].z
                this._p[i].w => p4[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v4array.constructor> Initial arrays must have matching non-null lengths."
        #endif
        end if
    end constructor
    #endif
    #endmacro
    #ifdef _MATH_V3ARRAY_BI_
    v4_c(v3,vec3)
    #endif
    #ifdef _MATH_CVARRAY_BI_
    v4_c(cv,cvec)
    #endif
    #ifdef _MATH_SVARRAY_BI_
    v4_c(sv,svec)
    #endif
    #undef v4_c
    
    constructor v4array (byref a as const v4array)
        if a._l then
            this._l => a._l
            this._p => new vec4[a._l]
            for i as integer => 0% to this._l - 1%
                this._p[i] => a._p[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v4array.constructor> Initial array is empty."
        #endif
        end if
    end constructor
    
    destructor v4array ()
        if this._p then delete[] this._p
    end destructor
    
end namespace
