#include "main.h"

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
