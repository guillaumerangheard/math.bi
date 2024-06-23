#ifdef _MATH_BI_
    #ifndef MATH_EPSILON
        #define MATH_EPSILON 1d / 8192d
    #endif
    namespace math
        const as real e          => exp(1d), _
                      epsilon    => abs(MATH_EPSILON), _
                      euler      => 0.577215664901532d, _    ' https://oeis.org/A001620
                      ln2        => log(2d), _
                      pi         => 3.141592653589793d, _    ' https://oeis.org/A000796
                      half_pi    => pi * 0.5d, _
                      phi        => (1d + sqr(5d)) / 2d, _
                      quarter_pi => pi * 0.25d, _
                      sqr_2      => sqr(2d), _
                      two_pi     => pi * 2d
    end namespace
#endif