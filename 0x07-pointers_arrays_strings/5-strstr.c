#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string to search.
 * @needle: substring to be searched for.
 * Return: pointer to the beginning of the located substring, or NULL.
 */

char	*_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;

	j = 0;
	while (*haystack)
	{
		if (*needle == '\0')
			return (haystack);
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[j])
			{
				do {
					if (needle[j + 1] == '\0')
						return (haystack + i);
					j++;
				} while (haystack[i + j] == needle[j]);
			}
		}
	}
	return (NULL);
}
