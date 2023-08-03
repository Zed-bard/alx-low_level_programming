#include "main.h"
/**
 * get_endianness - Checks if a machine is little or big endian
 * Return: success
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;
/*
	 * If the first byte of the integer i (char *c) is 1,
	 * it means it's little endian.
	 * Otherwise, it's big endian.
	 */
	return (*c);
}
