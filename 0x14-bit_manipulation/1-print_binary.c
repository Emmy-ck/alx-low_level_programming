#include "main.h"

/**
 * print_binary - prints binary equivalent of decimal number
 * @n: decimal umber to print to binary
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
		unsigned long int current = n;
	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		if (current & (1UL << i))
		{
			count = i;
			break;
		}
	}
	for (i = count; i >= 0; i--)
	{
		if (current & (1UL << i))
			_putchar('1');
		else
			_putchar('0');
	}
}
