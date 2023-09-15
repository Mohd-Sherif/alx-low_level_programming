#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - prints strings, followed by a new line.
* @separator: the string to be printed between numbers.
* @n: the number of integers passed to the function.
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL)
			printf("%s", separator);
	}
	str = va_arg(ap, char *);
	if (str != NULL)
		printf("%s\n", str);
	else
		printf("(nil)\n");
	va_end(ap);
}
