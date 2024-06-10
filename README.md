# math.bi
A configurable math library for [FreeBASIC](https://www.freebasic.net/), partly modeled after [GLM](https://github.com/g-truc/glm) and ECMAScript's [Math](https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Global_Objects/Math) object.

It implements real and complex numbers, angles, 2, 3, and 4-dimensional vectors (with the option to switch on polar, cylindrical, and spherical coordinates), quaternions, and matrices, as well as typed arrays (modeled after the arrays in my [types.bi](https://github.com/guillaumerangheard/types.bi) library). Everything is safely contained in a `math` namespace, so that (hopefully) it would not conflict with existing code. My goal is to make math in FreeBASIC as “fluent” as possible (which means a lot of operator overloading).

Please note that it is based on a somewhat old (and arguably messy) codebase, so _some_ of types are still being (re)written (I'm looking at you, quaternions). It was also designed as part of a larger project, so it works seamlessly with my rng.bi and [easing.bi](https://github.com/guillaumerangheard/easing.bi) libraries (the former of which I'll post soon).
