#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer to the new string.
 */

char	*argstostr(int ac, char **av)
{
	int	i, j, k, len;
	char	*ptr;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	len = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	ptr = malloc(sizeof(char) * (len + 1 + ac));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';
		k++;
		i++;
	}
	ptr[k] = '\0';
	return (ptr);
}
