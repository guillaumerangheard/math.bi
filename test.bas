#include "math/math.bi"

' The following is just whatever I happened to be testing the last time I
' compiled the lib. Feel free to discard it.

using math

print "Done compiling " & versionString & !".\n"

dim as rational r => type(-24,144)
print r
r.reduce()
print r

sleep
