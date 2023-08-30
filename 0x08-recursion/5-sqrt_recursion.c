#include "main.h"

/**
 * sqrt69 - Recursive helper for calculating square root.
 * @n: number.
 * @i: number.
 * Return: square root of n.
 */

int	sqrt69(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (sqrt69(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number.
 * Return: square root of n.
 */

int	_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt69(n, 0));
}
