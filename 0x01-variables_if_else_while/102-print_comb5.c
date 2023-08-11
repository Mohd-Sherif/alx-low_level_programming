#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print cominations (four digits).
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
		for (j = i + 1; j < 100; j++)
		{
			putchar('0' + (i / 10) % 10);
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j / 10) % 10);
			putchar('0' + (j % 10));
			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
