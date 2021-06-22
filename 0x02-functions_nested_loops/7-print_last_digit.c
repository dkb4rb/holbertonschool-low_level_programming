#include "holberton.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @d:the value
 * Return: value of the d
 */

int print_last_digit(int d)
{
d = d % 10;
if (d < 0)
{
d = (d * (-1));
}
_putchar(d + '0');
return (d);
}