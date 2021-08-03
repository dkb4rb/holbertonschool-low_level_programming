#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
    size_t display = 0;

    while (h != NULL)
    {
        if (h->n == 0)
        {
            printf("%d", h->n);
        }

        if (h->n != '\0')
        {
            printf("%d\n", h->n);
        }
        h = h->next;
        display++;
    }

    return (display);
}