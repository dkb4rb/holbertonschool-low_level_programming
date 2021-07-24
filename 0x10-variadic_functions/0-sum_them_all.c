
#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters indefined
 * @First_Argument: value
 *
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list arg;

	va_start(arg, n);

	if (n == 0)
		return (0);

	while (i < n)
	{
		sum += va_arg(arg, int);
		i++;
	}
	va_end(arg);
	return (sum);
}
