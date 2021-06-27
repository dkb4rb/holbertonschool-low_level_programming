#include <stdio.h>

/**
  * main - Prints combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int d, g;

	for (d = '0'; d <= '9'; d++)
	{
		for (g = '0'; g <= '9'; g++)
		{
			if (d < g)
			{
				putchar(d);
				putchar(g);

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
