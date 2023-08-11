#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print cominations.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	putchar('0');
	for (i = 1; i < 10; i++)
	{
		putchar(' ');
		putchar(',');
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
