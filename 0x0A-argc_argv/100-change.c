#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Description: prints the minimum number of coins
 *		to make change for an amount of money.
 *
 * Return: 0 (Success) OR 1 (Error)
 */
int main(int argc, char *argv[])
{
	int _25 = 0, _10 = 0, _5 = 0, _2 = 0, _1 = 0, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		while (change - 25 >= 0)
		{
			change -= 25;
			_25++;
		}
		while (change - 10 >= 0)
		{
			change -= 10;
			_10++;
		}
		while (change - 5 >= 0)
		{
			change -= 5;
			_5++;
		}
		while (change - 2 >= 0)
		{
			change -= 2;
			_2++;
		}
		while (change - 1 >= 0)
		{
			change -= 1;
			_1++;
		}
		printf("%i\n", _25 + _10 + _5 + _2 + _1);
		return (0);
	}
}
