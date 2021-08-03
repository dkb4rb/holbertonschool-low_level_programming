#include <stdio.h>

int mult(int p, int s);
int _atoi(char *s);

/**
 *main -  program that prints its name, followed by a new line.
 *@argc: argument count
 *@argv: argument value
 *Return: null value
 */

int main(int argc, char **argv)
{
	int v1, v2, rslt;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	v1 = _atoi(argv[1]);
	v2 = _atoi(argv[2]);
	rslt = mult(v1, v2);

	printf("%d\n", rslt);
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

	do
	{
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);
	return (num * sign);
}

/**
* mult - Function that calculate a numbers.
* @p: value 1 to mult
* @s: value 2 to mult
* Return: Mult
*/

int mult(int p, int s)
{
	int rst;

	rst = p * s;

	return (rst);
}
