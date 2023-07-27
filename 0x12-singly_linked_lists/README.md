# Singly Linked Lists

## Description

This project contains C functions to work with singly linked lists. The header file lists.h provides the necessary definitions and prototypes for all types and functions used in the project.

### Tests

The "Tests" directory is used for testing purposes.

### Header File

- `lists.h`: Header file containing definitions and prototypes for all types and functions written for the project.

#### Type/File Definitions and Prototypes

| Type/File  | Definition/Prototype                 |
|------------|-------------------------------------|
| `struct list_s` | - `char *str`<br>- `unsigned int len`<br>- `struct list_s *next` |
| `typedef list_t` | `struct list_s`                    |
| `0-print_list.c` | `size_t print_list(const list_t *h);` |
| `1-list_len.c` | `size_t list_len(const list_t *h);` |
| `2-add_node.c` | `list_t *add_node(list_t **head, const char *str);` |
| `3-add_node_end.c` | `list_t *add_node_end(list_t **head, const char *str);` |
| `4-free_list.c` | `void free_list(list_t *head);` |

### Tasks

1. **Print list**
   - File: `0-print_list.c`
   - Description: C function that prints all the elements of a `list_t` list. If `str` is `NULL`, the function prints `[0] (nil)`.

2. **List length**
   - File: `1-list_len.c`
   - Description: C function that returns the number of elements in a linked `list_t` list.

3. **Add node**
   - File: `2-add_node.c`
   - Description: C function that adds a new node at the beginning of a `list_t` list. If the function fails, it returns `NULL`. Otherwise, it returns the address of the new element.

4. **Add node at the end**
   - File: `3-add_node_end.c`
   - Description: C function that adds a new node at the end of a linked `list_t` list. If the function fails, it returns `NULL`. Otherwise, it returns the address of the new element.

5. **Free list**
   - File: `4-free_list.c`
   - Description: C function that frees a `list_t` list.

6. **The Hare and the Tortoise**
   - File: `100-first.c`
   - Description: C function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the `main` function is executed.

7. **Real programmers can write assembly code in any language**
   - File: `101-hello_holberton.asm`
   - Description: 64-bit assembly program that prints "Hello, Holberton" followed by a new line using only the `printf` function without interrupts.

