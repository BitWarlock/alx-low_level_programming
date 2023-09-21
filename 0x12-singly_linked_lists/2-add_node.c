#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the head.
 * @str: string.
 * Return: addrss to new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int	len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
