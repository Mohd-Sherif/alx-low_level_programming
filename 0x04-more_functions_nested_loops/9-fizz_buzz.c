#include <stdio.h>

/**
* main - entry point.
*
* Description: Fizz-Buzz test
*
* Return: always 0 (Success)
*/

int main(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %i", i);
	printf("\n");
	return (0);
}
