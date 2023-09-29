#include "main.h"

/**
 * get_endianness - Checks if a machine is little or big endian
 * Return: 0 for big, 1 For little
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *y = (char *) &z;

	return (*y);
}

