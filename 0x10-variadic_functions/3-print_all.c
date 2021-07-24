#include "variadic_functions.h"
#include <stdarg.h>
/**
 * _charp - prints a character
 * @list: argument pointer variable, character to print
 */
void _charp(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * _intp - prints an integer
 * @list: argument pointer variable, integer to print
 */
void _intp(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * _floatp - prints a float
 * @list: argument pointer variable, float to print
 */
void _floatp(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * _stringp - prints a string
 * @list: argument pointer variable, string to print
 */
void _stringp(va_list list)
{
	char *s;

	s = va_arg(list, char*);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
		printf("%s", s);
}


/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	data_t types[] = {
		{"c", _charp},
		{"i", _intp},
		{"f", _floatp},
		{"s", _stringp},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;
	va_list list;
	char *separator = "";

	va_start(list, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (types[j].type)
		{
			if (format[i] == *types[j].type)
			{
				printf("%s", separator);
				types[j].func(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);

}
