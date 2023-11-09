#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of the list.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *cur = (dlistint_t *)h;
	size_t ctr = 0;

	if (cur == NULL)
		return (0);
	while (cur)
	{
		printf("%i\n", cur->n);
		ctr++;
		cur = cur->next;
	}
	return (ctr);
}
