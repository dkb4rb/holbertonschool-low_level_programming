#include "holberton.h"

/**
 *puts2 - print values od two int.
 *@str: is pointer value
 */

void puts2(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
