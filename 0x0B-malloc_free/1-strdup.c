#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer to a newly allocated space.
 * @str: string to copy.
 * Return: pointer to the new string.
 */

char	*_strdup(char *str)
{
	int	len;
	char	*ptr;
	int	i;

	i = 0;
	while (str[++len])
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
