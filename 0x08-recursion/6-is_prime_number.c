#include "holberton.h"

/**
 * prime_check - check number if this is prime
 * @z: checkout factor prime
 * @d: number factorial
 * Return: prime_check with factorial number.
*/
int prime_check(int z, int d)
{
	if (d < 2 || d % z == 0)
		return (0);
	else if (z > d / 2)
		return (1);
	else
		return (prime_check(z + 1, d));
}

/**
 * is_prime_number - function that returns 1 if the input.
 * @n: this value pointer
 * Return: function prime_check
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
