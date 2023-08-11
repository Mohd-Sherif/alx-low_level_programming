#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print cominations (two digits).
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j <= i)
				continue;
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
