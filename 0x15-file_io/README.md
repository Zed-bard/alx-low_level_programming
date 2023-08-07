# C - File I/O

This repository contains C programs that demonstrate file input/output operations and usage of system calls for file handling. The programs in this repository were completed as part of the 0x15. C - File I/O project.

## Table of Contents

- [General Information](#general-information)
- [Requirements](#requirements)
- [Tasks](#tasks)
  - [Task 0: Tread lightly, she is near](#task-0-tread-lightly-she-is-near)
  - [Task 1: Under the snow](#task-1-under-the-snow)
  - [Task 2: Speak gently, she can hear](#task-2-speak-gently-she-can-hear)
  - [Task 3: cp](#task-3-cp)
  - [Task 4: elf](#task-4-elf)

## General Information

In this project, we explore various aspects of file input/output in the C programming language. We learn how to create, open, close, read, and write files using system calls and file descriptors. We also understand file permissions and how to set them while creating a new file. Additionally, we explore the difference between functions and system calls.

## Requirements

- Operating System: Ubuntu 20.04 LTS
- Compiler: gcc
- Editors: vi, vim, emacs
- Coding Style: Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- Each file should contain no more than 5 functions

## Tasks

### Task 0: Tread lightly, she is near

The first task involves writing a C function that reads a text file and prints its content to the POSIX standard output.

- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
- `filename`: The name of the text file to read.
- `letters`: The number of letters to read from the file and print.
- Return: The actual number of letters read and printed.
- If the file cannot be opened or read, return 0.
- If `filename` is NULL, return 0.
- If write fails or does not write the expected amount of bytes, return 0.

### Task 1: Under the snow

The second task involves creating a C function that creates a file.

- Prototype: `int create_file(const char *filename, char *text_content);`
- `filename`: The name of the file to create.
- `text_content`: A NULL-terminated string to write to the file.
- Return: 1 on success, -1 on failure.
- The created file must have permissions `rw-------`. If the file already exists, do not change the permissions.
- If the file already exists, truncate it.
- If `filename` is NULL, return -1.
- If `text_content` is NULL, create an empty file.

### Task 2: Speak gently, she can hear

The third task involves writing a C function that appends text at the end of a file.

- Prototype: `int append_text_to_file(const char *filename, char *text_content);`
- `filename`: The name of the file to which text is appended.
- `text_content`: A NULL-terminated string to add at the end of the file.
- Return: 1 on success and -1 on failure.
- Do not create the file if it does not exist.
- If `filename` is NULL, return -1.
- If `text_content` is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file.

### Task 3: cp

The fourth task involves writing a C program that copies the content of one file to another file.

- Usage: `cp file_from file_to`
- If the number of arguments is not correct, exit with code 97 and print "Usage: cp file_from file_to", followed by a new line, on the POSIX standard error.
- If `file_to` already exists, truncate it.
- If `file_from` does not exist, or if you cannot read it, exit with code 98 and print "Error: Can't read from file NAME_OF_THE_FILE", followed by a new line, on the POSIX standard error.
- If you cannot create or if write to `file_to` fails, exit with code 99 and print "Error: Can't write to NAME_OF_THE_FILE", followed by a new line, on the POSIX standard error.
- If you cannot close a file descriptor, exit with code 100 and print "Error: Can't close fd FD_VALUE", followed by a new line, on the POSIX standard error.
- The permissions of the created file should be `rw-rw-r--`. If the file already exists, do not change the permissions.
- You must read 1,024 bytes at a time from `file_from` to make fewer system calls. Use a buffer.
- You are allowed to use `dprintf`.

### Task 4: elf (Advanced)

The fifth task is an advanced task, which involves writing a program that displays the information contained in the ELF header at the start of an ELF file.

- Usage: `elf_header elf_filename`
- Displayed information: Magic, Class, Data, Version, OS/ABI, ABI Version, Type, Entry point address.
- The format should be the same as `readelf -h (version 2.26.1)`.
- If the file is not an ELF file or if an error occurs, exit with status code 98 and display a comprehensive error message to stderr.
- You are allowed to use `lseek` once.
- You are allowed to use `read` a maximum of 2 times at runtime.
- You are allowed to have as many functions as you want in your source file.
- You are allowed to use `printf`.
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden.
- Allowed syscalls: `read`, `write`, `open`, `close`.
- You are allowed to use `_putchar`.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`.

**Note:** Do not push the `_putchar.c` file as it won't be taken into account. The header files should be include guarded.

## Conclusion

In this project, we learn the essentials of file I/O, system calls, and permissions in C programming. By completing the tasks, we gain practical knowledge of handling files and working with ELF headers in an advanced task. The programs and functions in this repository adhere to the specified requirements and are tested on Ubuntu 20.04 LTS using gcc.
