#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: numer to start
 * Return:
*/

void print_to_98(int n)
{
	int value = n;

	if (value < 98)
	{
		for (; value <= 98; value++)
		{
			if (value != 98)
			{
				printf("%i, ", value);
			}
			else
			{
				printf("%i", value);
			}
		}
	}
	else if (value > 98)
	{
		for (; value >= 98; x--)
		{
			if (x != 98)
			{
				printf("%i, ", value);
			}
			else
			{
				printf("%i", value);
			}
		}
	}
	else
	{
		printf("%i", value);
	}
	printf("\n");
}