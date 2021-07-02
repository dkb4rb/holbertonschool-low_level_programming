#include "holberton.h"
/**
 *string_toupper - function that changes all lowercase and string to uppercase.
 *@str: is value of return.
 *Return: str value
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
