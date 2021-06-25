#include <stdio.h>

/**
* main - Fizz-Buzz code testing
* Return: 0
**/

int main(void)
{
	int Bz = 1;

	while (Bz <= 100)
	{
		if (((Bz % 3) == 0) && ((Bz % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((Bz % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((Bz % 5) == 0)
		{
			if (Bz != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%i ", Bz);
		}
		Bz++;
	}
	printf("\n");
	return (0);
}
