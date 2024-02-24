#include "main.h"

/**
* read_textfile - function that reads a text file and prints it to stdout.
* @filename: name of the file.
* @letters: number of letters to read and print.
* Return: number of letters read and printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t	res, fd, rd;
	char	*str;

	if (!filename)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (!str)
		return (0);
	fd = open(filename, O_RDONLY);
	rd = read(fd, str, letters);
	res = write(1, str, rd);
	if (res < 0 || fd < 0 || rd < 0 || rd != res)
	{
		free(str);
		return (0);
	}
	close(fd);
	free(str);
	return (res);
}
