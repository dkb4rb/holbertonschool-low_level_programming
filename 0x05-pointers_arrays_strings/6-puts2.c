#include "holberton.h"

/**
 *puts2 - print values od two int.
 *@str: is pointer value
 */

void puts2(char *str)
{
	int x;
	x = 0;
	while (x < 8)
	{
		x++;
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}