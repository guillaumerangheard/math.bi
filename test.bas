#include "math/math.bi"

print "Done compiling " & math.versionString & !".\n"

for i as integer => 0% to 9%
    print math.random()
next i

sleep