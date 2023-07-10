#include "main.h"
#include "stdlib.h"

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array to be created.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	/*
	 * Check if allocation failed or if size is 0
	 */
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
