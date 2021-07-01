#include <stdio.h>
#include "holberton.h"

/**
* _atoi - Function that calculate a numbers, only nombers in a string
* @s: String that evaluates
* Return: The integer conversion
*/

int _atoi(char *s)
{
	int x, num, len;

	num = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= '0' && s[x] <= '9')
		{
			(num = ((num * 10) + s[x]) - '0');
			if (s[x + 1] == ' ')
			{
				break;
			}
		}
	}

	for (len = 0; s[len] != '\0'; len++)
	{
		if (s[len] == '-' && s[len + 1] >= '0' && s[len + 1] <= '9')
		{
			num = num * (-1);
			break;
		}
	}

	return (num);
}
