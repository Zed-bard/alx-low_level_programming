#include "main.h"

/**
 * append_text_to_file - Appends txt at the End of A File.
 * @filename: A ptr to The name of the File.
 * @text_content: The strg to add to the end of the file.
 *
 * Return: If the Function fails or filename is NULL - -1.
 *         If the File does NOT exist or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int z, w, len = 0;

	/* Check if the filename is NULL, return -1 if it is */
	if (filename == NULL)
		return (-1);

	/* Calculate the length of the text_content (if it's not NULL) */
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
		{
			/* Empty loop body; incrementing 'len' */
		}
	}

	/* Open the file for writing and append mode */
	z = open(filename, O_WRONLY | O_APPEND);

	/* Check if file open operation fails, return -1 if it does */
	if (z == -1)
		return (-1);

	/* Write the text_content to the end of the file */
	w = write(z, text_content, len);

	/* Check if write operation fails, return -1 if it does */
	if (w == -1)
	{
		close(z);
		return (-1);
	}

	close(z);

	return (1);
}

