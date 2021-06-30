#include "holberton.h"

/**
 *puts2 - print values od two int.
 *@str: is pointer value
 */

void puts2(char *str)
{

	int c = 0;

	while (c < 8)
	{
		c++;
		putchar(*str);
		str = str + 2;
	}
}