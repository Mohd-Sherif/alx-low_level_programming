#include "search_algos.h"

/**
 * print_array - prints the values remaining in the array.
 * @array: a pointer to the first element of the array to search in.
 * @left: left index of the array.
 * @right: right index of the array.
 *
 * Return: void
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array
 *			of integers using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	int index = -1;
	size_t left = 0, right = size - 1, mid;

	if (array && size != 0)
		while (left <= right)
		{
			print_array(array, left, right);
			mid = left + (right - left) / 2;
			if (array[mid] == value)
			{
				index = mid;
				break;
			}
			else if (array[mid] < value)
				left = mid + 1;
			else
				right = mid - 1;
		}
	return (index);
}
