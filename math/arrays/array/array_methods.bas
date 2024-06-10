namespace math
    
' methods ======================================================================
    
' math.array.forEach -----------------------------------------------------------
    
    function array.forEach overload (f as sub (byref as real), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i]) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i]) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.array.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.array.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function array.forEach (f as function (byref as real) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i]) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i]) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.array.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.array.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function array.forEach (f as sub (byref as real, byref as const integer), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i], i) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i], i) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.array.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.array.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function array.forEach (f as function (byref as real, byref as const integer) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i], i) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i], i) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.array.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.array.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
' math.array.map ---------------------------------------------------------------
    
    function array.map overload (byref a as array, f as function (byref as const real) as real) as boolean
        if this._l then
            if f then
                a.length => this._l
                for i as integer => 0% to this._l - 1%
                    a._p[i] => f(this._p[i])
                next i
            #ifdef MATH_VERBOSE
            else : print "<math.array.map> Unable to proceed. Mapping function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.array.map> Unable to proceed. Array is empty."
        #endif
        end if
        return false
    end function
    
    function array.map (byref a as array, f as function (byref as const real, byref as const integer) as real) as boolean
        if this._l then
            if f then
                a.length => this._l
                for i as integer => 0% to this._l - 1%
                    a._p[i] => f(this._p[i], i)
                next i
            #ifdef MATH_VERBOSE
            else : print "<math.array.map> Unable to proceed. Mapping function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.array.map> Unable to proceed. Array is empty."
        #endif
        end if
        return false
    end function
    
' math.array.toJSON ------------------------------------------------------------
    
    function array.toJSON () as string
        select case this._l
        case 0% : return "[]"
        case 1% : return "[" & this._p[0%] & "]"
        case else
            dim as string r => "[" & this._p[0%]
            for i as integer => 1% to this._l - 1%
                r &= "," & this._p[i]
            next i
            return r & "]"
        end select
    end function
    
end namespace
