#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: character to be checked
 *
 * Return: if c is letter 1 otherwise 0.
 */
int _isalpha(int c)
{
	if (_isupper(c) || _islower(c))
		return (1);
	return (0);
}
