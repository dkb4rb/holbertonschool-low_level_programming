#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char z, b;

for (z = '0'; z <= '9'; z++)
{
	putchar(z);
}
for (b = 'a'; b <= 'f'; b++)
{
	putchar(b);
}
putchar('\n');
return (0);
}
