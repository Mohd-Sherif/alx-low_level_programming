#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print hexadecimal numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		if (i > 9)
			putchar('a' + (i % 10));
		else
			putchar('0' + i);
	putchar('\n');
	return (0);
}
