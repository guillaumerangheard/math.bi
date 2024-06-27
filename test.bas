#cmdline "-fpu SSE"

#include "math/math.bi"

' The following is just whatever I happened to be testing the last time I
' compiled the lib. Feel free to discard it.

using math

print "Done compiling " & versionString & !".\n"

#ifdef MATH_ANGLES
print "Angles are activated."
#else
print "Angles are not activated."
#endif

#ifdef MATH_FLIP_GRAPHICAL_PLANE
print "Graphical plane is flipped."
#else
print "Graphical plane is not flipped."
#endif

dim as vec3 v => vec3(4d, 3d, 2d)
print v
v.zRotate(90d)
print v

sleep
