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
	if (ptr && new_size)
	{
		if (new_size == old_size)
		{
			return (ptr);
		}
		else if (new_size > old_size)
		{
			void *Rptr = malloc(old_size * new_size);

			if (!Rptr)
			{
				free(ptr);
			}
			return (Rptr);
		}
	}
	else if (ptr && !new_size)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		void *Rptr = malloc(new_size);

		if (!Rptr)
		{
			return Rptr;
		}
		return Rptr;
	}
}