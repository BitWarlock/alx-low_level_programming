#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: argument count.
 * @argv: argument verctor.
 * Return: always 0.
 */

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
		printf("Error\n");
	return (0);
}
