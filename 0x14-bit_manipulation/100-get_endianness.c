#include "main.h"

/**
 * get_endianness - determines the endianess of a machine
 * Return: 1 if little endian, 0 if false
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
