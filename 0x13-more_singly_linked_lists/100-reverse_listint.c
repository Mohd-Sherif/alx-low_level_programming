#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer to the list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL, *old = *head;

	if (head == NULL || *head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		*head = (*head)->next;
		old->next = tmp;
		tmp = old;
		old = *head;
	}
	*head = tmp;
	return (*head);
}
