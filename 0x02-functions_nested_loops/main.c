#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10();
int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
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
}