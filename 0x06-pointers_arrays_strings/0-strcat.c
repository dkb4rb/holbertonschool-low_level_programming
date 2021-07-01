#include "holberton.h"

/**
 *_strcat - convert two lines in one string
 *@dest: value of a return
 *@src: value with contain string
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

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