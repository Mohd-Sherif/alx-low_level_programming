#include <stdio.h>

/**
* main - entry point.
*
* Description: finds and prints the largest prime factor
*		of the number 612852475143, followed by a new line.
*
* Return: always 0 (success)
*/

int main(void)
{
	long int n = 612852475143, largestPrime = 2;
	int i;

	while (n % 2 == 0)
		n /= 2;
	for (i = 3; i < (n / 2); i += 2)
		while (n % i == 0)
		{
			n /= i;
			largestPrime = i;
		}
	if (n > 2)
		largestPrime = n;
	printf("%li\n", largestPrime);
	return (0);
}
