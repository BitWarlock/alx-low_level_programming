#include <stdio.h>

/**
 * main - prints count numbers of fibonacci.
 *
 * Return: 0 (success)
 */

int	main(void)
{
	int	count;
	int	i;
	long int	fib1 = 1;
	long int	fib2 = 2;

	printf("%ld, %ld", fib1, fib2);

	for (i = 3; i <= count; i++)
	{
		long int	next = fib1 + fib2;

		printf(", %ld", next);

		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");
	return (0);
}
