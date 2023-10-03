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
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 *      if filename is NULL return -1.
 *      1 if the file exists and -1 if the file does not exist
 *	or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor, writeLetters;
	int textLength;

	if (filename == NULL)
		return (-1);
	fileDescriptor = open(filename, O_WRONLY | O_APPEND);
	if (fileDescriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		textLength = _strlen(text_content);
		writeLetters = write(fileDescriptor, text_content, textLength);
		if (writeLetters == -1 || writeLetters != textLength)
			return (-1);
	}
	close(fileDescriptor);
	return (1);
}
