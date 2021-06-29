#include "holberton.h"
#include <stdio.h>

/**
* rev_string - prints a string, in reverse,followed by a new line.
*@s: pointer value
*/

void rev_string(char *s)
{
	int c = 0;

	while (c[s] != '\0')
	{
		c++;
	}
	c = c - 1;
	while (c >= 0)
	{
		putchar(s[c]);
		c--;
	}
	putchar('\n');
}