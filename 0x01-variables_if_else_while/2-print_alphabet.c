#include <stdio.h>

/**
 * entry main
 *
 * return (0);
 */

int main(void)
{
	char i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
