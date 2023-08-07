#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, w;

	if (filename == NULL)
		return (-1);

	/* Count the length of text_content if it's not NULL */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	/* Open the file in append mode (O_APPEND) */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* Write the text_content to the end of the file */
	w = write(fd, text_content, len);
	close(fd);

	/* Check for write errors and return 1 on success */
	return (w == len ? 1 : -1);
}
