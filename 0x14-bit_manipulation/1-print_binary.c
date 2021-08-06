#include "main.h"

/**
* print_binary - Convert function to unsigned int
* @n: this is pointer
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}
