namespace math
    
' constructors / destructor ====================================================
    
    constructor array ()
        ' Empty.
    end constructor
    
    constructor array (byref l as const integer)
        if 0% < l then
            this._l => l
            this._p => new real[l]
        #ifdef MATH_VERBOSE
        else : print "<math.array.constructor> Array length (" & l & ") must be greater than 0."
        #endif
        end if
    end constructor
    
    constructor array (byref l as const integer, f as sub (byref as real), byref r as const boolean => false)
        if 0% < l then
            this._l => l
            this._p => new real[l]
            if f then
                if r then : for i as integer => l - 1% to 0% step -1% : f(this._p[i]) : next i
                else      : for i as integer => 0%     to l - 1%      : f(this._p[i]) : next i
                end if
            #ifdef MATH_VERBOSE
            else : print "<math.array.constructor> Constructing function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.array.constructor> Array length (" & l & ") must be greater than 0."
        #endif
        end if
    end constructor
    
    constructor array (byref l as const integer, f as sub (byref as real, byref as const integer), byref r as const boolean => false)
        if 0% < l then
            this._l => l
            this._p => new real[l]
            if f then
                if r then : for i as integer => l - 1% to 0% step -1% : f(this._p[i], i) : next i
                else      : for i as integer => 0%     to l - 1%      : f(this._p[i], i) : next i
                end if
            #ifdef MATH_VERBOSE
            else : print "<math.array.constructor> Constructing function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.array.constructor> Array length (" & l & ") must be greater than 0."
        #endif
        end if
    end constructor
    
    constructor array (byref a as const array)
        if a._l then
            this._l => a._l
            this._p => new real[a._l]
            for i as integer => 0% to a._l - 1%
                this._p[i] => a._p[i]
            next i
        end if
    end constructor
    
    destructor array ()
        if this._p then delete[] this._p
    end destructor
    
end namespace
