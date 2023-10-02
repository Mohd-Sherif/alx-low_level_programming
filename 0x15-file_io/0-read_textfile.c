#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 *                      standard output.
 * @filename: file name.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 *      if the file can not be opened or read, return 0.
 *      if filename is NULL return 0.
 *      if write fails or does not write the expected amount of bytes,
 *      return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	ssize_t readLetters, writeLetters;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	fileDescriptor = open(filename, O_RDONLY);
	readLetters = read(fileDescriptor, buffer, letters);
	writeLetters = write(STDOUT_FILENO, buffer, readLetters);
	free(buffer);
	if (close(fileDescriptor) == -1)
		exit(1);
	if (
		fileDescriptor == -1 ||
		readLetters == -1 ||
		writeLetters == -1 ||
		readLetters != writeLetters
	)
		return (0);
	return (readLetters);
}
