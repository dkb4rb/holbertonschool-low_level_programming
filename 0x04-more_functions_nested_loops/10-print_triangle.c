#include "holberton.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the pyramid
 * Return: not expected
**/

void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size; y > x; y--)
			{
				_putchar(' ');
			}
			for (z = 0; z < x; z++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
