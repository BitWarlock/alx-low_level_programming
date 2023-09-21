#include "lists.h"

/**
 * print_list - function that prints all elements of a list_t.
 * @h: pointer to the head of the list.
 * Return: the number of nodes.
 */

size_t	print_list(const list_t *h)
{
	size_t	i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
