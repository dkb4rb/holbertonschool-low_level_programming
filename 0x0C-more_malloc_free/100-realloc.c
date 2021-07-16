#include "holberto.h"

/**
 * _realloc - Entry point
 *@ptr: pointer to the memory previously allocated
 *@old_size: size of the allocated ptr
 *@new_size: size of new memory block
 * Return: a pointer to an array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}