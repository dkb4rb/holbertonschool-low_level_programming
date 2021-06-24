#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 *@o: last digit
 *
 * Return: The end
 */

int print_last_digit(int o)
{
	if (o <= 0)
	{
		o = (o * (-1));
	}
	_putchar((o % 10) + 48);
	return (o % 10);
}
