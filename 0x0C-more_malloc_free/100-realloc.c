#include "holberton.h"

/**
 * _realloc - Entry point
 *@ptr: pointer to the memory previously allocated
 *@old_size: size of the allocated ptr
 *@new_size: size of new memory block
 * Return: a pointer to an array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
        void *new_ptr;
        char *ptr_copy, *filler;
        unsigned int index;
        if (new_size == old_size)
                return (ptr);
        if (ptr == NULL)
        {
                new_ptr = malloc(new_size);
                if (new_ptr == NULL)
                {
                        return (NULL);
                }
                return (new_ptr);
        }
        if (new_size == 0 && ptr != NULL)
        {
                free(ptr);
                return (NULL);
        }
        ptr_copy = ptr;
        new_ptr = malloc(sizeof(*ptr_copy) * new_size);
        if (new_ptr == NULL)
        {
                free(ptr);
                return (NULL);
        }
        filler = new_ptr;
        for (index = 0; index < old_size && index < new_size; index++)
        {
                filler[index] = *ptr_copy++;
        }
        free(ptr);
        return (new_ptr);
}
