#include "main.h"

/**
 * print_last_digit - prints the last digit.
 * @n: number to be cut.
 *
 * Return: last digit of n.
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs(n % 10);
	_putchar('0' + lastDigit);
	return (lastDigit);
}

/**
 * _abs - removes the -ve sign.
 * @n: nummber to be +ve.
 *
 * Return: +ve version of n.
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
