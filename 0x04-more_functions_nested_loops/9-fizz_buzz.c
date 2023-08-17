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
	int i = 1;

	printf(i++);
	while (i <= 100)
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %i", i++);
}
