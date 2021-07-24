#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - Print arguments values of numbers.
* @separator: string value of separator
* @n: Value principal of the function
*/

void print_strings(const char *separator,
		   const unsigned int n, ...)
{

	va_list string;

	unsigned int i;
	char *str;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);

		if (separator != NULL && i != n - 1)
		{

			if (string != NULL)
			{
				printf("%s%s", str, separator);
			}

			else
			{
				printf("(nil)%s", separator);
			}
		}

		else
		{
			if (string != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
		}
	}
	printf("\n");
	va_end(string);
}
