#include "holberton.h"

/**
 *puts2 - print values od two int.
 *@str: is pointer value
 */

void puts2(char *str)
{
	int c = 0;

	while (*(str + c))
	{
		_putchar(*(str + c));
		c = c + 2;
	}
	_putchar('\n');
}
