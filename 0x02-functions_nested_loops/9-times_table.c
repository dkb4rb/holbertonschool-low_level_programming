#include "holberton.h"

/**
* times_table - function that prints the 9 times table, starting with 0.
* Return:void
*/

void times_table(void)
{
	int numtabnine, multi, result = 0;

	for (numtabnine = 0; numtabnine <= 9; numtabnine++)
	{
		for (multi = 0; multi <= 9; multi++)
		{
			result = multi * numtabnine;
			if (multi != 0)
			{
				if (result <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			else
			{
				if (result < 9)
				{
					_putchar(result + '0');
				}
				else
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
