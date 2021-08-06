#include "main.h"

/**
 * clear_bit - Gets the value of a bit at a given index.
 * @n: the bit
 * @index: The unsigned int of index
 * Return: if an error occurs - -1
 * otherwise -the value of bit at index
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(index << 1);
	return (1);
}
