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
 * create_file - creates a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 *(file can not be created, file can not be written, write “fails”, etc…)
 *      if filename is NULL return -1.
 *      if text_content is NULL create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fileDescriptor, writeLetters;
	int textLength = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	fileDescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fileDescriptor == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	writeLetters = write(fileDescriptor, text_content, textLength);
	close(fileDescriptor);
	if (writeLetters == -1 || writeLetters != textLength)
		return (-1);
	return (1);
}
