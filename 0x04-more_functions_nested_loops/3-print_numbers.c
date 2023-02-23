#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Print the numbers 0 to 9
 * @x: the integers
 * Return: The results
 */

void print_numbers(void)
{
	int x;

	for (x >= 0, x <= 9; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
}
