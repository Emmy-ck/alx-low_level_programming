#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer one
 * @b: integer two
 * Return: Success
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
