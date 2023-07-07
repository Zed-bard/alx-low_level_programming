#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /* count the length of the string */
	{
		if (!isdigit(str[count])) /* check if there are any non-digit characters */
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - prints the sum of command line arguments that are digits
 * @argc: the number of command line arguments
 * @argv: an array of strings containing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /* iterate through all the command line arguments */
	{
		if (check_num(argv[count])) /* check if the argument is a digit */
		{
			str_to_int = atoi(argv[count]); /* convert the argument to an integer */
			sum += str_to_int; /* add the integer to the sum */
		}
		else /* if the argument is not a digit, print an error message and return 1 */
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /* print the sum */

	return (0);
}
