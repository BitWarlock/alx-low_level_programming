#include "main.h"

/**
 * check_args - function to check args and fds.
 * @ac: number of args.
 * @av: arguments.
 * @in: fd for from_file.
 * @out: fd for to_file.
 */

void	check_args(int ac, char *av[], int in, int out)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (in < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (out < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
* main - copies content from one file to another.
* @argc: number of arguments.
* @argv: arguments
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	char	*str[1024];
	int	chars;
	int	wr;
	int	from;
	int	to;

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_args(argc, argv, from, to);
	chars = 1024;
	while (chars == 1024)
	{
		chars = read(from, str, 1024);
		if (chars < 0)
			check_args(argc, argv, -1, 0);
		wr = write(to, str, chars);
		if (wr < 0)
			check_args(argc, argv, 0, -1);
	}
	wr = close(from);
	if (wr < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	wr = close(to);
	if (wr < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
