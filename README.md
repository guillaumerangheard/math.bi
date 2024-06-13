# math.bi v0.4

**math.bi** is a configurable math library for [FreeBASIC](https://www.freebasic.net/), partly modeled after [GLM](https://github.com/g-truc/glm) and ECMAScript's [Math](https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Global_Objects/Math) object. Its goal is to make math in FreeBASIC as fluent as possible. It implements **complex numbers**, **angles**, 2, 3, and 4-dimensional **vectors** (with the option to switch on polar, cylindrical, and spherical coordinates), **quaternions**, and **matrices**, as well as **typed arrays** (see my [types.bi](https://github.com/guillaumerangheard/types.bi) library). It is safely contained within a `math` namespace, so that (hopefully) so as not to conflict with existing code.

Please note that it is based on a somewhat old (and arguably messy) codebase, so _some_ of types are still being (re)written. (I'm looking at you, quaternions.) It was also designed as part of a larger project, so it works seamlessly with my rng.bi and [easing.bi](https://github.com/guillaumerangheard/easing.bi) libraries.

## Conventions

Due to the fact that **math.bi** was originally designed as part of a graphics library, it uses a slightly unorthodox coordinate system, where positive x is _right_, positive y is _down_, and positive z is _backward_ (that is, it goes from your screen to you). (Positive w goes wherever the fourth dimension goes.) Rotations by a positive angle go _counterclockwise_.

## Flags

**math.bi**'s configuration use flags that one `#define`s (or uncomments) before compilation. All flags can be found in the [math.cfg]() file (which is just a FreeBASIC header with a .cfg extension). Below is a list of all flags.

### MATH_ANGLES

By default, angles in **math.bi** are expressed in radians. When `#define`d, this flag activates the [math.angle]() and [math.angleUnit]() types, and allows one to work in degrees, gradians, quadrants, radians, sextants, and turns. The default angle unit can be specified via the [MATH_ANGLE_UNIT]() flag, which defaults to degrees.

### MATH_ANGLE_UNIT

This flag can have one of six values: `degree`, `gradian`, `quadrant`, `radian`, `sextant`, or `turn`, and sets the default angle unit, via the [math.defaultAngleUnit]() constant.

### MATH_CYLINDRICAL_VECTORS

This flag activates the [math.cvec]() type, that is 3-dimensional vectors expressed in [cylindrical coordinates](https://en.wikipedia.org/wiki/Cylindrical_coordinate_system).

### MATH_EPSILON

This flag sets the [math.epsilon]() constant, and through it the default threshold under which the [math.eq]() function returns `true` for two _almost equal_ values. Its default value is 1.0 / 8192.0.

### MATH_FORCE_CARTESIAN

All of **math.bi**'s functions are overloaded so one can mix cartesian, polar, cylindrical, and spherical vectors. By design, the latter three take precedence over the first, when vectors of different types are passed to the same function. That is if one adds a cartesian and a polar vector, for example, a polar vector is returned. When the MATH_FORCE_CARTESIAN flag is `#define`d, all functions are forced to return a cartesian vector.
Please note though that when one passes two vectors of the same type to a function, a _of this very type_ is returned.

### MATH_POLAR_VECTORS

This flag activates the [math.pvec]() type, that is 2-dimensional vectors expressed in [polar coordinates](https://en.wikipedia.org/wiki/Polar_coordinate_system).

### MATH_PRNG

This flag will be used in future versions so that, when the **rng.bi** is included, one can choose which algorithm the [math.random]() function uses. Right now it uses FreeBASIC's [rnd](https://www.freebasic.net/wiki/KeyPgRnd) function internally (and will by default).

### MATH_SPHERICAL_VECTORS

In future versions, this flag will activate the [math.svec]() type, that is 3-dimensional vectors expressed in [spherical coordinates](https://en.wikipedia.org/wiki/Spherical_coordinate_system).
