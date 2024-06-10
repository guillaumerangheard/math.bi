namespace math
    
' properties ===================================================================
    
' math.v2array.data ------------------------------------------------------------
    
    property v2array.data () as vec2 const ptr
        return this._p
    end property
    
' math.v2array.length ----------------------------------------------------------
    
    property v2array.length (byref l as const integer)
        if 0% < l then
            if 0% < this._l then
                if l <> this._l then
                    dim as vec2 ptr q => new vec2[l]
                    for i as integer => 0% to iif(l < this._l, l, this._l) - 1%
                        q[i] => this._p[i]
                    next i
                    this._l => l
                    delete[] this._p
                    this._p => q
                end if
            else
                this._l => l
                this._p => new vec2[this._l]
            end if
        elseif 0% = l then
            if 0% < this._l then
                this._l => 0%
                delete[] this._p
                this._p => 0
            end if
        end if
    end property
    
' math.v2array.xMax ------------------------------------------------------------
    
    property v2array.xMax () as real
        select case this._l
        case 0% : return 0d
        case 1% : return this._p[0%].x
        case else
            dim as real r => this._p[0%].x
            for i as integer => 1% to this._l - 1%
                if r < this._p[i].x then r => this._p[i].x
            next i
            return r
        end select
    end property
    
' math.v2array.xMin ------------------------------------------------------------
    
    property v2array.xMin () as real
        select case this._l
        case 0% : return 0d
        case 1% : return this._p[0%].x
        case else
            dim as real r => this._p[0%].x
            for i as integer => 1% to this._l - 1%
                if this._p[i].x < r then r => this._p[i].x
            next i
            return r
        end select
    end property
    
' math.v2array.yMax ------------------------------------------------------------
    
    property v2array.yMax () as real
        select case this._l
        case 0% : return 0d
        case 1% : return this._p[0%].y
        case else
            dim as real r => this._p[0%].y
            for i as integer => 1% to this._l - 1%
                if r < this._p[i].y then r => this._p[i].y
            next i
            return r
        end select
    end property
    
' math.v2array.yMin ------------------------------------------------------------
    
    property v2array.yMin () as real
        select case this._l
        case 0% : return 0d
        case 1% : return this._p[0%].y
        case else
            dim as real r => this._p[0%].y
            for i as integer => 1% to this._l - 1%
                if this._p[i].y < r then r => this._p[i].y
            next i
            return r
        end select
    end property
    
end namespace
