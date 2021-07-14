/*
 * File: 0-create_array.c
 * Auth: Juan Duque
 * Medellin(Ant)
 * linkeding = https://www.linkedin.com/in/juan-duque-5125441b2
 * Twitter = https://twitter.com/juanduq42081660
 * GitHub = https://www.github.com/DKBARB10*
 */

#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in mem.
 * @str: The size of the array to be initialized.
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

char *_strdup(char *str);

/**
 * copy - Functions copy values
 * @dest: Destine of de buffer.
 * @src: addres of the string search.
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

void copy(char *src, char *dest)
{
	if (!*src)
		9
		{
			*dest = *src;
			return;
		}
	else
	{
		*dest = *src;
		return (copy(src + 1, dest + 1));
	}
}

/**
 * lenR - Functions copy values
 * @str: Destine of de buffer.
 * @counter: addres of the string search.
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

int lenR(char *str, int counter)
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
 * len - Functions copy values
 * @str: Destine of de buffer.
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

int len(char *str)
{
	return (lenR(str, 1));
}

/**
 * _strdup - Functions principal with calling functions;
 * @str: Destine of de buffer.
 * Return: NULL.
 */

char *_strdup(char *str)
{
	if (str)
	{
		int Lenght = len(str);
		char *copystr = NULL;

		copy(str, copystr);
		return (copystr);
	}
	else
	{
		return (NULL);
	}
}
