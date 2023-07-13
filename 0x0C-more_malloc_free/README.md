# 0x0C. C - More malloc, free
`malloc` and `free` are functions in the C programming language used for dynamic memory management. 

- `malloc` stands for "memory allocation" and is used to allocate a specified amount of memory during program execution. It takes in the number of bytes of memory to be allocated as its argument and returns a pointer to the allocated memory block. This memory can be used to store data dynamically during program execution.

- `free` is used to deallocate memory that was previously allocated using `malloc`. It takes in a pointer to the memory block that needs to be freed and releases the allocated memory back to the system for reuse.

Together, `malloc` and `free` provide a way to dynamically allocate and deallocate memory in C programs, allowing for efficient memory usage and flexibility in managing memory resources.

## Requirements
### Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS
using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit.
Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
The prototypes of all your functions and the prototype of the function _putchar should be
 included in your header file called main.h
Don’t forget to push your header file

