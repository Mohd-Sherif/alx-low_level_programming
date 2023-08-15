#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: character to be checked
 *
 * Return: if c is lowercase 1 otherwise 0.
 */
int _islower(int c)
{
	int i;

	for (i = 0; i < 26; i++)
		if (c == ('A' + i))
			return (1);
	return (0);
}
