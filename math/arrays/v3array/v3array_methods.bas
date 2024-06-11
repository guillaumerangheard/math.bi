namespace math
    
' methods ======================================================================
    
' math.v3array.forEach ---------------------------------------------------------
    
    function v3array.forEach overload (f as sub (byref as vec3), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i]) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i]) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v3array.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v3array.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function v3array.forEach (f as function (byref as vec3) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i]) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i]) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v3array.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v3array.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function v3array.forEach (f as sub (byref as vec3, byref as const integer), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i], i) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i], i) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v3array.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v3array.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function v3array.forEach (f as function (byref as vec3, byref as const integer) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i], i) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i], i) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v3array.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v3array.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
' math.v3array.forEachX --------------------------------------------------------
    
    #macro v3a_f(_a_,_b_)
    function v3array.forEach##_a_ overload (f as sub (byref as real), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i].##_b_) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i].##_b_) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v3array.forEach" & #_a_ & "> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v3array.forEach" & #_a_ & "> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function v3array.forEach##_a_ (f as function (byref as real) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i].##_b_) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i].##_b_) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v3array.forEach" & #_a_ & "> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v3array.forEach" & #_a_ & "> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function v3array.forEach##_a_ (f as sub (byref as real, byref as const integer), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i].##_b_, i) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i].##_b_, i) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v3array.forEach" & #_a_ & "> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v3array.forEach" & #_a_ & "> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function v3array.forEach##_a_ (f as function (byref as real, byref as const integer) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i].##_b_, i) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i].##_b_, i) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.v3array.forEach" & #_a_ & "> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.v3array.forEach" & #_a_ & "> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    #endmacro
    
    v3a_f(X,x)
    
' math.v3array.forEachY --------------------------------------------------------
    
    v3a_f(Y,y)
    
' math.v3array.forEachZ --------------------------------------------------------
    
    v3a_f(Z,z)
    
    #undef v3a_f
    
' math.v3array.map -------------------------------------------------------------
    
    
    
' math.v3array.mapX ------------------------------------------------------------
    
    
    
' math.v3array.mapY ------------------------------------------------------------
    
    
    
' math.v3array.mapZ ------------------------------------------------------------
    
    
    
' math.v3array.normalise -------------------------------------------------------
    
    function v3array.normalise () as boolean
        if this._l then
            for i as integer => 0% to this._l - 1%
                this._p[i].normalise()
            next i
            return true
        #ifdef _MATH_VERBOSE
        else : print "<math.v3array.normalise> Unable to proceed. Array is empty."
        #endif
        end if
        return false
    end function
    
' math.v3array.toJSON ----------------------------------------------------------
    
    function v3array.toJSON (byref a as const boolean => false) as string
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
