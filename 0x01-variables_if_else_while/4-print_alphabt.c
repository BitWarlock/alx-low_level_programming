#include <stdio.h>

/**
 * main - prints all alphabets except e and q using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
