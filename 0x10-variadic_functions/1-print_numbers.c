#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * Use NULL to omit the separator.
 * @n: The number of integers passed to the function.
 * @...: A variable number of integers to be printed.
 *
 * Description:
 * This function takes a variable number of integers and
 * prints them followed by a new line.
 * The numbers are separated by the specified string `separator`.
 * If `separator` is NULL, it will not be printed between the numbers.
 * The total number of integers to be printed is
 * determined by the parameter `n`.
 *
 * Example usage:
 * print_numbers(", ", 4, 1, 2, 3, 4);
 * Output: 1, 2, 3, 4
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
