#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head of the list.
 *
 * Return: the nth node of a dlistint_t linked list.
 *		if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;
	unsigned int ctr = 0;

	if (head == NULL)
		return (NULL);
	while (ctr != index)
	{
		ctr++;
		cur = cur->next;
	}
	return (cur);
}
