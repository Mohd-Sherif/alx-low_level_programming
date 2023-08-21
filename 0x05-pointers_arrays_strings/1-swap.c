#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: pointer to the first number.
* @b: pointer to the second number.
*
* Return: void.
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
