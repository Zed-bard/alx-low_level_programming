#include <stdio.h>

/**
 * is_palindrome - Checks if a number is a palindrome.
 * @n: The number to check.
 *
 * Return: 1 if the number is a palindrome, 0 otherwise.
 */
int is_palindrome(int n)
{
    int reverse = 0, remainder, num = n;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    return (reverse == n);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    int largest_palindrome = 0;
    int i, j;

    for (i = 100; i < 1000; i++)
    {
        for (j = i; j < 1000; j++)
        {
            int product = i * j;

            if (is_palindrome(product) && product > largest_palindrome)
            {
                largest_palindrome = product;
            }
        }
    }

    // Save the result in the file
    FILE *file = fopen("102-result", "w");
    if (file != NULL)
    {
        fprintf(file, "%d", largest_palindrome);
        fclose(file);
        printf("Result saved successfully in the file '102-result'.\n");
    }
    else
    {
        printf("Error occurred while saving the result in the file.\n");
    }

    return (0);
}
