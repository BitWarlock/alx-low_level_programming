#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: pointer to newly allocated space.
 */

char	*str_concat(char *s1, char *s2)
{
	int	len1 = 0;
	int	len2 = 0;
	int	i = 0;
	char	*ptr;

	s2 = (s2 == NULL) ? "" : s2;
	s1 = (s1 == NULL) ? "" : s1;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len2; i++)
		ptr[len1 + i] = s2[i];
	ptr[len1 + len2] = '\0';
	return (ptr);
}
