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
		if (
			(
				(init != 10) && (init != 11)) &&
			(((init != 20) && (init != 21) && (init != 22))) &&
			(((init != 30) && (init != 31) && (init != 32 && init != 33))) &&
			(((init != 40) && (init != 41) &&
			(init != 42) && (init != 43) && (init != 44))) &&
			(((init != 50) && (init != 51) && (init != 52) &&
			(init != 53) && (init != 54) && (init != 55))) &&
			(((init != 60) && (init != 61) && (init != 62) &&
			(init != 63) && (init != 64) && (init != 65) &&
			(init != 66))) && (((init != 70) && (init != 71) &&
			(init != 72) && (init != 73) && (init != 74) && (init != 75) &&
			(init != 76) && (init != 77))) && (((init != 80) && (init != 81) &&
			(init != 82) && (init != 83) && (init != 84) && (init != 85) &&
			(init != 86) && (init != 87) && (init != 88)))

		)
		{
			putchar(((init / 10) + '0'));
			putchar(((init % 10) + '0'));

			if (init != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
