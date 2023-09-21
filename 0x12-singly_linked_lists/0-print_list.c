#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t ctr = 0;
	list_t *l = (list_t *) h;

	while (l != NULL)
	{
		if (l->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%i] %s\n", l->len, l->str);
		ctr++;
		l = l->next;
	}
	return (ctr);
}
