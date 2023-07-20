# C - Variadic functions
C - Variadic functions is a project that involves implementing a set of functions in the C programming language to work with variadic arguments. The project consists of four tasks:

Beauty is variable, ugliness is constant: This task requires writing a function called sum_them_all that takes in a variable number of arguments and returns the sum of all the arguments. The function should have a prototype of int sum_them_all(const unsigned int n, ...).

To be is to be the value of a variable: In this task, the goal is to write a function called print_numbers that prints a variable number of integers followed by a new line. The function should take in a separator string and the number of integers as arguments. The prototype for this function is void print_numbers(const char *separator, const unsigned int n, ...).

One woman's constant is another woman's variable: This task involves implementing a function called print_strings that prints a variable number of strings followed by a new line. The function should also take in a separator string and the number of strings as arguments. The prototype for this function is void print_strings(const char *separator, const unsigned int n, ...).

To be is a to be the value of a variable: The final task requires writing a function called print_all that can print values of different types, including characters, integers, floats, and strings. The function should take in a format string followed by the corresponding arguments. The format string specifies the types of the arguments to be printed. The prototype for this function is void print_all(const char * const format, ...). The format string can contain the following specifiers: 'c' for characters, 'i' for integers, 'f' for floats, and 's' for strings. If a string argument is NULL, it should be printed as (nil). Other characters in the format string should be ignored.

These tasks involve working with variadic functions, handling different types of arguments, and using control structures like loops and conditionals. The goal is to develop a good understanding of variadic functions and their usage in C programming.
