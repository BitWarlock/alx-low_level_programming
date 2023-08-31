#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: n bytes to conatenate.
 * Return: pointer to dest.
 */

char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i])
		i++;
	while (src[a] && a < n)
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
