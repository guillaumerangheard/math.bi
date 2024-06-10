namespace math
    
' properties ===================================================================
    
' math.complexArray.avg --------------------------------------------------------
    
    property complexArray.avg () as complex
        select case this._l
        case 0% : return complex()
        case 1% : return this._p[0%]
        case else
            dim as complex r
            for i as integer => 0% to this._l - 1%
                r += this._p[i]
            next i
            return r / m_crl(this._l)
        end select
    end property
    
' math.complexArray.data -------------------------------------------------------
    
    property complexArray.data () as complex const ptr
        return this._p
    end property
    
' math.complexArray.length -----------------------------------------------------
    
    property complexArray.length (byref l as const integer)
        if 0% < l then
            if 0% < this._l then
                if l <> this._l then
                    dim as complex ptr q => new complex[l]
                    for i as integer => 0% to iif(l < this._l, l, this._l) - 1%
                        q[i] => this._p[i]
                    next i
                    this._l => l
                    delete[] this._p
                    this._p => q
                end if
            else
                this._l => l
                this._p => new complex[this._l]
            end if
        elseif 0% = l then
            if 0% < this._l then
                this._l => 0%
                delete[] this._p
                this._p => 0
            end if
        end if
    end property
    
' math.complexArray.max --------------------------------------------------------
    
    
    
' math.complexArray.min --------------------------------------------------------
    
    
    
end namespace
