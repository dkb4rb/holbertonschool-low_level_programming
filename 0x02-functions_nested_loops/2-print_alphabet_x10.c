#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int init;
int end = 122;
int buc = 0;

while (buc <= 9)
{
for (init = 97; init < end; init++)
{
_putchar(init);
}
_putchar('\n');
buc++;
}
return (0);
}