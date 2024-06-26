#include "math/math.bi"

' The following is just whatever I happened to be testing the last time I
' compiled the lib. Feel free to discard it.

using math

print "Done compiling " & versionString & !".\n"

dim as rational q => rational(1, 3), _
                r => rational(1, 2)
for i as real => 0d to 10d
    ? "i:", i, lerp(q, r, i / 10d)
next i

sleep
