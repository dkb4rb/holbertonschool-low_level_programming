#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0
**/

int main(void)
{
	unsigned long i, n = 612852475143;

	for (i = 2; i < (n / 2); i++)
	{
		if ((n % i) == 0)
		{
			n = n / i;
			i = 1;
		}
	}
	printf("%lu\n", n);
	return (0);
}
