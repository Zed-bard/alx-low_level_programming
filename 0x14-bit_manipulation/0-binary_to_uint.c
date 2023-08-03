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
	int y;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[y] - '0');
	}

	return (dec_val);
}

