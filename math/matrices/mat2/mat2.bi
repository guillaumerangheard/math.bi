#ifdef _MATH_BI_
    #ifndef _MATH_MAT2_BI_
        #define _MATH_MAT2_BI_
        namespace math
            type mat2 extends baseMatrix
                declare constructor ()
                declare constructor (byref as const mat2)
                
                declare       operator +=   (byref as const mat2)
                declare       operator -=   (byref as const mat2)
                declare       operator *=   (byref as const real)
                declare       operator *=   (byref as const mat2)
                declare       operator /=   (byref as const real)
                declare const operator cast () as string
                declare       operator let  (byref as const mat2)
                
                #ifdef _MATH_ANGLE_BI_
                declare static function fromRotation overload (byref as const real, byref as const angleUnit => defaultAngleUnit) as mat2
                declare static function fromRotation          (byref as const angle)                                              as mat2
                #else
                declare static function fromRotation          (byref as const real) as mat2
                #endif
                declare static function fromScale    overload (byref as const real)                      as mat2
                declare static function fromScale             (byref as const real, byref as const real) as mat2
                declare const  function get                   (byref as const integer, byref as const integer) as real
                declare const  function getColumn             (byref as const integer) as vec2
                declare const  function getRow                (byref as const integer) as vec2
                declare        function set                   (byref as const integer, byref as const integer, byref as const real) as boolean
                declare        function setColumn    overload (byref as const integer, byref as const real, byref as const real) as boolean
                declare        function setColumn             (byref as const integer, byref as const vec2)                      as boolean
                #ifdef _MATH_PVEC_BI_
                declare        function setColumn             (byref as const integer, byref as const pvec)                      as boolean
                #endif
                declare        function setRow       overload (byref as const integer, byref as const real, byref as const real) as boolean
                declare        function setRow                (byref as const integer, byref as const vec2)                      as boolean
                #ifdef _MATH_PVEC_BI_
                declare        function setRow                (byref as const integer, byref as const pvec)                      as boolean
                #endif
                declare const  function toJSON                (byref as const boolean => false) as string
            end type
            
            declare operator + (byref as const mat2, byref as const mat2) as mat2
            declare operator - (byref as const mat2, byref as const mat2) as mat2
            declare operator * (byref as const mat2, byref as const real) as mat2
            declare operator * (byref as const real, byref as const mat2) as mat2
            declare operator * (byref as const mat2, byref as const mat2) as mat2
            declare operator * (byref as const mat2, byref as const vec2) as vec2
            #ifdef _MATH_PVEC_BI_
            #ifdef MATH_FORCE_CARTESIAN
            declare operator * (byref as const mat2, byref as const pvec) as vec2
            #else
            declare operator * (byref as const mat2, byref as const pvec) as pvec
            #endif
            #endif
            declare operator / (byref as const mat2, byref as const real) as mat2
        end namespace
        #include "mat2_constructors.bas"
        #include "mat2_intrinsic_operators.bas"
        #include "mat2_methods.bas"
        #include "mat2_extrinsic_operators.bas"
    #endif
#endif