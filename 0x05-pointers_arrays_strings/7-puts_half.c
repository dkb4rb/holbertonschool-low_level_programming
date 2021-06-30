#include "holberton.h"

/**
 *puts_half - print values of five int.
 *@str: is pointer value
 */

void puts_half(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i >= 5 && i != 4)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
