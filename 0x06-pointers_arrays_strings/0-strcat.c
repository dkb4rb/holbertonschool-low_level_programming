#include "holberton.h"

/**
 *_strcat - convert two lines in one string
 *@dest: value of a return
 *@src: value with contain string
 *Return: dest
 */

char *strcat(char *dest, const char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
	{
		len++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[len++] = src[i];
	}

	return (dest);
}