#include "holberton.h"

/**                                                                                                 
 * main - debugging example                                                                         
 * Return: 0                                                                                        
 */

void print_square(int size)
{
	int rows, col;

	if (size > 0)
	{
		for (rows = 0; rows < size; rows++)
		{
			for (col = 0 ; col < size; col++)
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