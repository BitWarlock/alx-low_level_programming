#include "main.h"

/**
 * print_to_98 - prints from n to 98 in order.
 *
 * @n: integer type
 *
 * Return: void.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}
