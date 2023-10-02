# 0x15. C - File I/O

## Overview
This repository contains the source code for a C programming project focused on file I/O operations. The project's main goal is to familiarize you with file descriptors and various file-related system calls in the Unix-like environment. By the end of this project, you should be comfortable with creating, opening, closing, reading, and writing files, as well as understanding file descriptors, file permissions, and system calls.

## Learning Objectives
By completing this project, you will achieve the following learning objectives:
- Learn to search for relevant information online.
- Understand how to create, open, close, read, and write files.
- Familiarize yourself with file descriptors.
- Identify the three standard file descriptors, their purposes, and their POSIX names.
- Master the usage of I/O system calls such as open, close, read, and write.
- Learn about and utilize the flags O_RDONLY, O_WRONLY, O_RDWR.
- Understand file permissions and how to set them when creating a file using the open system call.
- Gain knowledge about system calls and differentiate between functions and system calls.

## Requirements
### General
- Allowed Editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using `gcc` with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Ensure all your files end with a new line.
- Mandatory `README.md` file at the root of the project folder.
- Code should follow the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`.
- Prohibited use of global variables.
- Limit of 5 functions per file.
- Only allowed C standard library functions are `malloc`, `free`, and `exit`. Other functions like `printf`, `puts`, `calloc`, and `realloc` are not permitted.
- Allowed syscalls: `read`, `write`, `open`, `close`.
- You can use `_putchar`, but you don't need to push `_putchar.c`.
- Example `main.c` files are provided for testing purposes, but you are not required to push them to your repository.

### Header File
- Prototypes of all your functions and the prototype of the function `_putchar` should be included in a header file named `main.h`.
- Use include guards for all your header files.

### Tip
Always prefer using symbolic constants (POSIX) versus numbers when applicable, e.g., `read(STDIN_FILENO, ...` instead of `read(0, ...`.

## Resources
### Read or Watch
- File descriptors
- [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=Fz6xvdX__Ko)

### Man or Help
- `open`
- `close`
- `read`
- `write`
- `dprintf`
