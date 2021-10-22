#include "sort.h"

listint_t *create_list(size_t size)
{

    listint_t *new_list;
    new_list = malloc(sizeof(listint_t) * size);
    if (new_list == NULL)
        return (NULL);
    return new_list;
}

int main(void)
{

    listint_t *list;
    listint_t *list2;
    size_t size = 10;

    for (size_t i = 0; i < size; i++)
    {
        list = create_list(i);
        list2 = create_list(i);

        printf("\nLista [%ld]\n", i);
        print_list(list);
        print_list(list2);
    }

    return EXIT_SUCCESS;
}