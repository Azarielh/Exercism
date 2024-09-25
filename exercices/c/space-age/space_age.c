#include "space_age.h"
float orbityears(planet_t planet)
{
    float earth = 365.25;
    if (planet == EARTH)
        return (earth);
    if (planet == MERCURY)
        return (earth * 0.2408467);
    if (planet == VENUS)
        return (earth * 0.61519726);
    if (planet == MARS)
        return (earth * 1.8808158);
    if (planet == JUPITER)
        return (earth * 11.862615);
    if (planet == SATURN)
        return (earth * 29.447498);
    if (planet == URANUS)
        return (earth * 84.016846);
    if (planet == NEPTUNE)
        return (earth * 164.79132);
    return (-1);
}
float age(planet_t planet, int64_t seconds)
{
    if (orbityears(planet) == -1)
        return (-1);
    float    space_age = seconds / 60 / 60 / 24 /orbityears(planet);
    return (space_age);
}