#include "main.h"
#include <unistd.h>

/**
 * leet - function that encodes a string into 1337.
 * @s: string to convert.
 * Return: new string.
 */

char	*leet(char *s)
{
	int	i, j;
	char old[] = "aAeEoOtTlL";
	char new[] = "4433007711";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (old[j])
		{
			if (s[i] == old[j])
				s[i] = new[j];
			j++;
		}
		i++;
	}
	return (s);
}
