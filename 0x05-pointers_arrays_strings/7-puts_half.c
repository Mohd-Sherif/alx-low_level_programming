#include "main.h"

/**
* puts_half - prints half of a string, followed by a new line.
* @str: pointer to the first address of the string.
*
* Return: void
*/

void puts_half(char *str)
{
	int i;

	if (_strlen(str) % 2 != 0)
		i = (_strlen(str) - 1) / 2;
	else
		i = _strlen(str) / 2;
	while (i < _strlen(str))
		_putchar(str[i++]);
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
