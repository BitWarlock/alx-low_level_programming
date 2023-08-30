#include "main.h"

/**
 * prime_check - function to check if n is prime.
 * @n: number.
 * @a: number.
 * Return: 1 if n is prime, else 0.
 */

int	prime_check(int n, int a)
{
	if (n == a)
		return (1);
	if (n % a == 0)
		return (0);
	else
		return (prime_check(n, a + 1));
}

/**
 * is_prime_number - function to determine if n is prime.
 * @n: number.
 * Return: 1 if n prime, else 0.
 */

int	is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, 2));
}
