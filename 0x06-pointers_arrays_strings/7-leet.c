#include "main.h"

/**
* leet - encodes a string into 1337.
* @str: pointer to the first address of the array.
*
* Return: pointer to char
*/

char *leet(char *str)
{
	int i, j;
	char letter[] = {
		'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'
	};
	char number[] = {
		'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'
	};

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; letter[j] != '\0'; j++)
			if (str[i] == letter[j])
			{
				str[i] = number[j];
				break;
			}
	return (str);
}
