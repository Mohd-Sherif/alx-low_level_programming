#include "main.h"

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
	int file_from_descriptor, file_to_descriptor,
		close_file_from, close_file_to;
	char *file_from = av[1], *file_to = av[2];
	char *buffer;
	int readLetters, writeLetters;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	file_from_descriptor = open(file_from, O_RDONLY);
	if (file_from_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	file_to_descriptor = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if(file_to_descriptor == -1)
	{
		close_file_from = close(file_from_descriptor);
		if (close_file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close_file_from);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
	{
		close_file_from = close(file_from_descriptor);
		close_file_to = close(file_to_descriptor);
		if (close_file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close_file_from);
			exit(100);
		}
		if (close_file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close_file_to);
			exit(100);
		}
		return (1);
	}
	do
	{
		readLetters = read(file_from_descriptor, buffer, 1024);
		if (readLetters == -1)
		{
			close_file_from = close(file_from_descriptor);
			close_file_to = close(file_to_descriptor);
			if (close_file_from == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close_file_from);
				exit(100);
			}
			if (close_file_to == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close_file_to);
				exit(100);
			}
			dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
			exit(98);
		}
		writeLetters = write(file_to_descriptor, buffer, readLetters);
		if (writeLetters == -1)
		{
			close_file_from = close(file_from_descriptor);
			close_file_to = close(file_to_descriptor);
			if (close_file_from == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close_file_from);
				exit(100);
			}
			if (close_file_to == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close_file_to);
				exit(100);
			}
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}
	} while (file_from_descriptor != EOF);
	close_file_from = close(file_from_descriptor);
	close_file_to = close(file_to_descriptor);
	if (close_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close_file_from);
		exit(100);
	}
	if (close_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close_file_to);
		exit(100);
	}
	return (0);
}
