#include "binary.h"
#include <string.h>

int is_binary(const char *input)
{
    //float result = 0;
    int i = 0;
    while (input[i])
    {
        if (input[i] != '0' && input[i] != '1')
            return (-1);
        i++;
    }
    return (0);
}

int convert(const char *input)
{
    if (is_binary(input))
        return (-1);
    int    len;
    int    i;
    int    r;
    int      power;

    len =  strlen(input);
    r = 0;
    i = len - 1;
    power = 1;
    while (i >= 0)
    {
        if (input[i] == '1')
            r += power;
        power *= 2;
        i--;
    }
    return (r);
}