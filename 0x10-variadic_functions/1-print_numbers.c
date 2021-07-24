#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - Print arguments values of numbers.
* @separator: string value of separator
* @n: Value principal of the function
*/

void print_numbers(const char *separator,
		   const unsigned int n, ...)
{
	va_list prueba;

	unsigned int i;

	va_start(prueba, n);
	for (i = 0; i < n; i++)
	{

		if (separator != NULL && i != n - 1)
			printf("%i%s", va_arg(prueba, int), separator);
		else
			printf("%i", va_arg(prueba, int));
	}
	printf("\n");
	va_end(prueba);
}
