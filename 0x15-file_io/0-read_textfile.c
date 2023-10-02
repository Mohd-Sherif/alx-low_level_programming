#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 *			standard output.
 * @filename: file name.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 *	if the file can not be opened or read, return 0.
 *	if filename is NULL return 0.
 *	if write fails or does not write the expected amount of bytes,
 *	return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	ssize_t readLetters, writeLetters;
	char *buffer = malloc(sizeof(size_t) * letters + 1);

	if (buffer == NULL)
		return (0);
	if (filename == NULL)
	{
		free(buffer);
		return (0);
	}
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
	{
		free(buffer);
		if (close(fileDescriptor) == -1)
			exit(1);
		return (0);
	}
	readLetters = read(fileDescriptor, buffer, letters);
	if (readLetters == -1)
	{
		free(buffer);
		if (close(fileDescriptor) == -1)
			exit(1);
		return (0);
	}
	writeLetters = write(STDOUT_FILENO, buffer, readLetters);
	if (writeLetters == -1 || readLetters != writeLetters)
	{
		free(buffer);
		if (close(fileDescriptor) == -1)
			exit(1);
		return (0);
	}
	free(buffer);
	if (close(fileDescriptor) == -1)
		exit(1);
	return (readLetters);
}
