#include "eliuds_eggs.h"
#include <stdio.h>

int egg_count(const unsigned int nb) //convert a binary nb to its 10base nb
{
    int count = 0;
    int num = nb;
    
    // Boucle tant que le nombre n'est pas NULL
    while (num > 0)
    {
        // Vérifier si le bit est de 1
        if (num & 1)
            count ++; // Si oui, incrémentation du compteur
        num = num >> 1;
    }
    return (count);
}
