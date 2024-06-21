#ifdef _MATH_BI_
    #ifndef _MATH_QUATERNION_BI_
        #define _MATH_QUATERNION_BI_
        namespace math
            type quaternion
                as real x, y, z, w
                
                declare constructor ()
                declare constructor (byref as const real, byref as const real, byref as const real, byref as const real)
                declare constructor (byref as const vec2                     , byref as const real, byref as const real)
                #ifdef _MATH_PVEC_BI_
                declare constructor (byref as const pvec                     , byref as const real, byref as const real)
                #endif
                declare constructor (byref as const vec3                                          , byref as const real)
                #ifdef _MATH_CVEC_BI_
                declare constructor (byref as const cvec                                          , byref as const real)
                #endif
                #ifdef _MATH_SVEC_BI_
                declare constructor (byref as const svec                                          , byref as const real)
                #endif
                declare constructor (byref as const vec4)
                declare constructor (byref as const quaternion)
                
                declare       operator *=   (byref as const real)
                declare       operator *=   (byref as const quaternion)
                declare       operator /=   (byref as const real)
                declare const operator cast () as string
                declare       operator let  (byref as const quaternion)
                
                declare const property conjugate () as quaternion
                declare const property inverse   () as quaternion
                declare const property norm      () as real
                declare       property norm      (byref n as const real)
                declare const property versor    () as quaternion
                declare const property xy        () as vec2
                declare       property xy        (byref as const vec2)
                #ifdef _MATH_PVEC_BI_
                declare       property xy        (byref as const pvec)
                #endif
                declare const property xyz       () as vec3
                declare       property xyz       (byref as const vec3)
                #ifdef _MATH_CVEC_BI_
                declare       property xyz       (byref as const cvec)
                #endif
                #ifdef _MATH_SVEC_BI_
                declare       property xyz       (byref as const svec)
                #endif
                
                declare const function isUnit    overload () as boolean
                declare const function isUnit             (byref as const real) as boolean
                declare       sub      normalise          ()
                declare const function toJSON             (byref as const boolean => false) as string
            end type
            
            declare operator *  (byref as const quaternion, byref as const real)       as quaternion
            declare operator *  (byref as const real      , byref as const quaternion) as quaternion
            declare operator *  (byref as const quaternion, byref as const quaternion) as quaternion
            declare operator =  (byref as const quaternion, byref as const quaternion) as boolean
            declare operator <> (byref as const quaternion, byref as const quaternion) as boolean
            
            declare function cmp  (byref as const quaternion, byref as const quaternion, byref as const real => epsilon) as boolean
            declare function lerp (byref as const quaternion, byref as const quaternion, byref as const real) as quaternion
            #ifdef _EASING_BI_
            declare function lerp (byref as const quaternion, byref as const quaternion, byref as const real,       as const easing.equation) as quaternion
            declare function lerp (byref as const quaternion, byref as const quaternion, byref as const real, byref as const easing.curve)    as quaternion
            #endif
        end namespace
        #include "quaternion_constructors.bas"
        #include "quaternion_intrinsic_operators.bas"
        #include "quaternion_properties.bas"
        #include "quaternion_methods.bas"
        #include "quaternion_extrinsic_operators.bas"
        #include "quaternion_functions.bas"
    #endif
#endif