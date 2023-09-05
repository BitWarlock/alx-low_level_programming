#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2d array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer to 2d array of ints.
 */

int	**alloc_grid(int width, int height)
{
	int	**ptr;
	int	i = 0;
	int	j = 0;

	if ((height <= 0) || (width <= 0))
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	while (i < height)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
