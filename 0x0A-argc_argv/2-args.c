#include <unistd.h>

/**
 * main - entry point.
 * @argc: argument count.
 * @argv: argument verctor.
 * Return: always 0.
 */

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i] && i <= argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
