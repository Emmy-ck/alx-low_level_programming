#include "main.h"

/**
 * print_binary - takes decimal number as input then prints binary equivalent
 * @n: number to input to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;
	char buffer[64];

	for (i = 0; i < 64; i++)
	{
		current = n >> (63 - i);
		buffer[i] = (current & 1) ? '1' : '0';

		if (buffer[i] == '1')
			count++;
	}
	if (count == 0)
		_putchar('0');
	else
	{
		for (i = 0; i < 64; i++)
		{
			if (buffer[i] == '1')
				break;
		}
		for (; i < 64; i++)
			_putchar(buffer[i]);
	}
}
