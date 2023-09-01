#include "main.h"

/**
 * string_toupper - function that changes all letters of a string to upper.
 * @s: string.
 * Return: new string.
 */

char	*string_toupper(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
