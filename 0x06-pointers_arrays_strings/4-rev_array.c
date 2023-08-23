#include "main.h"

/**
* reverse_array - reverses the content of an array of integers.
* @a: pointer to the first address of the array.
* @n: the number of elements of the array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
	}
}
