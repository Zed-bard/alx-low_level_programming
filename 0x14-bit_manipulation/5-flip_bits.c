#include "main.h"
/**
 * flip_bits - counts the Number of bits to change
 * to get From one number to another
 * @n: first Number
 * @m: Second number
 *
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		/*Right Shift */
	current = exclusive >> i;
	if (current & 1)
		count++;
	}

return (count);
}

