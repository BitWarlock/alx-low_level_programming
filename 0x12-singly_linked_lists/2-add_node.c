#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the head.
 * @str: string.
 * Return: addrss to new node.
 */

list_t	*add_node(list_t **head, const char *str)
{
	list_t	*new_node;
	int	len = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	while (str[len])
		len++;
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
