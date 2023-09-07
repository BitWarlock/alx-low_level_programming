#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block.
 * @ptr: pointer to previous memory.
 * @old_size: size of allocated space for ptr.
 * @new_size: new size for ptr.
 * Return: pointer to the new allocated memory space.
 */

void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void	*str;
	unsigned int	i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < new_size && i < old_size)
	{
		*((char *)str + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);
	return (str);
}
