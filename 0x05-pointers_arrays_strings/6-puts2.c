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
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}