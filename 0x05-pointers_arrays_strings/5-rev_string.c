#include "main.h"

/**
* rev_string - reverses a string.
* @s: pointer to the first address of the string.
*
* Return: void
*/

void rev_string(char *s)
{
	int i = 0, j = _strlen(s) - 1;
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
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
