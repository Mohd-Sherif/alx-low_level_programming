#include "3-calc.h"

/**
 * main - Entry point
 * @argc: arguments count.
 * @argv: arguments vector.
 *
 * Return: 0 (Success), Error with status 98.
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("%i\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
