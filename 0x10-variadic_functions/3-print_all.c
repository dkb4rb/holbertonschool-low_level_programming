#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* _strings - Print arguments of type date char.
* @list: value vector arguments.
*/

void _strings(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
/**
* _chart - Print arguments of type date char.
* @list: value vector arguments.
*/

void _chart(va_list list)
{

	printf("%c", va_arg(list, int));
}
/**
* _ints - Print arguments of type date int.
* @list: value vector arguments.
*/

void _ints(va_list list)
{

	printf("%i", va_arg(list, int));
}

/**
* _floats - Print arguments of type date float.
* @list: value vector arguments.
*/

void _floats(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
* print_all - Print arguments of the all type of date.
* @format: this value of the format type
*/

void print_all(const char *const format, ...)
{
	data_t types[] = {
		{"c", _chart},
		{"i", _ints},
		{"f", _floats},
		{"s", _strings},
		{NULL, NULL}};

	int index = 0, indexb = 0;
	va_list list;

	char *separador = "";

	va_start(list, format);

	while (format != NULL && format[index])
	{
		while (types[indexb].type)
		{
			if (format[index] == *types[indexb].type)
			{
				printf("%s", separador);
				types[indexb].func(list);
				separador = ", ";
			}
			indexb++;
		}
		index++;
	}
	printf("\n");
	va_end(list);
}
