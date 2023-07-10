# C - malloc, free

## Definitions of Terms
`malloc` is a function in C programming language used to dynamically allocate memory during runtime. It stands for "memory allocation". 

The `malloc` function is declared in the `stdlib.h` header file and has the following syntax:

```c
void* malloc(size_t size);
```

Here, `size` is the number of bytes of memory to be allocated. The `malloc` function returns a pointer of type `void*` to the allocated memory block. If the memory allocation is successful, the pointer points to the starting address of the allocated memory. However, if the allocation fails, `malloc` returns a `NULL` pointer.

It is important to note that `malloc` does not initialize the allocated memory. It simply reserves a block of memory of the specified size. Therefore, it is necessary to explicitly initialize the memory before using it.

The allocated memory should be released when it is no longer needed to avoid memory leaks. This can be done using the `free` function, which is also declared in the `stdlib.h` header file.

### List of Projects and Tasks in this session 

| Task | Description |
|------|-------------|
| Task 0: Float like a butterfly, sting like a bee | This task requires writing a function that creates an array of characters and initializes it with a specific character. The function `create_array` takes in two parameters - `size` (unsigned integer) and `c` (character). It returns a pointer to the array or NULL if it fails.|
| Task 1: The woman who has no imagination has no wings | This task involves writing a function that returns a pointer to a newly allocated space in memory, which contains a copy of a given string. The function `_strdup` takes in a string `str` as a parameter and returns a pointer to the duplicated string. Memory for the new string is obtained with `malloc` and can be freed with `free`. If `str` is NULL, the function returns NULL. It returns NULL if insufficient memory was available.|
| Task 2: He who is not courageous enough to take risks will accomplish nothing in life | This task requires writing a function that concatenates two strings. The function `str_concat` takes in two strings `s1` and `s2` as parameters. The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and is null terminated. If NULL is passed, it is treated as an empty string. The function returns NULL on failure.|
| Task 3: If you even dream of beating me you'd better wake up and apologize | This task involves writing a function that returns a pointer to a 2-dimensional array of integers. The function `alloc_grid` takes in two parameters `width` and `height`. Each element of the grid should be initialized to 0. The function returns NULL on failure. If `width` or `height` is 0 or negative, it returns NULL.|
| Task 4: It's not bragging if you can back it up | This task requires writing a function that frees a 2-dimensional grid previously created by the `alloc_grid` function. The function `free_grid` takes in two parameters - `grid` (pointer to a 2-dimensional grid) and `height` (integer).|
| Task 5: It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe | This task involves writing a function that concatenates all the arguments of a program. The function `argstostr` takes in two parameters `ac` (integer) and `av` (array of strings). It returns NULL if `ac` is 0 or `av` is NULL. It returns a pointer to a new string, or NULL if it fails. Each argument is followed by a newline character `\n` in the new string.|
| Task 6: I will show you how great I am | This task requires writing a function that splits a string into words. The function `strtow` takes in a string `str` as a parameter. It returns a pointer to an array of strings (words). Each element of this array contains a single word, null-terminated. The last element of the returned array is NULL. Words are separated by spaces. The function returns NULL if `str` is NULL or an empty string. If the function fails, it returns NULL.|

