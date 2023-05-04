#include "main.h"

/**
 * get_bit - gets the vale of a bit at a given index
 * @n: bit
 * @index: index to get the bit
 *
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
