#ifdef _MATH_BI_
    #ifndef MATH_EPSILON
        #define MATH_EPSILON 1d / 8192d
    #endif
    namespace math
        const as real epsilon    => abs(MATH_EPSILON), _
                      euler      => 0.577215664901532d, _   ' https://oeis.org/A001620
                      pi         => 3.141592653589793d, _   ' https://oeis.org/A000796
                      half_pi    => pi * 0.5d, _
                      ln2        => log(2d), _                          ' ~= 0.693147180559945
                      ln10       => log(10d), _                         ' ~= 2.302585092994046
                      log2e      => log(2.718281828459045d) / ln2, _    ' ~= E / ln(2)
                      log10e     => log(2.718281828459045d) / ln10, _   ' ~= E / ln(10)
                      phi        => (1d + sqr(5d)) / 2d, _
                      quarter_pi => pi * 0.25d, _
                      sqr_1_2    => sqr(0.5d), _
                      sqr_2      => sqr(2d), _
                      two_pi     => pi * 2d
    end namespace
#endif