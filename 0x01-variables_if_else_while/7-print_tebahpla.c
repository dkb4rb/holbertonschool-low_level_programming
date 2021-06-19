#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
    int i = 122;
    do {
    putchar(i);
    i--;
    } while (i >= 97);

    return (0);
}
