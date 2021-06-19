#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, c;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(toupper(c));
	}
	putchar('\n');
	return (0);
}
