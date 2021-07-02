#include "holberton.h"

/**
 *_strncat - align two values in one line of text
 *@src: this is value with contain to strings
 *@n: this is value with contain values of comparison.
 *@dest: this is value of return one char
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d_l = 0;

	while (dest[i++])
		d_l++;

	for (i = 0; src[i] && i < n; i++)
		dest[d_l++] = src[i];

	return (dest);
}