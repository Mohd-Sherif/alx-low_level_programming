#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: start value of the array.
 * @max: end value of the array.
 *
 * Return: the pointer to the newly created array.
 *	If min > max, return NULL.
 *	If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = (int *) malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	ptr[i] = '\0';
	return (ptr);
}
