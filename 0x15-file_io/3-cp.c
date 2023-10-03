#include "main.h"

/**
 * check_read - check reading from file passed.
 * @file: pointer to file name.
 *
 * Return: file descriptor value.
 */
int check_read(char *file)
{
	int file_descriptor;

	if (file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read\n");
		exit(98);
	}
	file_descriptor = open(file, O_RDONLY);
	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (file_descriptor);
}

/**
 * check_write - check writing in file passed.
 * @file: pointer to file name.
 *
 * Return: file descriptor value.
 */
int check_write(char *file)
{
	int file_descriptor;

	if (file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write\n");
		exit(99);
	}
	file_descriptor = open(file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (file_descriptor);
}

/**
 * close_file - close file.
 * @fd: file descriptor.
 *
 * Return: void
 */
void close_file(int fd)
{
	fd = close(fd);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * cp - copy file to another.
 * @file_from: pointer to file name.
 * @file_from_descriptor: file -to copy from- descriptor.
 * @file_to: pointer to file name.
 * @file_to_descriptor: file -to copy to- descriptor.
 * @buf: pointer to buffer.
 *
 * Return: void
 */
void cp(
		char *file_from, int file_from_descriptor,
		char *file_to, int file_to_descriptor,
		char *buf
	)
{
	int readLetters, writeLetters;

	do {
		readLetters = read(file_from_descriptor, buf, BUFFER_SIZE);
		if (readLetters == -1)
		{
			free(buf);
			close_file(file_from_descriptor);
			close_file(file_to_descriptor);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		writeLetters = write(file_to_descriptor, buf, readLetters);
		if (writeLetters == -1 || writeLetters != readLetters)
		{
			free(buf);
			close_file(file_from_descriptor);
			close_file(file_to_descriptor);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	} while (readLetters != EOF);
}

/**
 * main - check the code .
 *
 * @ac: Arguments counter
 * @av: Arguments array
 *
 * Description: copies the content of a file to another file.
 *
 * Return: 0 on success, 1 on error
 */
int main(int ac, char **av)
{
	int file_from_descriptor, file_to_descriptor;
	char *file_from = av[1], *file_to = av[2];
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from_descriptor = check_read(file_from);
	file_to_descriptor = check_write(file_to);
	buffer = malloc(1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	cp(
		file_from, file_from_descriptor,
		file_to, file_to_descriptor,
		buffer
	);
	free(buffer);
	close_file(file_from_descriptor);
	close_file(file_to_descriptor);
	return (0);
}
