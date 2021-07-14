/*
 * File: 0-create_array.c
 * Auth: Juan Duque
 * Medellin(Ant)
 */

#include "holberton.h"

#include <stdio.h>
#include <stdlib.h>
int len(char *str);
int lenR(char *str, int counter);
void copy(char *dest, char *src1, char *src2);

/**
 * str_concat - function that returns a pointer to a newly allocated memory.
 * @s1: The size of the array to be initialized.
 * @s2: The size of the array 2
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 || s2)
	{

		int length = 0;
		int length2 = 0;
		int result = 0;
		char *buffer = NULL;

		if (s1)
		{
			length = len(s1);
		}

		if (s2)
		{
			length = len(s2);
		}

		result = length + length2;
		buffer = (char *)malloc(sizeof(char) * result + 1);

		if (buffer)
		{

			copy(buffer, s1, s2);
			buffer[result] = '\0';
		}

		return (buffer);
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

int len(char *str)
{
	return (lenR(str, 0));
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
 * copy - Functions copy values
 * @dest: Destine of de buffer.
 * @src1: addres of the string search.
 * @src2: addres of the string 2
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
void copy(char *dest, char *src1, char *src2)
{
	int state1 = src1 != NULL;
	int state2 = src2 != NULL;

	if (state1 && state2 && *src1 && *src2)
	{
		if (src1 && *src1)
		{
			*dest++ = *src1++;
		}
		else if (src2 && *src2)
		{
			*dest++ = *src2++;
		}
		copy(dest, src1, src2);
	}
	else if (state1 && *src1)
	{
		if (src1 && *src1)
		{
			*dest++ = *src1++;
		}
		copy(dest, src1, src2);
	}
	else if (state2 && *src2)
	{
		if (src2 && *src2)
		{
			*dest++ = *src2++;
		}
		copy(dest, src1, src2);
	}
}