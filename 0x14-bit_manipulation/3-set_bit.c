#include "main.h"

/**
 * set_bit - sets a bit at a Given index to 1
 * @n: pointer to the number To change
 * @index: index of the bit To set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

