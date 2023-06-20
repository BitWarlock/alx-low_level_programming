#include"main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: void
*/

void print_alphabet(void)
{
	int a;
	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
