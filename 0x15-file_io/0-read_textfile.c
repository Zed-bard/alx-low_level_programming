#include "main.h"
#include <stdlib.h>


/**
 * read_textfile- Read Text File print to STDOUT.
 * @filename: text file being Read
 * @letters: number of letters to be Read
 * Return: w- actual Number of bytes Read and printed
 *        0 when function Fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
/*Open the file in read-only mode   */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
/*Allocate memory for the buffer to hold the read content */
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
/* Write the content of the buffer to the standard output (STDOUT) */
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
