#include "lists.h"
#include<string.h>

/**
* _strlen - returns the length of a string.
* @s: pointer to the first address of the string.
*
* Return: length of the given string.
*/

int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the pointer of the list.
 * @str: the string to be duplicated to the new list.
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->len = _strlen((char *)str);
	new->str = strdup((char *)str);
	new->next = *head;
	*head = new;
	return (*head);
}
