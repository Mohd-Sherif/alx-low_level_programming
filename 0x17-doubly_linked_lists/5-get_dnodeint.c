#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head of the list.
 * @index: index of the required node.
 *
 * Return: the nth node of a dlistint_t linked list.
 *		if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;

	if (head == NULL)
		return (NULL);
	while (index > 0 && cur != NULL)
	{
		index--;
		cur = cur->next;
	}
	if (index == 0)
		return (cur);
	else
		return (NULL);
}
