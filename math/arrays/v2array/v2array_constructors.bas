namespace math
    
' constructors / destructor ====================================================
    
    constructor v2array ()
        ' Empty.
    end constructor
    
    
    
    destructor v2array ()
        if this._p then delete[] this._p
    end destructor
    
end namespace
