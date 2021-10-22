#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t lenght, status, i;
    int tmp;

    if (array == NULL || size < 2)
        return;

    lenght = size;
    while (lenght > 0)
    {
        status = 0;
        for (i = 0; i < lenght - 1; i++)
        {

            if (array[i] > array[i + 1])
            {
                tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
                status = i + 1;
                print_array(array, size);
            }
        }
        lenght = status;
    }
}