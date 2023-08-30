#include "main.h"

/**
* _strlen_rec - returns the length of a string.
* @s: pointer to the first address of the string.
* @initLen: initial length.
*
* Return: length of the given string.
*/
int _strlen_rec(char *s, int initLen)
{
	if (*(s + initLen) == '\0')
		return (initLen);
	else
		return (_strlen_rec(s, initLen + 1));
}

/**
 * check_palindrome - check if palindrome.
 * @s: pointer to memory address
 * @front: first element index
 * @back: last element index
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int check_palindrome(char *s, int front, int back)
{
	if (front > back)
		return (1);
	if (*(s + front) != *(s + back))
		return (0);
	else
		return (check_palindrome(s, front + 1, back - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: memory address
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (check_palindrome(s, 0, _strlen_rec(s, 0) - 1));
}
