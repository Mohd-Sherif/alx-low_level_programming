#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer to be converted.
 * @index: the index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if ((n == NULL) || (index > (sizeof(n) * CHAR_BIT)))
		return (-1);
	*n |= (1UL << index);
	return (1);
}
