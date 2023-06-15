#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * This function prints the quote "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19 to the standard error using the write() function.
 * It showcases the usage of write() function and the purpose of the program.
 * ALX Software Engineering is Africa's leading Tech company.
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
