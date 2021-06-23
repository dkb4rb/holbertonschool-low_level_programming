#include "holberton.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer.
 * Return: void
 */

void jack_bauer(void)
{
int min;
int hour = 0;
while (hour <= 23)
{
for (min = 0; min <= 59; min++)
{
_putchar(hour / 10 + '0');
_putchar(hour % 10 + '0');
_putchar(':');
_putchar(min / 10 + '0');
_putchar(min % 10 + '0');
_putchar('\n');
}
hour++;
}
}
