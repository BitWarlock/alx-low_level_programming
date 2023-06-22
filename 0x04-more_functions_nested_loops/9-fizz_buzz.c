#include <stdio.h>

/**
 * main - prints numbers from 1 - 100.
 * description: if number is a multiplies of 3 print fizz, for 5 buzz, for both
 * fizzbuzz.
 * Return: Always success 0.
 */

int	main(void)
{
	int	i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf(" Fizz");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			printf(" Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
