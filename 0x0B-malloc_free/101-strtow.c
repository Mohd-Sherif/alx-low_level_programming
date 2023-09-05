#include <stdlib.h>
#include "main.h"
/*************************** NOT CORRECT *******************************/
/**
 * wordCount - count words.
 * @str: pointer to the string
 *
 * Return: Number of words
 */
int wordCount(char *str)
{
	int i, wCtr = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ')
			continue;
		else
		{
			while (str[i] != ' ' || str[i] != '\0')
				i++;
			wCtr++;
		}
	return (wCtr);
}

/**
 * strtow - splits a string into words.
 * @str: pointer to the first address of the string.
 *
 * Return: a pointer to an array of strings (words),
 *	NULL if str == NULL or str == "",
 *	NULL if function fails
 */
char **strtow(char *str)
{
	int words, i, j, wordChar = 0, k, startOfWord;
	char **s;

	if (str == NULL)
		return (NULL);
	words = wordCount(str);
	if (words == 0)
		return (NULL);
	s = (char **) malloc(sizeof(char *) * words + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			startOfWord = i;
			while (str[i++] != ' ')
				wordChar++;
			s[j] = (char *) malloc(sizeof(char) * wordChar + 1);
			if (s[j] == NULL)
			{
				for (i = 0; i <= j ; i++)
					free(s[i]);
				free(s);
				return (NULL);
			}
			for (k = 0; k < wordChar; k++, startOfWord++)
				s[j][k] = str[startOfWord];
			s[j][k] = '\0';
			j++;
		}
	}
	return (s);
}
