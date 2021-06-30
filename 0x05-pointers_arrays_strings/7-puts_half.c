#include "holberton.h"

/**
 *puts2 - print values od two int.
 *@str: is pointer value
 */

void puts_half(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
    {
        if (i >= 5)
        {
            _putchar(str[i]);
        }
    }
    _putchar('\n');
}
