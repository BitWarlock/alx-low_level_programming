#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet,
 * in lowercase 10 times using _putchar.
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	int a, i;

	i = 0;

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
