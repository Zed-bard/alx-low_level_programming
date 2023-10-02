#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text from a file and print it to STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters (bytes) to be read and printed.
 * Return: The actual number of bytes read and printed (w).
 *         0 when the function fails or if the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf; /*Buffer for storing read content */
	ssize_t fd; /*File descriptor */
	ssize_t w; /*Number of bytes written to STDOUT */
	ssize_t t; /*Number of bytes read from the file */
/*Open the file for reading */

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
/*Write the read content to STDOUT */
	w = write(STDOUT_FILENO, buf, t);

/*Free the allocated memory and close the file */
	free(buf);
	close(fd);
	return (w);
}

