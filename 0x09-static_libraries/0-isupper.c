#include "main.h"

/**
* _isupper - checks for uppercase character.
* @c: character to be checked.
*
* Return: 1 if c is uppercase, 0 otherwise.
*/

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
		if (c == i)
			return (1);
	return (0);
}
