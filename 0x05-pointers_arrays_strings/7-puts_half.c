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
		if (str[i] != '4' && str[i] >= '5')
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
