#include "main.h"

/**
* binary_to_uint - Convert function to unsigned int
* @b: this is pointer
* Return: bin in case of bin is true or 0 if case b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int bin;

	bin = 0;

	if (!b)
	{
		return (0);
	}

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
	}
	for (index = 0; b[index] != '\0'; index++)
	{
		bin <<= 1;

		if (b[index] == '1')
		{
			bin += 1;
		}
	}

	return (bin);
}
