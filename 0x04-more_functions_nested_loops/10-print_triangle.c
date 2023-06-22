#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 * 
 */

void	print_triangle(int size)
{
	int	h, s, ha;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (s = 1; s <= size - h; s++)
			{
				_putchar(' ');
			}
			for (ha = 1; ha <= h; ha++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
