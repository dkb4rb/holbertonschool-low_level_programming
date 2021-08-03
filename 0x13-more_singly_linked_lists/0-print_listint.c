#include <stdio.h>
#include "lists.h"
/**
 * print_listint - This function print a list to integer.
 *
 * Return: Number of nodes.
 * @h: points to the first node.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
