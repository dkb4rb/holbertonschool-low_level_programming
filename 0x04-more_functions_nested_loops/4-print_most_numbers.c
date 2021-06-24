#include "holberton.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9.
 * Return: Void
 */

void print_most_numbers(void)
{
int naturals = 48;
while (naturals <= 57)
{
if (naturals != 50 && naturals != 52)
{
_putchar(naturals);

}
naturals++;
}
_putchar('\n');
}
