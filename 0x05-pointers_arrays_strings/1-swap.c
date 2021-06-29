#include "holberton.h"
#include <stdio.h>

/**
* swap_int - function that swaps the values of two integers.
*@a: pointer value
*@b: pointer value
*/

void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
