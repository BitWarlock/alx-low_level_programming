#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list.
 * @h: Head of a list.
 * Return: numbers of nodes.
 */

size_t	print_listint(const listint_t *h)
{
	size_t	nnodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}

	return (nnodes);
}
