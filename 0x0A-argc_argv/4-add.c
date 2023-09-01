#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Description: adds positive numbers.
 *
 * Return: 0 (Success) OR 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *a;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			a = argv[i];
			for (j = 0; a[j] != '\0'; j++)
				if (!isdigit(a[j]))
				{
					printf("Error\n");
					return (1);
				}
			sum += atoi(argv[i]);
		}
		printf("%i\n", sum);
		return (0);
	}
}
