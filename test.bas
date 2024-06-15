#include "math/math.bi"

using math

print "Done compiling " & versionString & !".\n"

dim as real a => pi
print csech(a)
print acsech(csech(a))

sleep
