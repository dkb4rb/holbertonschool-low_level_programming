#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits strings to words
 * @str: string to split
 * Return: pointer to an array of words
 */

void copy(char *Buffer, char **av, int ac)
{

	while (ac--)
	{
		while (**av)
		{
			*Buffer++ = *(*av)++;
		}
		*Buffer++ = '\n';
	}
	*Buffer = '\0';
}

int len(int ac, char **av)
{

	int result = 1;
	int counter = 0;

	while (ac--)
	{

		while (**av)
		{
			counter++;
			(*av)++;
		}
		result += counter;
		counter = 0;
		result++;
	}
	result++;

	return (result);
}

char *argstostr(int ac, char **av)
{
	int result = 0;
	char *Buffer = NULL;

	if (!ac || !av)
	{
		return NULL;
	}

	result = len(ac, av);

	Buffer = (char *)malloc(sizeof(char) * result);

	if (Buffer)
		copy(Buffer, av, ac);

	return (Buffer);
}