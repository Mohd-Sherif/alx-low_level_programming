#include "main.h"

/**
* puts2 - prints every other character of a string,
*	starting with the first character, followed by a new line.
* @str: pointer to the first address of the string.
*
* Return: void
*/

void puts2(char *str)
{
	int i;

	for (i = 0 ; i < _strlen(str); i += 2)
		_putchar(str[i]);
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
