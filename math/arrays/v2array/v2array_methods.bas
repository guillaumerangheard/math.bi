namespace math
    
' methods ======================================================================
    
' math.v2array.forEach ---------------------------------------------------------
    
    function v2array.forEach overload (f as sub (byref as vec2), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i]) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i]) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v2array.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function v2array.forEach (f as function (byref as vec2) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i]) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i]) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v2array.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function v2array.forEach (f as sub (byref as vec2, byref as const integer), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i], i) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i], i) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v2array.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function v2array.forEach (f as function (byref as vec2, byref as const integer) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i], i) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i], i) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v2array.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
' math.v2array.forEachX --------------------------------------------------------
    
    #macro v2a_f(_a_,_b_)
    function v2array.forEach##_a_ overload (f as sub (byref as real), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i].##_b_) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i].##_b_) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v2array.forEach" & #_a_ & "> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.forEach" & #_a_ & "> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function v2array.forEach##_a_ (f as function (byref as real) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i].##_b_) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i].##_b_) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v2array.forEach" & #_a_ & "> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.forEach" & #_a_ & "> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function v2array.forEach##_a_ (f as sub (byref as real, byref as const integer), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i].##_b_, i) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i].##_b_, i) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v2array.forEach" & #_a_ & "> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.forEach" & #_a_ & "> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function v2array.forEach##_a_ (f as function (byref as real, byref as const integer) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i].##_b_, i) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i].##_b_, i) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v2array.forEach" & #_a_ & "> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.forEach" & #_a_ & "> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    #endmacro
    
    v2a_f(X,x)
    
' math.v2array.forEachY --------------------------------------------------------
    
    v2a_f(Y,y)
    
    #undef v2a_f
    
' math.v2array.map -------------------------------------------------------------
    
    function v2array.map (byref a as v2array, f as function (byref as const vec2) as vec2) as boolean
        if this._l then
            if f then
                a.length => this._l
                for i as integer => 0% to this._l - 1%
                    a._p[i] => f(this._p[i])
                next i
                return true
            #ifdef MATH_VERBOSE
            else
                print "<math.v2array.map> Unable to proceed. Mapping function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v2array.map> Unable to proceed. Array is empty."
        #endif
        end if
        return false
    end function
    
' math.v2array.mapX ------------------------------------------------------------
    
    #ifdef _MATH_ARRAY_BI_
    
    
    
' math.v2array.mapY ------------------------------------------------------------
    
    
    
    #endif
    
' math.v2array.toJSON ----------------------------------------------------------
    
    function v2array.toJSON (byref a as const boolean => false) as string
        select case this._l
        case 0% : return "[]"
        case 1% : return "[" & this._p[0%].toJSON(a) & "]"
        case else
            dim as string r => "[" & this._p[0%].toJSON(a)
            for i as integer => 1% to this._l - 1%
                r &= "," & this._p[i].toJSON(a)
            next i
            return r & "]"
        end select
    end function
    
end namespace
