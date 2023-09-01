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
	int	i;
	int	cents;
	int	res;
	int	d[5] = {25, 10, 5, 2, 1};

	i = 0;
	res = 0;
	if (argc != 2)
		return (printf("Error\n"), 1);
	cents = atoi(argv[1]);
	if (cents < 0)
		return (printf("0\n"), 0);
	while (i < 5 && cents)
	{
		res += cents / d[i];
		cents %= d[i];
		i++;
	}
	printf("%d\n", res);
	return (0);
}
