#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * init - function that initialize.
 * @argv: Argument Vector
 * @width: Width of the array 2d
 * @counter: Counter of the lenght
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

void init(int **argv, int width, int counter)
{

	int copywidth = 0;

	while (counter--)
	{

		if (copywidth < width)
		{

			(*argv)[copywidth++] = 0;
		}
		else if (copywidth == width)
		{

			copywidth = 0;
			argv++;
		}
	}
}

/**
 * Free - function that free memories.
 * @argv: Argument Vector
 * @counter: Counter of the lenght
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

void Free(int **argv, int counter)
{
	int **temp = argv;

	while (counter--)
	{

		free(*argv);
		argv++;
	}
	free(temp);
}

/**
 * alloc_grid - function that converse a grid of aa 2 dimensional pointer.
 * @width: Width of the array 2d
 * @height: Height of the array 2d
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

int **alloc_grid(int width, int height)
{

	int **argv;
	int **argv1;
	int counter = 0;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}

	argv = (int **)malloc(sizeof(int *) * (height));
	argv1 = argv;
	if (!argv)
	{
		free(argv);
		return (NULL);
	}

	for (; counter < height; counter++)
	{

		*argv = (int *)malloc(sizeof(int) * width);

		if (!*argv)
		{
			Free(argv1, counter);
			return (NULL);
		}

		argv++;
	}

	init(argv1, width, height);

	return (argv1);
}
