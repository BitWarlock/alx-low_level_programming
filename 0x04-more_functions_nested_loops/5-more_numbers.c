#include "main.h"

/**
 * more_numbers - print numbers from 0 - 14 ten times.
 *
 * Return: void.
 */

void	more_numbers(void)
{
	int	i, j;

	j = 0;
	i = 0;
	while (i < 10)
	{
		while (j < 15)
		{
			if (j > 9)
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
		if (j == 15)
			j = 0;
		_putchar('\n');
		i++;
	}
}
