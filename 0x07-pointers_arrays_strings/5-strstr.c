#include "holberton.h"
#include <stdio.h>

/**
* 
* 
*/

char *_strstr(char *haystack, char *needle)
{
    int i = 0;
    while (haystack[i] == needle[i])
    {
        if (haystack[i] != needle[i])
        {
            return ('\0');
        }

        i++;
    }
    return (needle);
}