/** File: 0-create_array.c
 * Auth: Juan Duque
 * linkeding = https://www.linkedin.com/in/juan-duque-5125441b2
 * GitHub = https://www.github.com/DKBARB10
 * Twitter = https://twitter.com/juanduq42081660
 */

#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	while (index < size)
	{
		array[index] = c;
		index++;
	}

	return (array);
}