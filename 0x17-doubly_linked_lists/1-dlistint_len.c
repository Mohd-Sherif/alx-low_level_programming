#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of the list.
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *cur = (dlistint_t *)h;
	size_t ctr = 0;

	while (cur)
	{
		ctr++;
		cur = cur->next;
	}
	return (ctr);
}
