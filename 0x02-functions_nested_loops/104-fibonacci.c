#include <stdio.h>

/**
 * getnumdigits - Returns the number of digits in a number
 *
 * @num: The number
 *
 * Return: Number of digits
 */

int	getnumdigits(int num)
{
	int	count = 0;

	if (num == 0)
		return (1);

	while (num != 0)
	{
		num /= 10;
		count++;
	}

	return (count);
}

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by commas and spaces,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int	main(void)
{
	int	count;
	unsigned long fib1 = 1, fib2 = 2, sum;
	int	initial;

	initial = getnumdigits(fib2) - getnumdigits(fib1);

	for (count = 1; count <= 98; count++)
	{
		if (count > 1)
			printf(", ");


		while (initial > 0)
		{
			printf("%d", 0);
			initial--;
		}

		printf("%lu", fib1);

		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
	}

	printf("\n");

	return (0);
}
