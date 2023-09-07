#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: bytes to concatenate.
 * Return: pointer to new allocated space.
 */

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	char	*ptr;
	unsigned int	i, len1, len2;

	len1 = 0;
	len2 = 0;
	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	while (s2[len2])
		len2++;
	while (s1[len1])
		len1++;
	if (n >= len2)
		n = len2;
	ptr = malloc(sizeof(*ptr) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < n; i++)
		ptr[len1 + i] = s2[i];
	ptr[len1 + n] = '\0';
	return (ptr);
}
