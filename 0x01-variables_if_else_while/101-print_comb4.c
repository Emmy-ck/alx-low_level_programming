#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int i;
	int x;

	for (x = 0; x != 8; x++)
	{
		for (n = x + 1; n != 9; n++)
		{
			i = n + 1;
			do {
				putchar('0' + x);
				putchar('0' + n);
				putchar('0' + i);
				if (x != 7)
				{
					putchar(',');
					putchar(32);
				}
				i++;
			} while (i != 10);
		}
	}
	putchar('\n');
	return (0);
}
