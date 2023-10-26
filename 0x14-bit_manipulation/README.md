# 0x14. C - Bit Manipulation

This is a project for the `Alx-Software Engineering` School curriculum, focusing on bit manipulation in the C programming language.

## Table of Contents
- [Project Description](#project-description)
- [Requirements](#requirements)
- [File Descriptions](#file-descriptions)
- [Usage](#usage)
- [Authors](#authors)
- [License](#license)

## Project Description

The "0x14. C - Bit Manipulation" project is part of the `ALX-SE` School curriculum and involves working with bitwise operations and bit manipulation in the C programming language. The project aims to teach students how to work with binary numbers, use bitwise operators, and manipulate individual bits within integers.

## Requirements

### General
- **Allowed Editors:** vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden
- You are allowed to use `_putchar`
- You don't have to push `_putchar.c`, we will use our file. If you do, it won't be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do, we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don't forget to push your header file
- All your header files should be include guarded

## File Descriptions

- [0-binary_to_uint.c](./0-binary_to_uint.c): A C function that converts a binary number to an unsigned integer.
- [1-print_binary.c](./1-print_binary.c): A C function that prints the binary representation of a number.
- [2-get_bit.c](./2-get_bit.c): A C function that returns the value of a bit at a given index.
- [3-set_bit.c](./3-set_bit.c): A C function that sets the value of a bit at a given index to 1.
- [4-clear_bit.c](./4-clear_bit.c): A C function that sets the value of a bit at a given index to 0.
- [5-flip_bits.c](./5-flip_bits.c): A C function that returns the number of bits you would need to flip to get from one number to another.

## Usage

You can compile the source files with `gcc` and use the provided `main.c` files to test the functions. For example, to compile `0-binary_to_uint.c`, you can use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o binary_to_uint 0-binary_to_uint.c main.c
```

To run the compiled program:

```bash
./binary_to_uint
```

Remember to replace `binary_to_uint` with the appropriate filename for the function you want to test.
## AUTHOUR
participant of alx student `Zerihun shiferwa`

## License

This project is licensed under the terms of the [MIT License](https://opensource.org/licenses/MIT).
