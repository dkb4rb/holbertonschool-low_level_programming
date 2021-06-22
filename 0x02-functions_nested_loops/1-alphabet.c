#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
int init;
int end = 122;
for (init = 97; init < end; init++)
{
_putchar(init);
}
return (0);
}
