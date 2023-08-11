#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in reverse order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar('z' - i);
	putchar('\n');
	return (0);
}
