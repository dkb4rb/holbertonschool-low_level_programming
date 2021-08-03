#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t.
 * @h: list pointer.
 *
 * Return: list elements
 */

size_t print_listint(const listint_t *h)
{
	size_t display = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->n == 0)
		{
			printf("%d\n", h->n);
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
