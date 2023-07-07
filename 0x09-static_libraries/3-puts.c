#include <stdio.h>

/**
 * _puts - Prints a string to stdout
 * @str: The string to be printed
 */
void _puts(char *str)
{
	puts(str);
}

/**
 * other_main - Entry point
 *
 * Return: Always 0 (Success)
 */
int other_main(void)
{
	_puts("\"Programming is like building a multilingual puzzle\"");
	return (0);
}
