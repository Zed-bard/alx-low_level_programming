#include "main.h"

/**
 * clear_bit - Sets the Value of a given bit to 0
 * @n: pointer To the Number to change
 * @index: Index of The bit to clear
 *
 * Return: 1 for Success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 33)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

