#include "lists.h"

/**
 * free_list - frees a list_t.
 * @head: pointer to list head.
 * Return: void.
 */

void	free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
