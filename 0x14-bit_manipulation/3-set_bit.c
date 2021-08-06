#include "main.h"

/**
 * set_bit - Gets the value of a bit at a given index.
 * @n: the bit
 * @index: The unsigned int of index
 * Return: if an error occurs - -1
 * otherwise -the value of bit at index
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
