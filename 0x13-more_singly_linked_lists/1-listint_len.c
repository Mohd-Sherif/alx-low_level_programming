#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the list.
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t ctr = 0;
	listint_t *l = (listint_t *) h;

	while (l != NULL)
	{
		ctr++;
		l = l->next;
	}
	return (ctr);
}
