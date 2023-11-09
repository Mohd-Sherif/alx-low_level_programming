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

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
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
		return (NULL);
	}
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	if (idx == (unsigned int)dlistint_len((const dlistint_t *)*h))
	{
		free(new);
		return (add_dnodeint_end(h, n));
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
