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

	i = 1;
	while (i <= 100)
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
		else
		{
			printf(" %d", i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
