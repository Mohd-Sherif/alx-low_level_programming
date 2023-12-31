#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer to be converted.
 * @index: the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of the bit at index index
 *			or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * CHAR_BIT))
		return (-1);
	return (n & (1UL << index) ? 1 : 0);
}
