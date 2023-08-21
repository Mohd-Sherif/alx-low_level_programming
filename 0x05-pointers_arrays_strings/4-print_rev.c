#include "main.h"

/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: pointer to the first address of the string.
*
* Return: void
*/

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1 ; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

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
