#include "main.h"

/**
 * print_numbers - print numbers from 0 - 9.
 *
 * Return: void.
 */

void	print_numbers(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
}
