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
 * string_nconcat - concatenates two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * @n: number of bytes to be added from string 2 to string 1.
 *
 * Return: a pointer points to a newly allocated space in memory,
 *	which contains s1, followed by the first n bytes of s2,
 *	and null terminated.
 *	If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int s1_len = _strlen(s1), s2_len = _strlen(s2);
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= s2_len)
		n = s2_len;
	s = (char *) malloc(sizeof(char) * (s1_len + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[s1_len + i] = s2[i];
	s[s1_len + i] = '\0';
	return (s);
}
