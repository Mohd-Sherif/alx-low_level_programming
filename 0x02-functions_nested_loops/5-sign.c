#include "main.h"

/**
 * print_sign - checks for the sign.
 * @n: nummber to be checked
 *
 * Return: if n is +ve 1, zero 0, -ve -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
