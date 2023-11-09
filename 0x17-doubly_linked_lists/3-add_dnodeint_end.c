#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list.
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t)), *cur;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (head == NULL || *head == NULL)
	{
		new->prev = NULL;
		new->next = *head;
		*head = new;
		return (*head);
	}
	cur = *head;
	while (cur->next)
		cur = cur->next;
	new->prev = cur;
	new->next = NULL;
	cur->next = new;
	return (new);
}
