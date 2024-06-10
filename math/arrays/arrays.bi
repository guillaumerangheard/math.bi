#ifdef _MATH_BI_
    #include "baseArray.bi"
    #include "array/array.bi"
    #include "complexArray/complexArray.bi"
    '#include "v2array/v2array.bi"
    '#ifdef MATH_POLAR_VECTORS
    '    #include "pvarray/pvarray.bi"
    '#endif
    '#include "v3array/v3array.bi"
    '#ifdef MATH_CYLINDRICAL_VECTORS
    '    #include "cvarray/cvarray.bi"
    '#endif
    '#ifdef MATH_SPHERICAL_VECTORS
    '    #include "svarray/svarray.bi"
    '#endif
    '#include "v4array/v4array.bi"
    '#include "quaternionArray/quaternionArray.bi"
#endif