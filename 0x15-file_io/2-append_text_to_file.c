#include "main.h"

/**
* append_text_to_file - function that appends text at
* the end of a file.
* @filename: file name.
* @text_content: text to write to file.
* Return: 1 success, -1 fail.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int	tmp;
	int	len;
	int	fd;

	len = 0;
	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC | O_APPEND, 0600);
	if (fd < 0)
		return (-1);
	while (text_content[len])
		len++;
	tmp = write(fd, text_content, len);
	if (tmp < 0)
		return (-1);
	close(fd);
	return (1);
}
