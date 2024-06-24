#ifndef _MATH_BI_
    #define _MATH_BI_
    #include "math.cfg"
    namespace math
        const as integer versionMajor  => 0%, _
                         versionMinor  => 4%
        const as string  versionString => "math v" & versionMajor & "." & versionMinor
        type real as double
    end namespace
    #define m_crl cdbl
    #include "constants.bi"
    #include "functions/functions.bi"
    #ifdef MATH_ANGLES
        #include "angle/angle.bi"
    #endif
    #include "complex/complex.bi"
    #include "vectors/vectors.bi"
    #include "quaternion/quaternion.bi"
    #include "matrices/matrices.bi"
    #include "arrays/arrays.bi"
#endif