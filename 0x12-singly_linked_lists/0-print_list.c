#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - check the code
 * @h: value of the leng str.
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
