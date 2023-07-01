#include "main.h"

/**
 * strcpy - function that does the same as strcpy (check man strcpy)
 * @dest: destination string.
 * @src: source string.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int	i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
