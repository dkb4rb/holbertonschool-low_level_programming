#include "holberton.h"
/*

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