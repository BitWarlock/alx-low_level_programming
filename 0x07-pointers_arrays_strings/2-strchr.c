#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string to search.
 * @c: character.
 * Return: pointer to to character c or NULL.
 */

char	*_strchr(char *s, char c)
{
	while (*s && *s != c)
	{
		s++;
	}

	return ((*s == c) ? s : NULL);
}
