# C - Structures, typedef
In C programming, structures and typedef are used to define custom data types.

A structure is a user-defined data type that allows you to combine different types of variables under a single name. It is used to group related data together.

## typedef
Typedef is used to create a new name for an existing data type. It allows you to define an alias for a data type, making the code more readable and easier to maintain.

### List of Tasks with their definition
# README.md

## C - Structures, typedef

### TASKS

| Task | Description |
| --- | --- |
| 0. Poppy | Define a new type struct dog with the following elements:<br> - name, type = char *<br> - age, type = float<br> - owner, type = char * |
| 1. A dog is the only thing on earth that loves you more than you love yourself | Write a function that initializes a variable of type struct dog<br>Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);` |
| 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad | Write a function that prints a struct dog<br>Prototype: `void print_dog(struct dog *d);`<br>Format: see example below<br>You are allowed to use the standard library<br>If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))<br>If d is NULL print nothing. |
| 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read | Define a new type dog_t as a new name for the type struct dog. |
| 4. A door is what a dog is perpetually on the wrong side of | Write a function that creates a new dog.<br>Prototype: `dog_t *new_dog(char *name, float age, char *owner);`<br>You have to store a copy of name and owner<br>Return NULL if the function fails |
| 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg | Write a function that frees dogs.<br>Prototype: `void free_dog(dog_t *d);` |
