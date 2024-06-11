#ifdef _MATH_BI_
    #ifndef _MATH_MAT3_BI_
        #define _MATH_MAT3_BI_
        namespace math
            type mat3 extends baseMatrix
                declare constructor ()
                declare constructor (byref as const mat2)
                declare constructor (byref as const mat3)
                
                declare       operator +=   (byref as const mat3)
                declare       operator -=   (byref as const mat3)
                declare       operator *=   (byref as const real)
                declare       operator *=   (byref as const mat3)
                declare       operator /=   (byref as const real)
                declare const operator cast () as string
                declare       operator let  (byref as const mat2)
                declare       operator let  (byref as const mat3)
                
                declare static function fromScale       overload (byref as const real)                                                 as mat3
                declare static function fromScale                (byref as const real, byref as const real, byref as const real => 1d) as mat3
                declare static function fromTranslation overload (byref as const real, byref as const real) as mat3
                declare static function fromTranslation          (byref as const vec2)                      as mat3
                #ifdef _MATH_PVEC_BI_
                declare static function fromTranslation          (byref as const pvec)                      as mat3
                #endif
                declare const  function get                      (byref as const integer, byref as const integer) as real
                declare const  function getColumn                (byref as const integer) as vec3
                declare const  function getRow          overload (byref as const integer) as vec3
                declare        function set                      (byref as const integer, byref as const integer, byref as const real) as boolean
                declare        function setColumn       overload (byref as const integer, byref as const real, byref as const real, byref as const real) as boolean
                declare        function setColumn                (byref as const integer, byref as const vec2                     , byref as const real) as boolean
                #ifdef _MATH_PVEC_BI_
                declare        function setColumn                (byref as const integer, byref as const pvec                     , byref as const real) as boolean
                #endif
                declare        function setColumn                (byref as const integer, byref as const vec3)                                           as boolean
                #ifdef _MATH_CVEC_BI_
                declare        function setColumn                (byref as const integer, byref as const cvec)                                           as boolean
                #endif
                #ifdef _MATH_SVEC_BI_
                declare        function setColumn                (byref as const integer, byref as const svec)                                           as boolean
                #endif
                declare        function setRow          overload (byref as const integer, byref as const real, byref as const real, byref as const real) as boolean
                declare        function setRow                   (byref as const integer, byref as const vec2                     , byref as const real) as boolean
                #ifdef _MATH_PVEC_BI_
                declare        function setRow                   (byref as const integer, byref as const pvec                     , byref as const real) as boolean
                #endif
                declare        function setRow                   (byref as const integer, byref as const vec3)                                           as boolean
                #ifdef _MATH_CVEC_BI_
                declare        function setRow                   (byref as const integer, byref as const cvec)                                           as boolean
                #endif
                #ifdef _MATH_SVEC_BI_
                declare        function setRow                   (byref as const integer, byref as const svec)                                           as boolean
                #endif
                declare const  function toJSON                   (byref as const boolean => false) as string
            end type
            
            declare operator + (byref as const mat3, byref as const mat3) as mat3
            declare operator - (byref as const mat3, byref as const mat3) as mat3
            declare operator * (byref as const mat3, byref as const real) as mat3
            declare operator * (byref as const real, byref as const mat3) as mat3
            declare operator * (byref as const mat3, byref as const mat3) as mat3
            declare operator * (byref as const mat3, byref as const vec3) as vec3
            #ifdef _MATH_CVEC_BI_
            #ifdef MATH_FORCE_CARTESIAN
            declare operator * (byref as const mat3, byref as const cvec) as vec3
            #else
            declare operator * (byref as const mat3, byref as const cvec) as cvec
            #endif
            #endif
            #ifdef _MATH_SVEC_BI_
            #ifdef MATH_FORCE_CARTESIAN
            declare operator * (byref as const mat3, byref as const svec) as vec3
            #else
            declare operator * (byref as const mat3, byref as const svec) as svec
            #endif
            #endif
            declare operator / (byref as const mat3, byref as const real) as mat3
        end namespace
        #include "mat3_constructors.bas"
        #include "mat3_intrinsic_operators.bas"
        #include "mat3_methods.bas"
        #include "mat3_extrinsic_operators.bas"
    #endif
#endif