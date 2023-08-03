#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number
 *  represented as a string to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted unsigned int, or 0 if
 * @b is NULL or contains non-binary characters.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return (0);

    while (*b)
    {
        if (*b != '0' && *b != '1')
            return (0);

        result = (result << 1) + (*b - '0');
        b++;
    }

    return (result);
}
