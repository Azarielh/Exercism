#include "two_fer.h"
#include <stdio.h>

void two_fer(char *buffer, const char *name)
{
    char *phrase = "One for you, one for me.\0";
    int i = 0;
    int j = 0;    
    if (!name)
    {    while (phrase[i])
        {
            buffer[i] = phrase[i];
            i++;
        }
         buffer[i] = phrase[i];
        //return ;
    }
    else 
    {
        while (phrase[i] != 'y')
        {
            buffer[i] = phrase[i];
            i++;
        }
        while (name[j])
        {
            buffer[i] = name[j];
            j++;
            i++;
        }
        i = 8;
        while (i < 24)
        {
            buffer[i + j] = phrase[i + 3];
            i++;
        }
    }
}