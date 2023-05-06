#include "main.h"

/**
 * flip_bits - function that gets one bit from another
 * @n: pointer to the first number
 * @m: pointer to the second number
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int bits = n ^ m;

	while (bits != 0)
	{
		count += bits & 1;
		bits >>= 1;
	}
	return (count);
}
