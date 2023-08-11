#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet in lower case except q & e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if ('a' + i == 'q' || 'a' + i == 'e')
			continue;
		putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
