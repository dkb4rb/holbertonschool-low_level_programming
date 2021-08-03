/*
 * File: 2-str_concat.c
 * Auth: Juan Duque
 * Medellin(Ant)
 */

#include "holberton.h"

#include <stdio.h>
#include <stdlib.h>

int len(char *str);
int lenR(char *str, int counter);
void copy(char *dest, char *src1, char *src2);
void copyS(char *dest, char *src1);

/**
 * str_concat - function that returns a pointer to a newly allocated memory.
 * @s1: The size of the array to be initialized.
 * @s2: The size of the array 2
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 && !s2)
	{
		int lenght1 = len(s1);
		char *buffer = (char *)malloc(sizeof(char) * (lenght1 + 1));

		if (buffer)
		{

			copyS(buffer, s1);
			buffer[lenght1 + 1] = '\0';
		}

		return (buffer);
	}
	else if (s2 && !s1)
	{
		int lenght1 = len(s2);
		char *buffer = (char *)malloc(sizeof(char) * (lenght1 + 1));

		if (buffer)
		{

			copyS(buffer, s2);
			buffer[lenght1 + 1] = '\0';
		}

		return (buffer);
	}
	else if (s1 && s2)
	{
		int lenght1 = len(s1);
		int lenght2 = len(s2);
		char *buffer = (char *)malloc(sizeof(char) * (lenght1 + lenght2 + 1));

		if (buffer)
		{

			copy(buffer, s1, s2);
			buffer[lenght2 + 1 + lenght1] = '\0';
		}

		return (buffer);
	}
	else
	{
		char *buffer = (char *)malloc(sizeof(char *) * 1);

		buffer[0] = '\0';

		return (buffer);
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
 * copyS - Functions copy values
 * @dest: Destine of de buffer.
 * @src1: addres of the string search
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
void copyS(char *dest, char *src1)
{

	if (!*src1)
	{
		;
	}
	else
	{

		if (*src1)
		{
			*dest++ = *src1++;
		}
		copyS(dest, src1);
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

	if (!*src1 && !*src2)
	{
		;
	}
	else
	{

		if (*src1)
		{
			*dest++ = *src1++;
		}
		else if (*src2)
		{
			*dest++ = *src2++;
		}
		copy(dest, src1, src2);
	}
}
