#include "main.h"

/**
 * check_prime - returns 1 if the input integer is a prime number,
 *		otherwise return 0.
 * @n: the number to be checked
 * @div: number to check if divisible by it
 *
 * Return: 1 if the input integer is a prime number,
 *		otherwise return 0.
 */
int check_prime(int n, int div)
{
	if (div <= 1)
		return (1); /* Prime */
	else if (n % div == 0)
		return (0); /* Not Prime */
	else
		return (check_prime(n, div - 1)); /* Check the next number */
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 *		otherwise return 0.
 * @n: the number to be checked
 *
 * Return: 1 if the input integer is a prime number,
 *		otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_prime(n, n / 2));
}
