#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * free_list - Functions add new node in structure
 * @head: pointer head of structure list_t.
 */

void free_list(list_t *head)
{
	list_t *T;

	while (head != NULL)
	{
		T = head->next;
		free(head->str);
		free(head);
		head = T;
	}
}
