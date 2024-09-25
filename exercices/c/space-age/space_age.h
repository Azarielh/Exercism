#ifndef SPACE_AGE_H
#define SPACE_AGE_H

#include <stdint.h>

typedef enum planet {
   MERCURY, 
   VENUS,
   EARTH,
   MARS,
   JUPITER,
   SATURN,
   URANUS,
   NEPTUNE,
} planet_t;

// giving orbital period to each planet
float orbityears(planet_t planet);
float age(planet_t planet, int64_t seconds);

#endif
