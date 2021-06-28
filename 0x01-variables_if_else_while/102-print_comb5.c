#include <stdio.h>

/**
  * main - Prints combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
int h, m;
for (h = 0; h < 99; h++)
{
for (m = 1; m < 100; m++)
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
return (0);
}
