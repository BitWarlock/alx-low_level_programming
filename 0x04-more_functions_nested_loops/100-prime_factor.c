#include <stdio.h>
#include <stdint.h>
/**
 * main - prints the largest prime factor of the number 612852475143.
 * 
 * Return: 0 Always success.
 */

int	main(void)
{
	uint64_t	n;
	uint64_t	divisor;

	n = 600851475143;
	divisor = 1;
	while (n != 1)
	{
		divisor += 2;
		while (!(n % divisor))
			n /= divisor;
	}
	printf("%lu\n", divisor);
	return (0);
}
