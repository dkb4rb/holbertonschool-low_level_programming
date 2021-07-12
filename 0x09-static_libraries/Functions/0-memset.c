#include "holberton.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the filled memory area @s.
 */
void *_memset(void *s, int c, unsigned int n)
{

	unsigned int i;
	unsigned char *m = s, valor = c;

	for (i = 0; i < n; i++)
		m[i] = valor;

	return (m);
}
