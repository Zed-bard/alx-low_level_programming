#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>  /* for ssize_t */
#include <sys/stat.h>   /* for mode_t */
#include <fcntl.h>      /* for file-related functions */
#include <unistd.h>     /* for POSIX functions */

/**
 * read_textfile - Reads a text file and prints its content to standard output.
 * @filename: The name of the text file.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - Creates a new file with the
 * specified name and writes content to it.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
