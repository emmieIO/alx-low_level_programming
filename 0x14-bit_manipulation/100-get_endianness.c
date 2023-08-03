#include <stdio.h>

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int test = 1;
	unsigned char *byte_pointer = (unsigned char *)&test;

	return ((*byte_pointer) ? 1 : 0);
}
