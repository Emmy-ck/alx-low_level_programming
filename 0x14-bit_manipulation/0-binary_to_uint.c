#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to the string containing the binary number
 * Return: the converted unsiged integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_value = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec_value = 2 * dec_value + (b[i] - '0');
	}
	return (dec_value);
}
