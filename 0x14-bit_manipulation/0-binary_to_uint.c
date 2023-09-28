#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: pointer to the first address of the string.
*
* Return: length of the given string.
*/
int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the value
 * @y: the power
 *
 * Return: the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}

/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: pointing to a string of 0 and 1 chars.
*
* Return: the converted number, or 0 if
* - there is one or more chars in the string b that is not 0 or 1.
* - b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len = _strlen((char *)b), i, digitValue;

	if (b == NULL)
		return (0);
	for (i = 0; i < len; i++)
	{
		digitValue = b[len - i - 1] - '0';
		if (digitValue < 0 || digitValue > 1)
			return (0);
		dec += digitValue ? _pow_recursion(2, i) : 0;
	}
	return (dec);
}
