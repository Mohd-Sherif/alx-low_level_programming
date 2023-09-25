#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @h: pointer to the list.
 * @n: integer to be inserted in the list.
 *
 * Return: the address of the new element,
 *			or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current = *head;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (current == NULL)
	{
		*head = new;
		return (*head);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (new);
}
