#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the pointer of the list.
 * @index: order of the required node.
 *
 * Return: pointer to the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ctr = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL && ctr < index)
	{
		head = head->next;
		ctr++;
	}
	return (head);
}
