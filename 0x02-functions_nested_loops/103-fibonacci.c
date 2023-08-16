#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the sum of the even-valued terms,
 *		followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int t1 = 1, t2 = 2;
	long int  next = t1 + t2;
	long int sum = 2;

	while (next < 4000000)
	{
		if (next % 2 == 0)
			sum += next;
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}
	printf("%li\n", sum);
	return (0);
}
