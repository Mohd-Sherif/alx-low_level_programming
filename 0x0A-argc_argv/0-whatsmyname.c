#include <stdio.h>

/*
 * main - main entry.
 * @argc: arguments count.
 * @argv: arguments vector.
 *
 * Description: prints its name, followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
