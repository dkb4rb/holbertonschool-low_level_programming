#include "holberton.h"
#include <stdio.h>

/**
* _puts - function that returns the length of a string of str.
*@str: pointer value
*Return: c value
*/

void print_rev(char *s)
{
    int c = 0;
    while (c[s] != '\0')
    {
        c++;
    }
    c = c - 1;
    while (c >= 0)
    {
        _putchar(s[c]);
        c--;
    }
    _putchar('\n');
}
