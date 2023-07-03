#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory area pointer.
 * @n: n bytes to be filled.
 * @b: constant byte.
 * Return: buffer s.
 */

char	*_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*(s + n) = b;
	}
	return (s);
}
