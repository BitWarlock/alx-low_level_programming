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

	for (i = 0; s[i]; i++)
	{
		for (j = 0; old[j]; j++)
		{
			if (s[i] == old[j])
			{
				s[i] = new[j];
				break;
			}
		}
	}
	return (s);
}
