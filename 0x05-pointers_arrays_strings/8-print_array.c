#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints an inputted number of elements
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int tm;

	for (tm = 0; tm < n; tm++)
	{
		printf("%d", a[tm]);

		if (tm == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}