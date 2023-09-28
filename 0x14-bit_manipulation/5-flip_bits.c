#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *		to get from one number to another.
 * @n: integer to be converted.
 * @m: integer to be converted to.
 *
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = sizeof(n) * CHAR_BIT - 1, ctr = 0;

	while (bits + 1)
	{
		if ((n & (1UL << bits)) ^ (m & (1UL << bits)))
			ctr++;
		bits--;
	}
	return (ctr);
}
