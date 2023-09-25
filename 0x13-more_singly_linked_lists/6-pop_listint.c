#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *				and returns the head node’s data (n).
 * @head: pointer to the pointer of the list.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int data = 0;

	if (*head != NULL)
	{
		tmp = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (data);
}
