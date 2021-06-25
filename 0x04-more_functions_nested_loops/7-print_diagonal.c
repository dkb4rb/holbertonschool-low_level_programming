#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: value for default
 */

void print_diagonal(int n)
{
int j;
int d = 1;
if (n > 0)
{
while (d <= n)
{
for (j = 1; j < d; j++)
{
_putchar(' ');
}
d++;
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
