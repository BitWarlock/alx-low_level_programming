#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square.
 */

void	print_square(int size)
{
	int	i, j;

	i = 0;
	if (size <= 0)
		_putchar('\n');
	else if (i < size)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
