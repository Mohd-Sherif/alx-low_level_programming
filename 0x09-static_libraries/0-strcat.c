#include "main.h"

/**
* _strcat - concatenates two strings.
* @dest: pointer to the first address of the destination string.
* @src: pointer to the first address of the source string.
*
* Return: pointer to char
*/

char *_strcat(char *dest, char *src)
{
	int i, destLen = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++, destLen++)
		dest[destLen] = src[i];
	dest[destLen] = '\0';
	return (dest);
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
