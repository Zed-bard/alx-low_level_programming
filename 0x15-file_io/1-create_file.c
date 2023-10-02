#include "main.h"

/**
 * create_file - Creates A file.
 * @filename: A pointer to The name of the file to Create.
 * @text_content: A pointer to a string to write to the File.
 *
 * Return: If The fun. Fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);
/*Check if file open or write operation fails, return -1 if it does */
	if (fd == -1 || w == -1)
	return (-1);

	close(fd);

	return (1);
}

