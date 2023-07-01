#include "main.h"

/**
 * puts_half - function that prints half of a string.
 * @str: string to be printed.
 */

void	puts_half(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i])
		i++;
	for (n = (i / 2); n < i; n++)
	{
		putchar(str[n]);
	}
	putchar('\n');
}
