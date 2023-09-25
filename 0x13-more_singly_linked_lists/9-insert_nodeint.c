#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to the list.
 * @idx: order of the node.
 * @n: data to be inserted.
 *
 * Return:  the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp, *old = *head;
	unsigned int ctr = 0;

	while (old != NULL && ctr < idx - 1)
	{
		old = old->next;
		ctr++;
	}
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = old->next;
	old->next = new;
	new->next = tmp;
	return (new);
}
