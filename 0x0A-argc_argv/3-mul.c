#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two given integers
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
