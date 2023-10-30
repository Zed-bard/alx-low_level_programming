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
Certainly, here's a brief description of each of the actions you mentioned and whether they typically relate to manual (Man) or help/documentation (Help) aspects:

1. `open` (Help):
   - This action often refers to opening files, directories, or other resources in a computer context. You might find documentation or help on how to use the `open` command or function in your operating system or programming language.

2. `close` (Help):
   - The `close` action typically involves closing files, connections, or other resources. Documentation or help resources can provide guidance on how to correctly use the `close` operation in different contexts, such as file handling or network connections.

3. `read` (Help):
   - The `read` action is commonly used to retrieve data from files, input streams, or other sources. Documentation or help materials can explain how to perform the `read` operation effectively, including usage and potential options.

4. `write` (Help):
   - The `write` action often involves writing data to files, output streams, or other destinations. You can typically find documentation or help guides on how to use the `write` operation correctly and efficiently.

5. `dprintf` (Help):
    `dprintf` is a function found in the C programming language and is typically used to format and print data to a file descriptor. 
