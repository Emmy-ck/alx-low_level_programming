#include "main.h"

/**
 * get_bit - returns the value of a bit at a specified index in decimal number
 * @n: decimal number to search
 * @index: index of the bit
 *
 * Return: Value of the bit (0 or 1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return -1;

	return (n & (1ul << index)) != 0;
}
