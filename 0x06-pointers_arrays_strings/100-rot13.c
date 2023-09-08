#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string to encode.
 * Return: new string.
 */

char	*rot13(char *s)
{
	int	i, j;
	char	old[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char	new[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

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
