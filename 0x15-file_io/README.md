# 0x15. C - File I/O
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
## Overview
This repository contains the source code for a C programming project focused on file I/O operations. The project's main goal is to familiarize you with file descriptors and various file-related system calls in the Unix-like environment. By the end of this project, you should be comfortable with creating, opening, closing, reading, and writing files, as well as understanding file descriptors, file permissions, and system calls.
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

1. `open`: In the context of file operations, "open" refers to the action of creating or accessing a file or resource for reading, writing, or other operations. It's typically the first step when working with files. The open operation may include specifying the file's path, mode (e.g., read, write, append), and other relevant parameters.

2. `close`: After you've finished working with a file or resource, it's important to "close" it. Closing a file ensures that any changes are saved, and the file is released, allowing other processes or programs to access it. It's good practice to close files when you're done with them to prevent resource leaks.

3. `read`: "Read" refers to the action of reading data from a file or resource into memory. When you read a file, you typically specify the file you want to read from and how much data you want to read. The data can be stored in variables, buffers, or data structures in your program for further processing.

4. `write`: "Write" is the opposite of reading. It involves writing data from your program into a file or resource. You specify the destination file, the data to be written, and the mode (e.g., overwrite the file, append to the file).

5. `dprintf`: `dprintf` is not a standard file operation function but appears to be a function or method name. The "dprintf" function could be specific to a particular programming library, framework, or application. It may be used for formatted output, similar to the `printf` function in the C programming language, but with some differences or custom behavior. The exact functionality and usage of `dprintf` would depend on the context in which it's used.

