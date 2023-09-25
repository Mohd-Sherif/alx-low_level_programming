#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to pointer to the list.
 * @n: value to be inserted to the new node.
 *
 * Return: the address of the new element,
 *			or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

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

	if (old == NULL || head == NULL)
		return (NULL);
	else if (idx == 0)
		return (add_nodeint(head, n));
	while (old != NULL && ctr < idx - 1)
	{
		old = old->next;
		ctr++;
	}
	if (old == NULL)
		return (NULL);
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = old->next;
	old->next = new;
	new->next = tmp;
	return (new);
}
