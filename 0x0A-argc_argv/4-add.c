#include <stdio.h>

int _atoi(char *s);

/**
 *main - sum number into argv
 *@argc: argument count
 *@argv: argument value
 *Return: null value
 */

int main(int argc, char *argv[])
{
	int i, j, c,sum;
	char *s;

	sum = 0;
	c = 0;

	i = 1;
	while (i < argc)
	{
		s = argv[i];
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}

	for (i = 1; i < argc; i++)
	{
		c = _atoi(argv[i]);
		sum = sum + c;
	}
	printf("%d\n", sum);
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
