#include <stdio.h>

/**
 * main - prints numbers in base 16 using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a = 'a';
	int A;

	for (A = 0; A < 10; A++)
		putchar(A + '0');
	while (a <= 'f')
		putchar(a++);
	putchar('\n');
	return (0);
}
