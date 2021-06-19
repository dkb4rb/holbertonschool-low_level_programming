#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int init;

	for (init = 0; init <= 89; init++)
	{
		putchar(printf("%.2i", init));

		if (init != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
