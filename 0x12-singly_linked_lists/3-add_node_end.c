#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t.
 * @head: pointer to the head of the list.
 * @str: string.
 * Return: the address of the new element, or NULL otherwise.
 */

list_t	*add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int	len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (new);
}
