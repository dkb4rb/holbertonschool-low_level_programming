#include <stdio.h>
#include <ctype.h>

/**
 * entry main
 *
 * return (0);
 */

int main(void)
{
	int i, c;
	for (char i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (char c = 'a'; c <= 'z'; c++)
	{

		putchar(toupper(c));
	}
	putchar('\n');
	return (0);
}
