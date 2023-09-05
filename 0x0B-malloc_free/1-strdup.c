#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer to a newly allocated space.
 * @str: string to copy.
 * Return: pointer to the new string.
 */

char	*_strdup(char *str)
{
	unsigned int	len, i;
	char	*ptr;
	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[len])
		len++;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (i <= len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
