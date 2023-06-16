#include <stdio.h>

/**
 * main - prints all alphabets using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a++);
	}
	while (A <= 'Z')
		putchar(A++);
	putchar('\n');
	return (0);
}
