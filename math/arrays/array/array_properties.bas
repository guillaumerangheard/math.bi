namespace math
    
' properties ===================================================================
    
' math.array.avg ---------------------------------------------------------------
    
    property array.avg () as real
        select case this._l
        case 0% : return 0d
        case 1% : return this._p[0%]
        case else
            dim as real r
            for i as integer => 0% to this._l - 1%
                r += this._p[i]
            next i
            return r / m_crl(this._l)
        end select
    end property
    
' math.array.data --------------------------------------------------------------
    
    property array.data () as real const ptr
        return this._p
    end property
    
' math.array.length ------------------------------------------------------------
    
    property array.length (byref l as const integer)
        if 0% < l then
            if 0% < this._l then
                if l <> this._l then
                    dim as real ptr q => new real[l]
                    for i as integer => 0% to iif(l < this._l, l, this._l) - 1%
                        q[i] => this._p[i]
                    next i
                    this._l => l
                    delete[] this._p
                    this._p => q
                end if
            else
                this._l => l
                this._p => new real[this._l]
            end if
        elseif 0% = l then
            if 0% < this._l then
                this._l => 0%
                delete[] this._p
                this._p => 0
            end if
        end if
    end property
    
' math.array.max ---------------------------------------------------------------
    
    property array.max () as real
        select case this._l
        case 0% : return 0d
        case 1% : return this._p[0%]
        case else
            dim as real r => this._p[0%]
            for i as integer => 1% to this._l - 1%
                if r < this._p[i] then r => this._p[i]
            next i
            return r
        end select
    end property
    
' math.array.min ---------------------------------------------------------------
    
    property array.min () as real
        select case this._l
        case 0% : return 0d
        case 1% : return this._p[0%]
        case else
            dim as real r => this._p[0%]
            for i as integer => 1% to this._l - 1%
                if this._p[i] < r then r => this._p[i]
            next i
            return r
        end select
    end property
    
end namespace
