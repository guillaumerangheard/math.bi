# math.bi v0.4

**math.bi** is a configurable math library for [FreeBASIC](https://www.freebasic.net/), partly modeled after [GLM](https://github.com/g-truc/glm) and ECMAScript's [Math](https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Global_Objects/Math) object. Its goal is to make math in FreeBASIC as fluent as possible. It implements **complex numbers**, **angles**, 2, 3, and 4-dimensional **vectors** (with the option to switch on polar, cylindrical, and spherical coordinates), **quaternions**, and **matrices**, as well as **typed arrays** (see my [types.bi](https://github.com/guillaumerangheard/types.bi) library). It is safely contained within a `math` namespace, so that (hopefully) so as not to conflict with existing code.

Please note that it is based on a somewhat old (and arguably messy) codebase, so _some_ of types are still being (re)written. (I'm looking at you, quaternions.) It was also designed as part of a larger project, so it works seamlessly with my rng.bi and [easing.bi](https://github.com/guillaumerangheard/easing.bi) libraries.

## Manual

1. [Conventions](#1conventions)
2. [Flags](#2flags)
3. [Constants](#3constants)
4. [Functions](#4functions)
5. [Types](#5types)
   - [Matrices](matrices)
     - [math.mat2](#mathmat2)
     - [math.mat3](#mathmat3)
     - [math.mat4](#mathmat4)
   - [Numbers](#numbers)
     - [math.complex](#mathcomplex)
     - [math.real](#mathreal)
   - [Quaternions](#quaternions)
   - [Vectors](#vectors)
     - [math.cvec](#mathcvec)
     - [math.pvec](#mathpvec)
     - [math.svec](#mathsvec)
     - [math.vec2](#mathvec2)
     - [math.vec3](#mathvec3)
     - [math.vec4](#mathvec4)


## 1.&nbsp;Conventions

Due to the fact that **math.bi** was originally designed as part of a graphics library, it uses a slightly unorthodox coordinate system, where positive x is _right_, positive y is _down_, and positive z is _backward_ (that is, it goes from your screen to you). (Positive w goes wherever the fourth dimension goes.) Rotations by a positive angle go _counterclockwise_.

## 2.&nbsp;Flags

**math.bi**'s configuration use flags that one `#define`s (or uncomments) before compilation. All flags can be found in the [math.cfg](https://github.com/guillaumerangheard/math.bi/blob/main/math/math.cfg) file (which is just a FreeBASIC header with a .cfg extension). Below is a list of all flags.

#### MATH_ANGLES

By default, angles in **math.bi** are expressed in radians. When `#define`d, this flag activates the [math.angle](#mathangle) and [math.angleUnit](#mathangleunit) types, and allows one to work in degrees, gradians, quadrants, radians, sextants, and turns. The default angle unit can be specified via the [math_angle_unit](#mathangleunit) flag, which defaults to degrees.

#### MATH_ANGLE_UNIT

This flag can have one of six values: `degree`, `gradian`, `quadrant`, `radian`, `sextant`, or `turn`, and sets the default angle unit, via the [math.defaultAngleUnit](#mathdefaultangleunit) constant.

#### MATH_CYLINDRICAL_VECTORS

This flag activates the [math.cvec](#mathcvec) type, that is 3-dimensional vectors expressed in [cylindrical coordinates](https://en.wikipedia.org/wiki/Cylindrical_coordinate_system).

#### MATH_EPSILON

This flag sets the [math.epsilon]() constant, and through it the default threshold under which the [math.eq](#matheq) function returns `true` for two _almost equal_ values. Its default value is 1.0 / 8192.0 (&thickapprox;&nsp;0.0001220703125).

#### MATH_FORCE_CARTESIAN

All of **math.bi**'s functions are overloaded so one can mix cartesian, polar, cylindrical, and spherical vectors. By design, the latter three take precedence over the first, when vectors of different types are passed to the same function. That is if one adds a cartesian and a polar vector, for example, a polar vector is returned. When the math_force_cartesian flag is `#define`d, all functions are forced to return a cartesian vector.
Please note though that when one passes two vectors of the same type to a function, a _of this very type_ is returned.

#### MATH_POLAR_VECTORS

This flag activates the [math.pvec](#mathpvec) type, that is 2-dimensional vectors expressed in [polar coordinates](https://en.wikipedia.org/wiki/Polar_coordinate_system).

#### MATH_PRNG

This flag will be used in future versions so that, when the **rng.bi** is included, one can choose which algorithm the [math.random]() function uses. Right now it uses FreeBASIC's [rnd](https://www.freebasic.net/wiki/KeyPgRnd) function internally (and will by default).

#### MATH_SPHERICAL_VECTORS

In future versions, this flag will activate the [math.svec](#mathsvec) type, that is 3-dimensional vectors expressed in [spherical coordinates](https://en.wikipedia.org/wiki/Spherical_coordinate_system).

## 3.&nbsp;Constants

Below is a list of all of **math.bi**'s built-in constants.

#### math.defaultAngleUnit

This constant of type `math.angleUnit` is only exposed if the [math_angles](#math_angles) flag is `#define`d. Its default value is `degree`, and it can be set via the [math_angle_unit](#math_angle_unit) flag.

#### math.epsilon

This constant of type `math.real` is the default threshold used by the [math.eq](#matheq) function, under which `true` is returned when two values are _almost_ equal.

#### math.eta

This constant of type `math.real`is only exposed when the [math_angles](#math_angles) is `#define`d, and is equal to [math.tau](#mathtau) /&nbsp;720.

#### math.pi

This constant of type `math.real` equals &pi; that is 3.141592653589793, according to the [OEIS](https://oeis.org/A000796).

#### math.quater_pi

This constant of type `math.real` is equal to &pi /&nbsp;4.

#### math.quarter_tau

This constant of type `math.real` is only exposed when the [math_angles](#math_angles) flag is `#define`d, and is equal to [math.tau](#mathtau) /&nbsp;4.

#### math.goldenRatio

This constant of type `math.real` equals (1 + &sqrt;&nbsp;5) / 2.

#### math.half_pi

This constant of type `math.real` equals &pi; /&nbsp;2, as its incredibly clever name implies.

#### math.half_tau

This const of type `math.real` is only exposed when the [math_angles](#math_angles) flag is `#define`d, and is equal to [math.tau](#mathtau) /&nbsp;2.

#### math.plasticRatio

Equals 1.324717957244746, according to the [OEIS](https://oeis.org/A060006).

#### math.silverRatio

Equals 1 + &sqrt;&nbsp;2.

#### math.tau

This constant of type `math.real` is only exposed if the [math_angles](#math_angles) flag is `#define`d. Whatever the default angle unit is, it is equal to one turn, expressed in that unit.

#### math.two_pi

Equals &pi; &times;&nbsp;2.

## Functions

Below is a list of all the functions in the `math` namespace.

#### math.acosh ( _n_ )

Returns the [inverse hyperbolic cosine](https://en.wikipedia.org/wiki/Inverse_hyperbolic_functions) of an angle expressed in radians. (Other angle units will be added in a future version.) For `math.angle`s, use the built-in `acosh` property.

#### math.asinh ( _n_ )

Returns the [inverse hyperbolic sine](https://en.wikipedia.org/wiki/Inverse_hyperbolic_functions) of an angle expressed in radians. (Other angle units will be added in a future version.) For `math.angle`s, use the built-in `asinh` property.

#### math.atanh ( _n_ )

Returns the [inverse hyperbolic tangent](https://en.wikipedia.org/wiki/Inverse_hyperbolic_functions) of an angle expressed in radians. (Other angle units will be added in a future version.) For `math.angle`s, use the built-in `atanh` property.

#### math.avg ( _n1_ , _n2_ [, _n3_ [, _n4_ ] ] )

This function comes in two versions. The first one takes two(, or three, or four) numbers and calculates their average. The second one takes an `integer` representing the number of `math.real`s to process, and a pointer to said `math.real`s. (In a future version, I'll add the option to use complex numbers.)

#### math.cbr ( _n_ )

Returns the cubic root of a `math.real`.

#### math.ceil ( _n_ )


#### math.clamp ( _n_ [ [, _nMin_ ] , _nMax_ ] )


#### math.cosh ( _n_ )

#### math.cross ( _v1_ , _v2_ )

In the case of 2-dimensional vectors, this functions returns a `math.real` equal to the z coordinate of their cross product, _if_ they were 3-dimensional. This little mathematical hack has proven useful, for example when one wants to calculate [barycentric coordinates](https://en.wikipedia.org/wiki/Barycentric_coordinate_system). In the (much more frequent) case of 3-dimensional vectors, `math.cross` returns a 3-dimensional vector equal to their cross product, whose type depends on whether or not the [MATH_FORCE_CARTESIAN](#mathforcecartesian) flags has been `#define`d.

#### math.dot ( _v1_ , _v2_)

Returns a `math.real` equal to the dot product of `v1` and `v2`. The function has been overloaded so that it can be passed any type of vector, as long as both have the same number of dimensions.

#### eq ( _n1_ , _n2_ [ , _threshold_ = [math.epsilon](#mathepsilon) ] )

Returns `true` if the absolute difference between two `math.real`s is lesser than or equal to `threshold`, and `false` otherwise.

#### math.floor

#### math.hypot ( _x_ , _y_ [, _z_ [, _w_ ] ] )

Returns the length of of a "vector" whose coordinates can be in 2, 3, or 4 dimensions.

#### math.lerp ( _n1_ , _n2_ , _t_ [, _e_ ] )

Interpolates two numbers with respect to `t`. If [easing.bi](https://github.com/guillaumerangheard/easing.bi) is `#include`d, one also has the option to pass `e` either as an `easing.equation` or as an `easing.curve`. The function is thoroughly overloaded, so that one can interpolate not only numbers, but also complex numbers and vectors. (Quaternions are one the way.)

#### math.map ( _n_ , _nMin1_ , _nMax1_, _nMin2_ , _nMax2_ )

#### math.max ( _n1_ , _n2_ [, _n3_ [, _n4_ ] ] ) | ( _i_ , _p_ )

This function comes in two versions. The first one take two(, or three, or four) `math.real`s and returns the maximum. The second one takes an `integer` representing the number of said `math.real`s to process, and a pointer to said `math.real`s.

#### math.min ( _n1_ , _n2_ [, _n3_ [, _n4_ ] ] ) | ( _i_ , _p_ )

This function comes in two versions. The first one take two(, or three, or four) `math.real`s and returns the maximum. The second one takes an `integer` representing the number of said `math.real`s to process, and a pointer to said `math.real`s.

#### math.phi ( _x_ , _y_ )

#### math.random ( [ [ _n1_ ,] _n2_ ] )

#### math.sinh ( _n_ )

#### math.tanh ( _n_ )

#### math.wrap ( _n_ [ [_nMin_ = 0 ,] _nMax_ = 1 ] )

## 5.&nbsp;Types

### Angles

#### math.angle

#### math.angleUnit

### Matrices

#### math.mat2

#### math.mat3

#### math.mat4

### Numbers

#### math.complex

Complex numbers in **math.bi** have an `r` and an `i` member, representing their real and imaginary parts, respectively. All operators and functions are overloaded, so one can seemlessly use both real and complex numbers at the same time. (The option to switch complex numbers on and off will be added in a future version. I'm leaving them here right now for testing purposes.)

#### math.real

`math.real`s as basically aliased `double`s. (The option to switch to single-precision may be added in a future version.)

### Quaternions

### Vectors

#### math.cvec

When the [math_cylindrical_vectors]() flag is `#define`d, one can use 3-dimensional vectors expressed in spherical coordinates. Each `math.cvec` has three coordinates: `phi`, which is their azimuth in radians, `rho`, which is their "radius" on the z plane, and `z`, which is, well, their z coordinate. Please note that the first two are _properties_, which means you can only get and set them. When the [math_angles]() flag is `#define`d, you can use a property called `azimuth`, which is the vectors azimuthal angle, expressed as a `math.angle`.

#### math.pvec

#### math.svec

#### math.vec2

#### math.vec3

#### math.vec4
