#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string one.
 * @s2: string two.
 * Return: integer indicating the result of the comparison.
*/

int	_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}
