#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar('a' + i);
	putchar('\n');
	return (0);
}
