#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal.
 * @n: number of times to print space and \.
 */

void	print_diagonal(int n)
{
	int	i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
