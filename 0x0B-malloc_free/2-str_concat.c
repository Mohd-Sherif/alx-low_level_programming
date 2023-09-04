#include <stdlib.h>
#include "main.h"

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

/**
 * _strdup - returns a pointer to a newly allocated space in
 *              memory, which contains a copy of the string
 *              given as a parameter.
 * @str: pointer to the string.
 *
 * Return: NULL if str = NULL
 *       On success, the _strdup function a pointer to
 *       the duplicated string.
 *       NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int length = 0, i;
	char *copy_str;

	if (str == NULL)
		return (NULL);
	/* string length calculation */
	while (str[length] != '\0')
		length++;
	copy_str = malloc(sizeof(char) * length + 1);
	if (copy_str == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		copy_str[i] = str[i];
	return (copy_str);
}

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 *
 * Return: pointer point to a newly allocated space in memory
 *	which contains the contents of s1, followed by
 *	the contents of s2, and null terminated.
 *	NULL on failure or empty string.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = _strlen(s1), len2 = _strlen(s2), i;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 != NULL && s2 == NULL)
		return (_strdup(s1));
	else if (s1 == NULL && s2 != NULL)
		return (_strdup(s2));
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[len1 + i] = s2[i];
	return (s);
}
