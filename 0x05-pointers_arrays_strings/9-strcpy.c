#include "holberton.h"

/**
 *_strcpy - print values of int.
 *@src: is pointer value
 *@dest: value retur data
 *Return: dest value
 */

char *_strcpy(char *dest, const char *src)
{
	int d = 0;

	while (src[d])
	{
		dest[d] = src[d];
		d++;
	}

	return (dest);
}
