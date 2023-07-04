# More Pointers, Arrays, and Strings - Tasks
## strcat:

Prototype: char *_strcat(char *dest, char *src)
Description: Concatenates two strings. Appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte. Returns a pointer to the resulting string dest.
## strncat:

Prototype: char *_strncat(char *dest, char *src, int n)
Description: Concatenates two strings. Similar to the strcat function, but it uses at most n bytes from src. src does not need to be null-terminated if it contains n or more bytes. Returns a pointer to the resulting string dest.
## strncpy:

Prototype: char *_strncpy(char *dest, char *src, int n)
Description: Copies a string. Works exactly like the strncpy function. Copies at most n characters from the string src to dest. If src is less than n characters, the remaining characters in dest are filled with null bytes (\0). Returns a pointer to the resulting string dest.
## strcmp:

Prototype: int _strcmp(char *s1, char *s2)
Description: Compares two strings. Works exactly like the strcmp function. Compares the string s1 to s2 and returns an integer based on their lexicographical order. Returns a negative value if s1 is less than s2, zero if they are equal, or a positive value if s1 is greater than s2.
## reverse_array:

Prototype: void reverse_array(int *a, int n)
Description: Reverses the content of an array of integers. Modifies the array a in-place, reversing the order of its elements. n specifies the number of elements in the array.
## string_toupper:

Prototype: char *string_toupper(char *)
Description: Changes all lowercase letters of a string to uppercase. Modifies the string in-place and returns a pointer to the modified string.
## cap_string:

Prototype: char *cap_string(char *)
Description: Capitalizes all words of a string. Modifies the string in-place by capitalizing the first letter of each word. Words are separated by spaces, tabs, new lines, commas, semicolons, periods, exclamation marks, question marks, double quotes, parentheses, and braces. Returns a pointer to the modified string.
## leet:

Prototype: char *leet(char *)
Description: Encodes a string into "1337" (leet) language. Replaces specific letters in the string with corresponding numbers:
Letter 'a' or 'A' is replaced by '4'.
Letter 'e' or 'E' is replaced by '3'.
Letter 'o' or 'O' is replaced by '0'.
Letter 't' or 'T' is replaced by '7'.
Letter 'l' or 'L' is replaced by '1'.
Modifies the string in-place and returns a pointer to the modified string.
Constraints: Only one if statement is allowed, two loops are allowed, and ternary operations are not allowed.
## rot13:

Prototype: char *rot13(char *)
Description: Encodes a string using the ROT13 cipher. Replaces each letter in the string with the letter 13 positions later in the alphabet (wrapping around if necessary).
Modifies the string in-place and returns a pointer to the modified string.
Constraints: Only one if statement is allowed, two loops are allowed, and ternary operations are not allowed.
## print_number:

Prototype: void print_number(int n)
Description: Prints an integer. Uses the _putchar function to print the digits of the integer n on the console.
Constraints: The use of long, arrays, pointers, and hard-coded special values is not allowed.
## #Code Addition:

Add one line of code to print a[2] = 98, followed by a new line, to the given code.
Constraints: The variable a cannot be used, and the variable p cannot be modified. Only one statement can be written, and commas (,) are not allowed.
### infinite_add:

Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r)
Description: Adds two numbers represented as strings. The n1 and n2 strings contain the numbers to be added, and the r string is used as a buffer to store the result. The size_r parameter specifies the size of the buffer. The function returns a pointer to the result.
Constraints: Both n1 and n2 are positive numbers (or 0), and only digits are present in the strings. If the result cannot fit in the buffer r, the function returns 0.
### print_buffer:

Prototype: void print_buffer(char *b, int size)
Description: Prints the content of a buffer. Prints the content of size bytes of the buffer pointed by b. The output shows 10 bytes per line, starting with the position of the first byte of the line in hexadecimal. Each line shows the hexadecimal content of the buffer (2 bytes at a time, separated by a space), followed by the ASCII representation of the buffer. If a byte is not a printable character, a dot (.) is printed instead. The function formats the output exactly as specified.
Constraints: The standard library is allowed to be used. If size is 0 or less, the output is a new line only.
