namespace math
    
' constructors / destructor ====================================================
    
    constructor complexArray ()
        ' Empty.
    end constructor
    
    constructor complexArray (byref l as const integer)
        if 0% < l then
            this._l => l
            this._p => new complex[l]
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.constructor> Array length (" & l & ") must be greater than 0."
        #endif
        end if
    end constructor
    
    constructor complexArray (byref l as const integer, f as sub (byref as complex), byref r as const boolean => false)
        if 0% < l then
            this._l => l
            this._p => new complex[l]
            if f then
                if r then : for i as integer => l - 1% to 0% step -1% : f(this._p[i]) : next i
                else      : for i as integer => 0%     to l - 1%      : f(this._p[i]) : next i
                end if
            #ifdef MATH_VERBOSE
            else : print "<math.complexArray.constructor> Constructing function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.constructor> Array length (" & l & ") must be greater than 0."
        #endif
        end if
    end constructor
    
    constructor complexArray (byref l as const integer, f as sub (byref as complex, byref as const integer), byref r as const boolean => false)
        if 0% < l then
            this._l => l
            this._p => new complex[l]
            if f then
                if r then : for i as integer => l - 1% to 0% step -1% : f(this._p[i], i) : next i
                else      : for i as integer => 0%     to l - 1%      : f(this._p[i], i) : next i
                end if
            #ifdef MATH_VERBOSE
            else : print "<math.complexArray.constructor> Constructing function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.constructor> Array length (" & l & ") must be greater than 0."
        #endif
        end if
    end constructor
    
    #ifdef _MATH_ARRAY_BI_
    constructor complexArray (byref a as const array)
        if a._l then
            this._l => a._l
            this._p => new complex[a._l]
            dim as real const ptr p => a.data
            for i as integer => 0% to a._l - 1%
                this._p[i].r => p[i]
            next i
        end if
    end constructor
    
    constructor complexArray (byref a1 as const array, byref a2 as const array)
        if (0% < a1._l) and (a1._l = a2._l) then
            this._l => a1._l
            this._p => new complex[a1._l]
            dim as real const ptr p1 => a1.data, p2 => a2.data
            for i as integer => 0% to a1._l - 1%
                this._p[i].r => p1[i]
                this._p[i].i => p2[i]
            next i
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.constructor> Initial arrays must have non-null matching lengths."
        #endif
        end if
    end constructor
    #endif
    
    constructor complexArray (byref a as const complexArray)
        if a._l then
            this._l => a._l
            this._p => new complex[a._l]
            for i as integer => 0% to a._l - 1%
                this._p[i] => a._p[i]
            next i
        end if
    end constructor
    
    destructor complexArray ()
        if this._p then delete[] this._p
    end destructor
    
end namespace
