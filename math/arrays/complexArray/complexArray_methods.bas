namespace math
    
' methods ======================================================================
    
' math.complexArray.forEach ----------------------------------------------------
    
    function complexArray.forEach overload (f as sub (byref as complex), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i]) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i]) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.complexArray.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function complexArray.forEach (f as function (byref as complex) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i]) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i]) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.complexArray.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function complexArray.forEach (f as sub (byref as complex, byref as const integer), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i], i) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i], i) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.complexArray.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function complexArray.forEach (f as function (byref as complex, byref as const integer) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i], i) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i], i) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.complexArray.forEach> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.forEach> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
' math.complexArray.forEachI ---------------------------------------------------
    
    #macro ca_f(_a_,_b_)
    function complexArray.forEach##_a_ overload (f as sub (byref as real), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i].##_b_) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i].##_b_) : next i
                end if
                return true
            #ifdef MATH_VERBOSE
            else : print "<math.complexArray.forEach" & #_a_ & "> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.forEach" & #_a_ & "> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function complexArray.forEach##_a_ (f as function (byref as real) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i].##_b_) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i].##_b_) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.complexArray.forEach" & #_a_ & "> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.forEach" & #_a_ & "> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function complexArray.forEach##_a_ (f as sub (byref as real, byref as const integer), byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : f(this._p[i].##_b_, i) : next i
                else      : for i as integer => 0%           to this._l - 1% : f(this._p[i].##_b_, i) : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.complexArray.forEach" & #_a_ & "> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.forEach" & #_a_ & "> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    
    function complexArray.forEach##_a_ (f as function (byref as real, byref as const integer) as boolean, byref r as const boolean => false) as boolean
        if this._l then
            if f then
                if r then : for i as integer => this._l - 1% to 0% step - 1% : if false = f(this._p[i].##_b_, i) then : exit for : end if : next i
                else      : for i as integer => 0%           to this._l - 1% : if false = f(this._p[i].##_b_, i) then : exit for : end if : next i
            end if
            return true
            #ifdef MATH_VERBOSE
            else : print "<math.complexArray.forEach" & #_a_ & "> Unable to iterate. Iterating function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.forEach" & #_a_ & "> Unable to iterate. Array is empty."
        #endif
        end if
        return false
    end function
    #endmacro
    
    ca_f(I,i)
    
' math.complexArray.forEachR ---------------------------------------------------
    
    ca_f(R,r)
    
    #undef ca_f
    
' math.complexArray.map --------------------------------------------------------
    
    #ifdef _MATH_ARRAY_BI_
    function complexArray.map overload (byref a as complexArray, f as function (byref as const complex) as complex) as boolean
    #else
    function complexArray.map (byref a as complexArray, f as function (byref as const complex) as complex) as boolean
    #endif
        if this._l then
            if f then
                a.length => this._l
                for i as integer => 0% to this._l - 1%
                    a._p[i] => f(this._p[i])
                next i
                return true
            #ifdef MATH_VERBOSE
            else : print "<math.complexArray.map> Unable to proceed. Mapping function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.map> Unable to proceed. Array is empty."
        #endif
        end if
        return false
    end function
    
' math.complexArray.mapI -------------------------------------------------------
    
    #ifdef _MATH_ARRAY_BI_
    
    #macro ca_m(_a_,_b_)
    function complexArray.map##_a_ overload (byref a as array) as boolean
        if this._l then
            a.length => this._l
            dim as real const ptr p => a.data
            for i as integer => 0% to this._l - 1%
                p[i] => this._p[i].##_b_
            next i
            return true
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.map" & #_a_ & "> Unable to proceed. Array is empty."
        #endif
        end if
        return false
    end function
    
    function complexArray.map##_a_ (byref a as array, f as function (byref as const real) as real) as boolean
        if this._l then
            if f then
                a.length => this._l
                dim as real const ptr p => a.data
                for i as integer => 0% to this._l - 1%
                    p[i] => f(this._p[i].##_b_)
                next i
                return true
            #ifdef MATH_VERBOSE
            else : print "<math.complexArray.map" & #_a_ & "> Unable to proceed. Mapping function is undefined."
            #endif
            end if
        #ifdef MATH_VERBOSE
        else : print "<math.complexArray.map" & #_a_ & "> Unable to proceed. Array is empty."
        #endif
        end if
        return false
    end function
    #endmacro
    
    ca_m(I,i)
    
' math.complexArray.mapR -------------------------------------------------------
    
    ca_m(R,r)
    
    #undef ca_m
    
    #endif
    
' math.complexArray.toJSON -----------------------------------------------------
    
    function complexArray.toJSON (byref a as const boolean => false) as string
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
