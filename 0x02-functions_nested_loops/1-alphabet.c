#include "holberton.h"

/**
*print_alphabet - normalaise in lowercase on reverse mode
*/

void print_alphabet(void)
{
int init;
int end = 122;
for (init = 97; init <= end; init++)
{
_putchar(init);
}
_putchar('\n');
}
