#include "3-calc.h"

/**
 * op_add - add two integers.
 * @a: first int.
 * @b: second int.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers.
 * @a: first int.
 * @b: second int.
 *
 * Return: subtraction of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers.
 * @a: first int.
 * @b: second int.
 *
 * Return: multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers.
 * @a: first int.
 * @b: second int.
 *
 * Return: division of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of the division of two integers.
 * @a: first int.
 * @b: second int.
 *
 * Return: remainder of the division of a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
