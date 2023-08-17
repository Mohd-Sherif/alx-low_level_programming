#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: length of the line.
*
* Return: void
*/

void print_diagonal(int n)
{
	int i, ctr;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	_putchar('\\');
	for (i = 1; i < n; i++)
	{
		_putchar('\n');
		for (ctr = i; ctr > 0; ctr--)
			_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}
