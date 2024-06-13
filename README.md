# math.bi v0.4

**math.bi** is a configurable math library for [FreeBASIC](https://www.freebasic.net/), partly modeled after [GLM](https://github.com/g-truc/glm) and ECMAScript's [Math](https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Global_Objects/Math) object. Its goal is to make math in FreeBASIC as fluent as possible. It implements **complex numbers**, **angles**, 2, 3, and 4-dimensional **vectors** (with the option to switch on polar, cylindrical, and spherical coordinates), **quaternions**, and **matrices**, as well as **typed arrays** (see my [types.bi](https://github.com/guillaumerangheard/types.bi) library). It is safely contained within a `math` namespace, so that (hopefully) so as not to conflict with existing code.

Please note that it is based on a somewhat old (and arguably messy) codebase, so _some_ of types are still being (re)written. (I'm looking at you, quaternions.) It was also designed as part of a larger project, so it works seamlessly with my rng.bi and [easing.bi](https://github.com/guillaumerangheard/easing.bi) libraries.

## Table of contents

+ [Conventions](#conventions)
+ [Flags](#flags)
+ [Constants](#constants)


## Conventions

Due to the fact that **math.bi** was originally designed as part of a graphics library, it uses a slightly unorthodox coordinate system, where positive x is _right_, positive y is _down_, and positive z is _backward_ (that is, it goes from your screen to you). (Positive w goes wherever the fourth dimension goes.) Rotations by a positive angle go _counterclockwise_.

## Flags

**math.bi**'s configuration use flags that one `#define`s (or uncomments) before compilation. All flags can be found in the [math.cfg]() file (which is just a FreeBASIC header with a .cfg extension). Below is a list of all flags.

### math_angles

By default, angles in **math.bi** are expressed in radians. When `#define`d, this flag activates the [math.angle]() and [math.angleUnit]() types, and allows one to work in degrees, gradians, quadrants, radians, sextants, and turns. The default angle unit can be specified via the [math_angle_unit]() flag, which defaults to degrees.

### math_angle_unit

This flag can have one of six values: `degree`, `gradian`, `quadrant`, `radian`, `sextant`, or `turn`, and sets the default angle unit, via the [math.defaultAngleUnit]() constant.

### math_cylindrical_vectors

This flag activates the [math.cvec]() type, that is 3-dimensional vectors expressed in [cylindrical coordinates](https://en.wikipedia.org/wiki/Cylindrical_coordinate_system).

### math_epsilon

This flag sets the [math.epsilon]() constant, and through it the default threshold under which the [math.eq]() function returns `true` for two _almost equal_ values. Its default value is 1.0 / 8192.0.

### math_force_cartesian

All of **math.bi**'s functions are overloaded so one can mix cartesian, polar, cylindrical, and spherical vectors. By design, the latter three take precedence over the first, when vectors of different types are passed to the same function. That is if one adds a cartesian and a polar vector, for example, a polar vector is returned. When the math_force_cartesian flag is `#define`d, all functions are forced to return a cartesian vector.
Please note though that when one passes two vectors of the same type to a function, a _of this very type_ is returned.

### math_polar_vectors

This flag activates the [math.pvec]() type, that is 2-dimensional vectors expressed in [polar coordinates](https://en.wikipedia.org/wiki/Polar_coordinate_system).

### math_prng

This flag will be used in future versions so that, when the **rng.bi** is included, one can choose which algorithm the [math.random]() function uses. Right now it uses FreeBASIC's [rnd](https://www.freebasic.net/wiki/KeyPgRnd) function internally (and will by default).

### math_spherical_vectors

In future versions, this flag will activate the [math.svec]() type, that is 3-dimensional vectors expressed in [spherical coordinates](https://en.wikipedia.org/wiki/Spherical_coordinate_system).

## Constants

Below is a list of all of **math.bi**'s built-in constants.

### math.defaultAngleUnit

This constant of type `math.angleUnit` is only exposed if the [math_angles]() flag is `#define`d. Its default value is `degree`, and it can be set via the [math_angle_unit]() flag.

### math.epsilon

This constant of type `math.real` is the default threshold used by the [math.eq]() function, under which `true` is returned when two values are _almost_ equal.

### math.eta

This constant of type `math.real`is only exposed when the [math_angles]() is `#define`d, and is equal to [math.tau]() /&nbsp;720.

### math.pi

This constant of type `math.real` equals &pi; that is 3.141592653589793, according to the [OEIS](https://oeis.org/A000796).

### math.quater_pi

This constant of type `math.real` is equal to &pi /&nbsp;4.

### math.quarter_tau

This constant of type `math.real` is only exposed when the [math_angles]() flag is `#define`d, and is equal to [math._tau]() /&nbsp;4.

### math.goldenRatio

This constant of type `math.real` equals (1 + &sqrt;&nbsp;5) / 2.

### math.half_pi

This constant of type `math.real` equals &pi; /&nbsp;2, as its incredibly clever name implies.

### math.half_tau

This const of type `math.real` is only exposed when the [math_angles]() flag is `#define`d, and is equal to [math.tau]() /&nbsp;2.

### math.plasticRatio

Equals 1.324717957244746, according to the [OEIS](https://oeis.org/A060006).

### math.silverRatio

Equals 1 + &sqrt;&nbsp;2.

### math.tau

This constant of type `math.real` is only exposed if this [math_angles]() flag is `#define`d. Whatever the default angle unit is, it is equal to one turn, expressed in that unit.

### math.two_pi

Equals &pi; &times;&nbsp;2.
