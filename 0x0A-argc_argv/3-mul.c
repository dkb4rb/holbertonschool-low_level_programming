#include <stdio.h>
#include <stdlib.h>

/**
 *main -  program that prints its name, followed by a new line.
 *@argc: argument count
 *@argv: argument value
 *Return: null value
 */

int main(int argc, char **argv)
{
	int v1, v2;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	v1 = atoi(argv[1]);
	v2 = atoi(argv[2]);

	printf("%d\n", v1 * v2);
	return (0);
}
