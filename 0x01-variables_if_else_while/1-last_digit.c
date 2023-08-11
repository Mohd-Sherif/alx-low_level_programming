#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: check if the last number
 *		is greater than 5, 0, or
 *		less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastNum = n % 10;
	printf("Last digit of ");
	printf("%d", n);
	printf(" is ");
	printf("%d", lastNum);
	if (lastNum == 0)
		printf(" and is 0\n");
	else if (lastNum > 5)
		printf(" and is greater than 5\n");
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}
