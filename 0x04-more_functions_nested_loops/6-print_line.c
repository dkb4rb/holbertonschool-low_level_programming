#include "holberton.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n:  is the number of times the character _ should be printed
 */

void print_line(int n)
{
int z = 1;
while (z <= n)
{
_putchar ('_');
z++;
}
_putchar ('\n');
}