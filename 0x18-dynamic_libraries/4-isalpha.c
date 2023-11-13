#include "main.h"

int _isupper(int c);
int _islower(int c);

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

/**
 * _isupper - checks if c is uppercase alphabetic character.
 * @c: character to be checked
 *
 * Return: if c is uppercase 1 otherwise 0.
 */
int _isupper(int c)
{
	int i;

	for (i = 0; i < 26; i++)
		if (c == ('A' + i))
			return (1);
	return (0);
}

/**
 * _islower - checks if c is lowercase alphabetic character.
 * @c: character to be checked
 *
 * Return: if c is lowercase 1 otherwise 0.
 */
int _islower(int c)
{
	int i;

	for (i = 0; i < 26; i++)
		if (c == ('a' + i))
			return (1);
	return (0);
}
