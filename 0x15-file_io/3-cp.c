#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* Function prototye */

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for  buffer.
 * @file: The name of the file buffer is Storing chars for.
 *
 * Return: A pointer to the Newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
	exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file Descriptors.
 * @fd: The file descriptor to be Closed.
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - COPY the contents of a file to another file.
 * @argc: The value of arguments supplied to the program.
 * @argv: An array of pointers to The arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is invalid - exit code 97.
 * If file_from does not exist  - exit code 98.
 * If file_to cannot be created - exit code 99.
 * If file_to or _from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, y, z;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	y = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		z = write(to, buffer, y);
		if (to == -1 || z == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		y = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (y > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

