#include <stdio.h>
#include "holberton.h"

/**
 *_isupper - Searching value uppercase.
 * @c: This variable output.
 * Return: if is uppercase return 1 of other case return 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c > 90)
{
return (0);
}
else
{
return (1);
}
}
