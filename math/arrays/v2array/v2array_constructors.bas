namespace math
    
' constructors / destructor ====================================================
    
    constructor v2array ()
        ' Empty.
    end constructor
    
    constructor v2array (byref l as const integer)
        if 0% < l then
            this._l => l
            this._p => new vec2[l]
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.constructor> Array length (" & l & ") must be greater than 0."
        #endif
        end if
    end constructor
    
    constructor v2array (byref l as const integer, f as sub (byref as vec2), byref r as const boolean => false)
        if 0% < l then
            this._l => l
            this._p => new vec2[l]
            if f then
                if r then : for i as integer => l - 1% to 0% step -1% : f(this._p[i]) : next i
                else      : for i as integer => 0%     to l - 1%      : f(this._p[i]) : next i
                end if
            #ifdef MATH_VERBOSE
            else : print "<math.v2array.constructor> Constructing function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.constructor> Array length (" & l & ") must be greater than 0."
        #endif
        end if
    end constructor
    
    constructor v2array (byref l as const integer, f as sub (byref as vec2, byref as const integer), byref r as const boolean => false)
        if 0% < l then
            this._l => l
            this._p => new vec2[l]
            if f then
                if r then : for i as integer => l - 1% to 0% step -1% : f(this._p[i], i) : next i
                else      : for i as integer => 0%     to l - 1%      : f(this._p[i], i) : next i
                end if
            #ifdef MATH_VERBOSE
            else : print "<math.v2array.constructor> Constructing function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.constructor> Array length (" & l & ") must be greater than 0."
        #endif
        end if
    end constructor
    
    #ifdef _MATH_ARRAY_BI_
    constructor v2array (byref a1 as const array, byref a2 as const array)
        if (0% < a1._l) and (a1._l = a2._l) then
            this._l => a1._l
            this._p => new vec2[a1._l]
            dim as real const ptr p1 => a1.data, p2 => a2.data
            for i as integer => 0% to this._l - 1%
                this._p[i].x => p1[i]
                this._p[i].y => p2[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.constructor> Arrays must have non-null matching lengths."
        #endif
        end if
    end constructor
    #endif
    
    constructor v2array (byref a as const v2array)
        if a._l then
            this._l => a._l
            this._p => new vec2[a._l]
            for i as integer => 0% to a._l - 1%
                this._p[i] => a._p[i]
            next i
        end if
    end constructor
    
    destructor v2array ()
        if this._p then delete[] this._p
    end destructor
    
end namespace
