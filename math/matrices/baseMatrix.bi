#ifdef _MATH_BI_
    namespace math
        type baseMatrix
            public:
                declare destructor ()
                declare const property data () as real const ptr
            protected:
                as real ptr _p ' Payload.
        end type
        destructor baseMatrix ()
            delete[] this._p
        end destructor
        property baseMatrix.data () as real const ptr
            return this._p
        end property
    end namespace
#endif