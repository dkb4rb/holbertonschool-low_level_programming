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
	if (!ptr)
	{
		void *Rptr = malloc(new_size);
		return Rptr;
	}
	else if (!new_size && ptr)
	{
		free(ptr);
	}
	else if (new_size > old_size)
	{
		void *Rptr = malloc(old_size + new_size);
		if (!Rptr)
		{
			free(ptr);
			ptr = NULL;
			return Rptr;
		}
		ptr = Rptr;
		return Rptr + old_size;
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	return NULL;
}
