#ifndef MAIN_HEADER
#define MAIN_HEADER

/*Include necessary header files for file operations */
#include <sys/types.h> /*file operations, processes, and sockets */
#include <sys/stat.h> /* defines data structures  */
#include <fcntl.h> /*File Control Header */
#include <unistd.h>/*POSIX */


/* Function prototype */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /*MAIN_HEADER */

