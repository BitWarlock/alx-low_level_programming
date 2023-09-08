#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string to encode.
 * Return: new string.
 */

char	*rot13(char *s)
{
	int	i;
	char	c;

	i = 0;
	while (s[i])
	{
		c = s[i];
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			s[i] += 13;
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
			s[i] -= 13;
		i++;
	}
	return (s);
}
