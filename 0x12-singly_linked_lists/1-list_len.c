#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * list_len - check the code
 * @h: value of the leng str.
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	size_t len_t = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("(nil)\n");
		h = h->next;
		len_t++;
	}

	return (len_t);
}
