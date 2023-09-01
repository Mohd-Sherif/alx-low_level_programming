#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: the address of memory of the destination array
 * @src: the address of memory of the source array
 * @n: the size of the memory to print
 *
 * Return: pointer to char (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
