#include "lists.h"

/**
 * list_len - length of a list.
 * @h: linked list.
 * Return: the length.
 */

size_t	list_len(const list_t *h)
{
	size_t	len = 0;

	while (h)
	{
		h = h-> next;
		len++;
	}
	return (len);
}
