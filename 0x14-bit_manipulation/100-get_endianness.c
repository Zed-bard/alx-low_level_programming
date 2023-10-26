#include "main.h"

/**
 * get_endianness - Checks if a Machine is little or big endian
 * Return: 0 for big, 1 For Little
 */
int get_endianness(void)
{
	unsigned int f = 1;
	char *k = (char *) &f;

	return (*k);
}
