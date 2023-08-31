#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * Return: pointer to dest.
 */

char	*_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n] && n <= i)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
