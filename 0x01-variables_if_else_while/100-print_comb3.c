#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int init;

	for (init = 1; init <= 89; init++)
	{
		putchar(((init / 10)+ '0'));
		putchar(((init % 10)+ '0'));
		
		if (init != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
