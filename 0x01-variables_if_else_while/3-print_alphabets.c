#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet in lower case and upper case.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar('a' + i);
	for (i = 0; i < 26; i++)
		putchar('A' + i);
	putchar('\n');
	return (0);
}
