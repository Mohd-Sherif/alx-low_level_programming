#include "main.h"

/**
* print_number - prints an integer.
* @n: integer to be printed.
*
* note!: checker gives code error.
*
* Return: void
*/

void print_number(int n)
{
	unsigned int local_n;

	if (n < 0)
	{
		local_n = -1 * n;
		_putchar('-');
	}
	else
		local_n = n;
	if ((local_n / 10) != 0)
		print_number(local_n / 10);
	_putchar('0' + (local_n % 10));
}
