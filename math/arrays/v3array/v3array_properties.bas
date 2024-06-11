namespace math
    
' operators ====================================================================
    
' math.v3array.data ------------------------------------------------------------
    
    property v3array.data () as vec3 const ptr
        return this._p
    end property
    
' math.v3array.length ----------------------------------------------------------
    
    property v3array.length (byref l as const integer)
        if 0% < l then
            if 0% < this._l then
                if l <> this._l then
                    dim as vec3 ptr q => new vec3[l]
                    for i as integer => 0% to iif(l < this._l, l, this._l) - 1%
                        q[i] => this._p[i]
                    next i
                    this._l => l
                    delete[] this._p
                    this._p => q
                end if
            else
                this._l => l
                this._p => new vec3[this._l]
            end if
        elseif 0% = l then
            if 0% < this._l then
                this._l => 0%
                delete[] this._p
                this._p => 0
            end if
        end if
    end property
    
' math.v3array.xMax ------------------------------------------------------------
    
    #macro v3a_mx(_a_)
    property v3array.##_a_##Max () as real
        select case this._l
        case 0% : return 0d
        case 1% : return this._p[0%].##_a_
        case else
            dim as real r => this._p[0%].##_a_
            for i as integer => 1% to this._l - 1%
                if r < this._p[i].##_a_ then r => this._p[i].##_a_
            next i
            return r
        end select
    end property
    #endmacro
    
    v3a_mx(x)
    
' math.v3array.xMin ------------------------------------------------------------
    
    #macro v3a_mn(_a_)
    property v3array.##_a_##Min () as real
        select case this._l
        case 0% : return 0d
        case 1% : return this._p[0%].##_a_
        case else
            dim as real r => this._p[0%].##_a_
            for i as integer => 1% to this._l - 1%
                if this._p[i].##_a_ < r then r => this._p[i].##_a_
            next i
            return r
        end select
    end property
    #endmacro
    
    v3a_mn(x)
    
' math.v3array.yMax ------------------------------------------------------------
    
    v3a_mx(y)
    
' math.v3array.yMin ------------------------------------------------------------
    
    v3a_mn(y)
    
' math.v3array.zMax ------------------------------------------------------------
    
    v3a_mx(z)
    
    #undef v3a_mx
    
' math.v3array.zMin ------------------------------------------------------------
    
    v3a_mn(z)
    
    #undef v3a_mn
    
end namespace
