#include "main.h"

/**
* read_textfile -  function that reads a text file and prints it to the POSIX standard output.
* @filename: name of the file.
* @letters: number of letters to read and print.
* Return: number of letters read and printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t	res;
	char	*str;
	int	fd;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (!str)
		return (0);
	res = read(fd, str, letters);
	if (!res)
		return (0);
	res = write(1, str, res);
	if (!res)
		return (0);
	return (res);
}
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
