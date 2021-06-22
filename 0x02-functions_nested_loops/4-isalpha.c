#include "holberton.h"

/**
* _islower checkout
* @c: variable to check
* Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if ((c <= 65) && (c >= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}