#include "holberton.h"

/**
*leet - Change text in 1337
*@p: parameter return
*Return: p values
*/

char *leet(char *p)
{
	int a, b;
	char text1[10] = "aAeEoOtTlL";
	char text2[10] = "4433007711";

	for (a = 0; p[a]; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (p[a] == text1[b])
			{
				p[a] = text2[b];
			}
		}
	}
	return (p);
}
