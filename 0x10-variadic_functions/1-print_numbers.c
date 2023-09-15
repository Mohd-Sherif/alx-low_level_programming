#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - prints numbers, followed by a new line.
* @separator: the string to be printed between numbers.
* @n: the number of integers passed to the function.
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0 || separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
		printf("%i%s", va_arg(ap, int), separator);
	printf("%i\n", va_arg(ap, int));
	va_end(ap);
}
