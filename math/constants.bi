#ifdef _MATH_BI_
    #ifndef MATH_EPSILON
        #define MATH_EPSILON 1d / 8192d
    #endif
    namespace math
        const as real epsilon      => abs(MATH_EPSILON)
        const as real pi           => 3.141592653589793d, _    ' https://oeis.org/A000796
                      goldenRatio  => (1d + sqr(5d)) * 0.5d, _
                      half_pi      => pi * 0.5d, _
                      plasticRatio => 1.324717957244746d, _    ' https://oeis.org/A060006
                      quarter_pi   => pi * 0.25d, _
                      silverRatio  => 1d + sqr(2d), _
                      two_pi       => pi * 2d
    end namespace
#endif