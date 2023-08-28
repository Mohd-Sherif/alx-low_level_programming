#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *		of a square matrix of integers.
 * @a: pointer to integer.
 * @size: size of the array.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, d1_sum = 0, d2_sum = 0;

	for (i = 0; i < size; i++)
	{
		d1_sum += *(a + (i * size) + i);
		d2_sum += *(a + (i * size) + (size - 1 - i));
	}
	printf("%i, %i\n", d1_sum, d2_sum);
}
