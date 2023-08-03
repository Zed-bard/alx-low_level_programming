#include "main.h"

/**
 * clear_bit - sets the Value of a given bit to 0
 * @n: pointer to the number to Change
 * @index: index of the bit to Clear
 *
 * Return: 1 for success, -1otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is within the valid range */
	if (index > 63)
		return (-1);
/* Use bitwise negation and AND to clear the bit at the given index */

	*n = (~(1UL << index) & *n);
	return (1);
}

