#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int _putchar(char c)
{
char c[10] = "Holberton\n";
int m;

for (m = 0; m < 10; m++)
{
_putchar(c[m]);
}
return (0);
}
