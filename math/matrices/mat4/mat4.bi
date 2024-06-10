#ifdef _MATH_BI_
    #ifndef _MATH_MAT4_BI_
        #define _MATH_MAT4_BI_
        namespace math
            type mat4 extends baseMatrix
                declare constructor ()
                declare constructor (byref as const mat2)
                declare constructor (byref as const mat3)
                declare constructor (byref as const mat4)
                
                declare       operator +=   (byref as const mat4)
                declare       operator -=   (byref as const mat4)
                declare       operator *=   (byref as const real)
                declare       operator *=   (byref as const mat4)
                declare       operator /=   (byref as const real)
                declare const operator cast () as string
                declare       operator let  (byref as const mat2)
                declare       operator let  (byref as const mat3)
                declare       operator let  (byref as const mat4)
                
                declare const function get                (byref as const integer, byref as const integer) as real
                declare const function getColumn          (byref as const integer) as vec4
                declare const function getRow    overload (byref as const integer) as vec4
                declare       function set                (byref as const integer, byref as const integer, byref as const real) as boolean
                declare       function setColumn overload (byref as const integer, byref as const real, byref as const real, byref as const real, byref as const real) as boolean
                declare       function setColumn          (byref as const integer, byref as const vec2                     , byref as const real, byref as const real) as boolean
                #ifdef _MATH_PVEC_BI_
                declare       function setColumn          (byref as const integer, byref as const pvec                     , byref as const real, byref as const real) as boolean
                #endif
                declare       function setColumn          (byref as const integer, byref as const vec3                                          , byref as const real) as boolean
                #ifdef _MATH_CVEC_BI_
                declare       function setColumn          (byref as const integer, byref as const cvec                                          , byref as const real) as boolean
                #endif
                #ifdef _MATH_SVEC_BI_
                declare       function setColumn          (byref as const integer, byref as const svec                                          , byref as const real) as boolean
                #endif
                declare       function setColumn          (byref as const integer, byref as const vec4)                                                                as boolean
                declare       function setRow    overload (byref as const integer, byref as const real, byref as const real, byref as const real, byref as const real) as boolean
                declare       function setRow             (byref as const integer, byref as const vec2                     , byref as const real, byref as const real) as boolean
                #ifdef _MATH_PVEC_BI_
                declare       function setRow             (byref as const integer, byref as const pvec                     , byref as const real, byref as const real) as boolean
                #endif
                declare       function setRow             (byref as const integer, byref as const vec3                                          , byref as const real) as boolean
                #ifdef _MATH_CVEC_BI_
                declare       function setRow             (byref as const integer, byref as const cvec                                          , byref as const real) as boolean
                #endif
                #ifdef _MATH_SVEC_BI_
                declare       function setRow             (byref as const integer, byref as const svec                                          , byref as const real) as boolean
                #endif
                declare       function setRow             (byref as const integer, byref as const vec4)                                                                as boolean
            end type
            
            declare operator + (byref as const mat4, byref as const mat4) as mat4
            declare operator - (byref as const mat4, byref as const mat4) as mat4
            declare operator * (byref as const mat4, byref as const real) as mat4
            declare operator * (byref as const real, byref as const mat4) as mat4
            declare operator * (byref as const mat4, byref as const mat4) as mat4
            declare operator * (byref as const mat4, byref as const vec4) as vec4
            declare operator / (byref as const mat4, byref as const real) as mat4
        end namespace
        #include "mat4_constructors.bas"
        #include "mat4_intrinsic_operators.bas"
        #include "mat4_methods.bas"
        #include "mat4_extrinsic_operators.bas"
    #endif
#endif