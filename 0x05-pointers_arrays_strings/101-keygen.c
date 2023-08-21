#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - entry point.
*
* Description: generates random valid passwords
*		for the program 101-crackme.
*
* Return: always 0 (success)
*/

int main(void)
{
	char character;
	int sum = 0;

	srand((unsigned int)(time(NULL)));
	while (sum <= 2645)
	{
		character = rand() % 128;
		sum += character;
		printf("%c", character);
	}
	printf("%c", (2772 - sum));
	return (0);
}
