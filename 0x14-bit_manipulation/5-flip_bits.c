#include "main.h"

/**
 * flip_bits - counts The number of bits to change
 * to get from one Number to another
 * @a: first Numbr
 * @b: second Number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	int y, count = 0;
	unsigned long int current;
	unsigned long int exclusive = a ^ b;

	for (y = 63; y >= 0; y--)
	{
		current = exclusive >> y;
		if (current & 1)
			count++;
	}

	return (count);
}

