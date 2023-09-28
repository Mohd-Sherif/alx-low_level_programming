#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the list.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t ctr = 0;
	listint_t *l = (listint_t *) h;

	while (l != NULL)
	{
		printf("%i\n", l->n);
		ctr++;
		l = l->next;
	}
	return (ctr);
}