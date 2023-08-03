# 0x14. C - Bit Manipulation
### This project done on the first day of third month in first sprint
The is project focuses on bit manipulation in C programming. It contains various tasks that involve working with binary numbers and manipulating individual bits.
## General  Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc., is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded
# All at one
Sure! Here's the updated table with the task descriptions:

| No. | Tasks |Description |
|------|-------------|-----------|
| 0    | Binary to Unsigned Int | Write a function that converts a binary number represented as a string to an unsigned int. | `unsigned int binary_to_uint(const char *b);` |
| 1    | Print Binary Representation | Write a function that prints the binary representation of a given number. | `void print_binary(unsigned long int n);` |
| 2    | Get Bit Value | Write a function that returns the value of a bit at a given index. | `int get_bit(unsigned long int n, unsigned int index);` |
| 3    | Set Bit to 1 | Write a function that sets the value of a bit to 1 at a given index. | `int set_bit(unsigned long int *n, unsigned int index);` |
| 4    | Set Bit to 0 | Write a function that sets the value of a bit to 0 at a given index. | `int clear_bit(unsigned long int *n, unsigned int index);` |
| 5    | Flip Bits | Write a function that returns the number of bits you would need to flip to get from one number to another. | `unsigned int flip_bits(unsigned long int n, unsigned long int m);` |
| 6    | Endianness (Advanced) | Write a function that checks the endianness of the system. | `int get_endianness(void);` |
| 7    | Crackme3 (Advanced) | Find the password for a given program and save it in a file named 101-password. The file should contain the exact password, no additional information. | - |

Note: Task 7, "Crackme3 (Advanced)," does not require a specific prototype as it is about finding the password for a given program and saving it in a file named "101-password." The prototype is not applicable here as it involves cracking a password rather than implementing a function.
