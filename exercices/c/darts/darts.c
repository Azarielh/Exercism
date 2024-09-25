#include "darts.h"
#include <math.h>  // pour utiliser la fonction sqrt

// calculate points obtained regarding x and y coordinate
int score(coordinate_t landing_position) {
    // distance
    double distance = sqrt(landing_position.x * landing_position.x + landing_position.y * landing_position.y);

    // define how many points
    if (distance > 10.0){
        return 0;
    } else if (distance > 5.0){
        return 1;
    } else if (distance > 1.0){
        return 5;
    } else {
        return 10;
    }
}