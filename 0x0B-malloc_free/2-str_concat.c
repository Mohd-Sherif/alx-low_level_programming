#include <stdlib.h>
#include "main.h"

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
	int len1 = 0, len2 = 0, i;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 != NULL && s2 == NULL)
		return (s1);
	else if (s1 == NULL && s2 != NULL)
		return (s2);
	/* length calcultion */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[len1 + i] = s2[i];
	return (s);
}
