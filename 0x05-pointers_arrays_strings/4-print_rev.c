#include "holberton.h"
#include <stdio.h>

/**
* print_rev - prints a string, in reverse,followed by a new line.
*@s: pointer value
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
