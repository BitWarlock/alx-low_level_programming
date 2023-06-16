#include <stdio.h>

/**
 * main - prints all alphabets using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a < 'e' || a < 'q' || a <= 'z')
	{
		putchar(a++);
	}
	putchar('\n');
	return (0);
}
