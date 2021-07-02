#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array.
 * @a: The array.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int t, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = t;
	}
}
