#include <stdlib.h>
#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: pointer to the first address of the string.
*
* Return: length of the given string.
*/
int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int argslen = 0, i, j, slen = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, argslen++)
		argslen += _strlen(av[i]);
	s = (char *) malloc(sizeof(char) * argslen + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, slen++) /* slen++ for \n */
	{
		for (j = 0; av[i][j] != '\0'; j++, slen++)
			s[slen] = av[i][j];
		s[slen] = '\n';
	}
	s[slen] = '\0';
	return (s);
}
