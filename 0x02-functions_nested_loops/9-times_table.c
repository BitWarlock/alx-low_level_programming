#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void.
 */
void	times_table(void)
{
	int i, j, d;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			d = i * j;

			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + '0');

			_putchar((d % 10) + '0');
		}

		_putchar('\n');
	}
}
