#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer to string.
 * @accept: substring prefix.
 * Return: number of bytes in the initial segment of s.
 */

unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	a;
	unsigned int	i;

	a = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (a);
			}
		}
		s++;
	}
	return (a);
}
