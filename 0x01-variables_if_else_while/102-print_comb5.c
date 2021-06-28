#include <stdio.h>

/**
  * main - Prints combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
int h, m;
for (h = 0; h <= 98; h++)
{
for (m = h + 1; m <= 99; m++)
{
putchar((h / 10) + '0');
putchar((h % 10) + '0');
putchar(' ');
putchar((m / 10) + '0');
putchar((m % 10) + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
