#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _puts - prints a string, followed by a new line, to stdout.
* @str: pointer to the first address of the string.
*
* Return: void
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Description: prints the name of the file it was compiled from,
 *		followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_puts(__FILE__);
	return (0);
}
