#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Entry point
 *@min: number min
 *@max: number max
 * Return: a pointer to an array
 */

int *array_range(int min, int max)
{
	int *array = NULL;
	int i = 0, t = 0;

	if (min > max)
		return (NULL);
	t = ((max - min) + 1);
	array = malloc(t * sizeof(int));
	if (array != NULL)
	{
		for (i = 0; min < max; min++)
		{
			array[i++] = min;
		}
		return (array);
	}

	return (NULL);
}
