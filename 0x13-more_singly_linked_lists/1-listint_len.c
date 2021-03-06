#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - singly linked list
 * @h: pointer
 * Return: Display
 */

size_t listint_len(const listint_t *h)
{
	size_t display = 0;

	while (h != NULL)
	{
		h = h->next;
		display++;
	}

	return (display);
}
