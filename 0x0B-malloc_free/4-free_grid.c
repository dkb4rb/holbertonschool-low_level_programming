#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * free_grid - function that free the memory.
 * @grid: Grid of the Array
 * @height: Height of the array 2d
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

void free_grid(int **grid, int height)
{

	int **temp = grid;

	while (height--)
	{
		free(*grid++);
	}

	free(temp);
}
