#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array.
 * @size: size of every element in the memory.
 *
 * Return: a pointer to the allocated memory.
 *	If nmemb or size is 0, then _calloc returns NULL.
 *	If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
