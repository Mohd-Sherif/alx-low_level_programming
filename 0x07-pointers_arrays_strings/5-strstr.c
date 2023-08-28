#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the address of memory
 * @needle: address of the substring to be searched for
 *
 * Return: a pointer to the beginning of the located substring,
 *		or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		j = 0;
	}
	return ('\0');
}
