# 0x1A. C - Hash Tables
### Description 
A hash table in the C programming language is a data structure that allows for efficient data retrieval based on key-value pairs. It is also known as a hash map or associative array. The key idea behind a hash table is to use a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.

Here are the basic components and concepts associated with hash tables in C:

1. **Hash Function:**
   - A hash function is used to map keys to indexes in the hash table. It takes a key as input and produces a hash code, which is an integer value. The hash code is then used to determine the index where the corresponding value should be stored or looked up.

2. **Array or Buckets:**
   - The hash table typically consists of an array of buckets or slots. Each bucket can store one or more key-value pairs. The number of buckets is determined by the size of the hash table.

3. **Collision Handling:**
   - Collisions occur when two different keys produce the same hash code. There are various techniques to handle collisions, and one common approach is to use linked lists or other data structures to manage multiple key-value pairs within the same bucket.

4. **Key-Value Pairs:**
   - Data is stored in the hash table as key-value pairs. The key is used to determine the index through the hash function, and the associated value is stored or retrieved from that index.

5. **Operations:**
   - Common operations on a hash table include insertion (adding a key-value pair), retrieval (finding the value associated with a key), and deletion (removing a key-value pair). These operations are usually performed in constant or average constant time, making hash tables efficient for many applications.

6. **Load Factor:**
   - The load factor of a hash table is the ratio of the number of stored key-value pairs to the total number of buckets. A higher load factor may lead to more collisions, impacting performance. Resizing the hash table when the load factor exceeds a certain threshold is a common technique to maintain efficiency.

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- Use the Betty style, checked with betty-style.pl and betty-doc.pl
- No global variables allowed
- No more than 5 functions per file
- Use the C standard library
- Prototypes of all functions should be included in the header file `hash_tables.h`
- Push the header file
- Include guards in all header files

## Usage

To use the hash table implementation in your code, follow these steps:

1. Copy the `hash_table.h` and `hash_table.c` files to your project directory.
2. Include the `hash_table.h` header file in your code: `#include "hash_table.h"`
3. Create a new hash table by calling the `create_hash_table()` function and passing in the desired size of the hash table.
   ```c
   struct hash_table *ht = create_hash_table(1024); // Example: create a hash table with size 1024
   ```

4. Insert key-value pairs into the hash table using the `insert()` function:
   ```c
   insert(ht, "key", "value"); // Example: insert a key-value pair into the hash table
   ```

5. Retrieve values from the hash table using the `get()` function:
   ```c
   char *result = get(ht, "key"); // Example: retrieve the value associated with the key "key"
   ```

6. Delete key-value pairs from the hash table using the `delete()` function:
   ```c
   delete(ht, "key"); // Example: delete the key-value pair associated with the key "key"
   ```

## Functions

### `struct hash_table* create_hash_table(int size)`

This function creates a new hash table with the specified size and returns a pointer to the new hash table.

### `void insert(struct hash_table* ht, char* key, char* value)`

This function inserts a new key-value pair into the hash table.

### `char* get(struct hash_table* ht, char* key)`

This function retrieves the value associated with the specified key from the hash table.

### `void delete(struct hash_table* ht, char* key)`
