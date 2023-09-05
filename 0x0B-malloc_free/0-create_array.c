#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of the array.
 * @c: char.
 * Return: pointer to the array.
 */

char	*create_array(unsigned int size, char c)
{
	char	*ptr;
	unsigned int	i;

	i = 0;
	ptr = malloc(sizeof(char) * size);
	if ((ptr == NULL) || (size == 0))
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
