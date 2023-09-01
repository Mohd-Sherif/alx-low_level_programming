#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Description: prints the number of arguments passed into it.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
