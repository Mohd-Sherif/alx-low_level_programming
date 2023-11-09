#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 *		of a dlistint_t linked list.
 * @head: head of the list.
 *
 * Return: sum of all the data (n).
 *		if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	int sum = 0;

	while (cur)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
