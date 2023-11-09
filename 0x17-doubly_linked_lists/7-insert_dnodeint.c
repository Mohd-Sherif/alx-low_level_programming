#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @h: pointer to the head of the list.
 * @idx: index to be inserted at.
 * @n: integer.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h;
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (h == NULL || *h == NULL)
	{
		free(new);
		if (idx != 0)
			return (NULL);
		return (add_dnodeint(h, n));
	}
	new->n = n;
	while (cur && idx > 0)
	{
		idx--;
		cur = cur->next;
	}
	if (idx != 0)
		return (NULL);
	new->prev = cur->prev;
	new->next = cur;
	cur->prev->next = new;
	cur->prev = new;
	return (new);
}
