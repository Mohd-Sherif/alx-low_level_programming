#include "main.h"

/**
* cap_string - capitalizes all words of a string.
* @str: pointer to the first address of the array.
*
* Return: pointer to char
*/

char *cap_string(char *str)
{
	int i, j;
	char separator[] = {
		' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(',
		')', '{', '}'
	};

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	for (i = 1; str[i] != '\0'; i++)
		for (j = 0; separator[j] != '\0'; j++)
			if (str[i] == separator[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[++i] -= 32;
				break;
			}
	return (str);
}
