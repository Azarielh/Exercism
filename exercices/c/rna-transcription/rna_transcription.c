#include "rna_transcription.h"
#include <stdlib.h>

char *to_rna(const char *dna)
{
    int    i = 0;
    char    *RNA;
    while (dna[i])
        i++;
    RNA = malloc(sizeof(char) * i);
    i = 0;
    while (dna[i])
    {
        if (dna[i] == 'A')
            RNA[i] = 'U';
        if (dna[i] == 'C')
            RNA[i] = 'G';
        if (dna[i] == 'G')
            RNA[i] = 'C';
        if (dna[i] == 'T')
            RNA[i] = 'A';
        i++;            
    }
    return (RNA);
}