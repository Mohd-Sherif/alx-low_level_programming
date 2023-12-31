#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(' ');
				if (result > 9)
					_putchar('0' + ((result / 10) % 10));
				else
					_putchar(' ');
			}
			_putchar('0' + (result % 10));
			if (j == 9)
				_putchar('\n');
			else
				_putchar(',');
		}
}
