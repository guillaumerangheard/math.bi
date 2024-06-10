#ifdef _MATH_BI_
    namespace math
        type baseArray
            public:
                declare const property length () as integer
            protected:
                as integer _l ' Length.
        end type
        
        property baseArray.length () as integer
            return this._l
        end property
    end namespace
#endif