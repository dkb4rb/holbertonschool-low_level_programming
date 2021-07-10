#include <stdio.h>

int _atoi(char *s);

/**
 *main - sum number into argv
 *@argc: argument count
 *@argv: argument value
 *Return: null value
 */

int main(int argc, char **argv)
{
	int i, suma = 0;

	if (argc < 1)
	{
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!_atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		suma +=_atoi(argv[i]);
	}

	printf("%d\n", suma);

	return (0);
}

/**
* _atoi - Function that calculate a numbers, only nombers in a string
* @s: String that evaluates
* Return: The integer conversion
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);
	return (num * sign);
}
