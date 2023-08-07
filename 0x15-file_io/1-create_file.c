#include "main.h"


/**
 * create_file - Creates  File.
 * @filename: A pointer to The name of the File to create.
 * @text_content: A pointer to a string to Write to The File.
 *
 * Return: if success
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
/* Open the file with create, read, write, and truncate flags, */

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len); /* Write the text_content to the file */

	if (fd == -1 || w == -1)
		return (-1);

	close(fd); /* Close the file descriptor */

	return (1);
}

