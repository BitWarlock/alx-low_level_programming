#include "main.h"

/**
* read_textfile - function that reads a text file and prints it to stdout.
* @filename: name of the file.
* @letters: number of letters to read and print.
* Return: number of letters read and printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t	res;
	char	*str;
	int	fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (!str)
		return (0);
	res = read(fd, str, letters);
	if (res < 0)
		return (0);
	res = write(1, str, res);
	if (res < 0)
		return (0);
	close(fd);
	free(str);
	return (res);
}
