#include <stdio.h>

/**
 * main - entry point
 * description: prints the sum of all the multiples of 3 or 5 below 1024.
 *
 * Return: 0 success.
 */

int	main(void)
{
	int	sum, counter;

	sum = 0;
	for (counter = 1; counter < 1024; counter++)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
		{
			sum = counter + sum;
		}
	}
	printf("%d\n", sum);
	return (0);
}
