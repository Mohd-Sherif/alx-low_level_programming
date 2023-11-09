#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 *			index of a dlistint_t linked list.
 * @head: head of the list.
 * @index: index of the node that will be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur);
		return (1);
	}
	while (cur && index > 0)
	{
		index--;
		cur = cur->next;
	}
	if (index > 0)
		return (-1);
	cur->prev->next = cur->next;
	cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
