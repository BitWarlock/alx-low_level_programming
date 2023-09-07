#include "main.h"
#include <stdlib.h>


/**
 * _memset = function that fills memory.
 * @s: memory pointer.
 * @n: size to fill.
 * @: the byte.
 * Return: pointer to new buffer.
 */

char	*_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}

/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: elements of the array.
 * @size: size in bytes of nmemb.
 * Return: pointer to the allocated memory.
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ptr = _memset(ptr, 0, (nmemb * size));
	return (ptr);
}
