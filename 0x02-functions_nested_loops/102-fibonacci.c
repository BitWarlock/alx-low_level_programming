#include <stdio.h>

/**
 * main - entry point
 * print_fibonacci - prints first 50 fibonacci numbers.
 * 
 * @count: number of fibonacci.
 * Return: void
 */

void	print_fibonacci(int count);

int	main(void)
{
	print_fibonacci(50);

	return (0);
}

void	print_fibonacci(int count)
{
	int i;
	long int fib1 = 1;
	long int fib2 = 2;

	printf("%ld, %ld", fib1, fib2);

	for (i = 3; i <= count; i++)
	{
		long int	next = fib1 + fib2;

		printf(", %ld", next);

		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");
}
