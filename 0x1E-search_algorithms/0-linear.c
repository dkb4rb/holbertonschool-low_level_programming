#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
* linear_search -  function that searches for a value
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: index
* Otherwise -1
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int index = 0;

	if (array)
	{
		for (index = 0; index < size; index++)
		{
			printf("Value checked array[%d] = [%d]\n", index, array[index]);
			if (array[index] == value)
				return (index);
		}
	}
	return (-1);
}
