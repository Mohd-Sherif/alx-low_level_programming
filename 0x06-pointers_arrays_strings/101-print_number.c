#include "main.h"

/**
* print_number - prints an integer.
* @n: integer to be printed.
*
* Return: void
*/

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -1 * n;
	}
	if (x / 10 != 0)
		print_number(x / 10);
	_putchar('0' + (x % 10));
}
