#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

char *_strdup(const char *str);
int len(const char *str);
int lenR(const char *str, int counter);
void copy(const char *src, char *dest);

/**
 * add_node - Functions add new node in structure
 * @head: pointer head of structure list_t.
 * @str: addres of the string search.
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new_node->str = _strdup(str);
	new_node->len = len;
	new_node->next = (*head);

	(*head) = new_node;
	return (new_node);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space in mem.
 * @str: The size of the array to be initialized.
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

char *_strdup(const char *str)
{
	if (str)
	{
		int Lenght = len(str);
		char *copystr = (char *)malloc(sizeof(char) * Lenght);

		copy(str, copystr);
		return (copystr);
	}
	else
	{
		return (NULL);
	}
}

/**
 * len - Functions copy values
 * @str: Destine of de buffer.
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

int len(const char *str)
{
	return (lenR(str, 1));
}

/**
 * lenR - Functions copy values
 * @str: Destine of de buffer.
 * @counter: addres of the string search.
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

int lenR(const char *str, int counter)
{
	if (!(*str))
	{
		return (counter);
	}
	else
	{
		return (lenR(str + 1, counter + 1));
	}
}

/**
 * copy - Functions copy values
 * @dest: Destine of de buffer.
 * @src: addres of the string search.
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

void copy(const char *src, char *dest)
{
	if (!dest)
	{
		;
	}
	else if (!*src)
	{
		*dest = *src;
	}
	else
	{
		*dest = *src;
		copy(src + 1, dest + 1);
	}
}