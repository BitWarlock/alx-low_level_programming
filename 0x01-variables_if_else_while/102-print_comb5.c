#include <stdio.h>

/**
 * main - prints combination of two numbers from 00 01-98 99 using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, b, c, d;
	int first = 1;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (!first)
					{
						putchar(',');
						putchar(' ');
					}
					else
					{
						first = 0;
					}

					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
