#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number of the table numbers
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(' ');
				if (result > 99)
				{
					_putchar('0' + ((result / 100) % 10));
					_putchar('0' + ((result / 10) % 10));
				}
				else if (result > 9)
				{
					_putchar(' ');
					_putchar('0' + ((result / 10) % 10));
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('0' + (result % 10));
			if (j == n)
				_putchar('\n');
			else
				_putchar(',');
		}
}
