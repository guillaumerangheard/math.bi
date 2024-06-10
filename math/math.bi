#ifndef _MATH_BI_
    ' math.bi v0.4
    #define _MATH_BI_
    #include "math.cfg"
    namespace math
        const as integer versionMajor  => 0%, _
                         versionMinor  => 4%
        const as string  versionString => "math v" & versionMajor & "." & versionMinor
        type real as double
        #define m_crl cdbl
    end namespace
    #include "constants.bi"
    #include "functions/functions.bi"
    #include "complex/complex.bi"
    #include "angle/angle.bi"
    #include "vectors/vectors.bi"
    #include "quaternion/quaternion.bi"
    #include "matrices/matrices.bi"
    #include "arrays/arrays.bi"
#endif