#include <stdio.h>

/**
 *main -  program that prints its name, followed by a new line.
 *@argc: argument count
 *@argv: argument value
 *Return: null value
 */

int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
