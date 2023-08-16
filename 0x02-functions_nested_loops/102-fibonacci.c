#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers,
 *		starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int t1 = 1, t2 = 2;
	long int  next = t1 + t2;
	int ctr = 0;

	printf("%li, %li, ", t1, t2);
	while (ctr < 46)
	{
		printf("%li, ", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
		ctr++;
	}
	printf("%li\n", next);
	return (0);
}
