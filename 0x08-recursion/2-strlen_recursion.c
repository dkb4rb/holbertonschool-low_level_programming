#include "holberton.h"

/**
 *_strlen_recursion - calculate len into string
 *@s: value pointer
 *Return: value Len
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
