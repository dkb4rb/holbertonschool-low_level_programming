#include "holberton.h"

/**
*print_alphabet_x10 - public alphabet in uppercase metod
*
*/

void print_alphabet_x10(void)
{
int init;
int end = 122;
int buc = 0;

while (buc <= 9)
{
for (init = 97; init <= end; init++)
{
_putchar(init);
}
_putchar('\n');
buc++;
}
}