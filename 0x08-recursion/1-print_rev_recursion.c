#include "holberton.h"

/**
* _print_rev_recursion - reverse text
*@s: value pointer
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
