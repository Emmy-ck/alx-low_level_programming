#include <stdio.h>
#include "lists.h"

/**
 * listint_len - funtion to print the number of elements in a linked list
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	for (; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
		count++;
	}

	return (count);
}
