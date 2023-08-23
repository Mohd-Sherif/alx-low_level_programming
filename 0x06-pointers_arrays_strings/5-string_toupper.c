#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string
*			to uppercase.
* @str: pointer to the first address of the array.
*
* Return: pointer to char
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
