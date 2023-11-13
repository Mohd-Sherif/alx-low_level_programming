#include "main.h"

/**
* _strncpy - copies a string.
* @dest: pointer to the first address of the destination string.
* @src: pointer to the first address of the source string.
* @n: length to be copied
*
* Return: pointer to char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
