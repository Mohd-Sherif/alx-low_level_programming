#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index "index"
 *				of a "listint_t" linked list.
 * @head: pointer to pointer to the list.
 * @index: order of the node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *old = *head;
	unsigned int ctr = 0;

	if (old == NULL || head == NULL)
		return (-1);
	else if (index == 0)
	{
		tmp = old->next;
		free(old);
		*head = tmp;
		return (1);
	}
	while (old != NULL && ctr < index - 1)
	{
		old = old->next;
		ctr++;
	}
	if (old == NULL)
		return (-1);
	tmp = old->next->next;
	free(old->next);
	old->next = tmp;
	return (1);
}
