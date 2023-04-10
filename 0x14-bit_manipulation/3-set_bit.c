#include "main.h"

/**
 * set_bit - sets a bit to 1 at a specific index
 * @n: pointer to the number to be modified
 * @index: index of the bit to be set to 1
 *
 * Return: 1 (Success), -1 (Failed)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
