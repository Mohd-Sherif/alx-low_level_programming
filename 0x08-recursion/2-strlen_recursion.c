#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the address of memory
 *
 * Return: length of the string passed.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
