#include "main.h"

/**
 * flip_bits - calculates number of bits that need to be changed
 * @n: parameter one
 * @m: parammeter two
 *
 * Return: Integer value indicationg the number of bits that need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int exclusive = n ^ m;

	while (exclusive > 0)
	{
		if (exclusive & 1)
			count++;
		exclusive >>= 1;
	}
	return (count);
}
