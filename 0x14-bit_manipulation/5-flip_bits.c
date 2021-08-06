#include "main.h"

/**
 * flip_bits - Gets the value of a bit at a given index.
 * @n: the bits
 * @m: The unsigned int of index
 * Return: if an error occurs - 0
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
