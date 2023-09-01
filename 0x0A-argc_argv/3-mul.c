#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Description: multiplies two numbers.
 *
 * Return: 0 (Success) OR 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
