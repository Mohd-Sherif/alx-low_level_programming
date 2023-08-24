#include "main.h"

/**
* infinite_add - adds two numbers.
* @n1, @n2: two numbers.
* @r: buffer that the function will use to store the result.
* @size_r: buffer size.
*
* Return: pointer to the result.
*
* NOTE!!
*	NOT TRUE OUTPUT
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	signed int n1_len = _strlen(n1), n2_len = _strlen(n2);
	int i, buf_len, a, b, c = 0;

	if ((n1_len > size_r) || (n2_len > size_r))
		return (0);
	if (n1_len > n2_len)
		buf_len = n1_len;
	else
		buf_len = n2_len;
	r[buf_len] = '\0';
	i = buf_len;
	while (i >= 0)
	{
		i--;
		n1_len--;
		n2_len--;
		if (n1_len >= 0)
			a = n1[n1_len] - '0';
		else
			a = 0;
		if (n2_len >= 0)
			b = n2[n2_len] - '0';
		else
			b = 0;
		r[i] = ((a + b + c) % 10) + '0';
		c = ((a + b + c) / 10) + '0';
	}
	if (c == 1)
	{
		if (buf_len + 2 > size_r)
			return (0);
		r[buf_len + 1] = '\0';
		while (buf_len >= 0)
		{
			r[buf_len] = r[buf_len - 1];
			buf_len--;
		}
		r[0] = '1';
	}
	return (r);
}

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
