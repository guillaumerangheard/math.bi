#ifdef _MATH_BI_
    namespace math
        
        enum angleUnit
            degree
            gradian
            octant
            quadrant
            radian
            sextant
            turn
        end enum
        
        static as const real angles(0% to 6%) => {360d, _   ' degrees
                                                  400d, _   ' gradians
                                                  8d, _     ' octants
                                                  4d, _     ' quadrants
                                                  two_pi, _ ' radians
                                                  6d, _     ' sextants
                                                  1d}       ' turns
        
        static as const string*8 angleNames(0% to 6%) => {"degree", _
                                                          "gradian", _
                                                          "octant", _
                                                          "quadrant", _
                                                          "radian", _
                                                          "sextant", _
                                                          "turn"}
        
        #ifndef MATH_ANGLE_UNIT
            #define MATH_ANGLE_UNIT degree
        #endif
        #define _c(_a_,_b_) _a_##_b_
        const as angleUnit defaultAngleUnit => _c(angleUnit.,MATH_ANGLE_UNIT)
        #undef _c
        #if MATH_ANGLE_UNIT = degree
        const as real tau => 360d
        #elseif MATH_ANGLE_UNIT = gradian
        const as real tau => 400d
        #elseif MATH_ANGLE_UNIT = octant
        const as real tau => 8d
        #elseif MATH_ANGLE_UNIT = quadrant
        const as real tau => 4d
        #elseif MATH_ANGLE_UNIT = radian
        const as real tau => two_pi
        #elseif MATH_ANGLE_UNIT = sextant
        const as real tau => 6d
        #else
        const as real tau => 1d
        #endif
        const as real half_tau    => tau / 2d, _
                      quarter_tau => tau / 4d, _
                      eta         => tau / 720d
        
    end namespace
#endif