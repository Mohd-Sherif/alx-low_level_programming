#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the address of memory
 * @accept: address of the characters to be searched for
 *
 * Return: the number of bytes in the initial segment
 *	of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ctr = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				ctr++;
				break;
			}
		if (accept[j] == '\0')
			break;
	}
	return (ctr);
}
