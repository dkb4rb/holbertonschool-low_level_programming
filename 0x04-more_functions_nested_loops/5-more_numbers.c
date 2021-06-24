#include "holberton.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
int row, files;
for (files = 0; files < 10; files++)
{
for (row = 0; row <= 14 ; row++)
{
if (row > 9)
{
_putchar (row / 10 + '0');
}
_putchar (row % 10 + '0');
}
_putchar ('\n');
}
}
