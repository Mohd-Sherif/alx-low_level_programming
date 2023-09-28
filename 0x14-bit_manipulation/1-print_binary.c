#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: integer to be converted.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * CHAR_BIT - 1, flag = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (bits + 1)
	{
		if (!(n & (1UL << bits)) && flag)
		{
			bits--;
			continue;
		}
		flag = 0;
		n & (1 << bits) ? _putchar('1') : _putchar('0');
		bits--;
	}
}
