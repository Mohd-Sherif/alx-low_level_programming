#include "main.h"

/**
 * _sqrt_rec - calculates the sqrt.
 * @n: the number to calculate sqrt for
 * @result: the number to check by it
 *
 * Return: the natural sqrt.
 */
int _sqrt_rec(int n, int result)
{
	if (result * result > n)
		return (-1);
	else if (result * result == n)
		return (result);
	else
		return (_sqrt_rec(n, result + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to calculate sqrt for
 *
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_rec(n, 2));
}
