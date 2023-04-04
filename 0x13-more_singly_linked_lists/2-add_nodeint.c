#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node
 * @head: pointer to the first node of the list
 * @n: data to enter in the new node at the beinning of the linked list
 * Return: pointer to the new node, NULL if false
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = calloc(1, sizeof(listint_t));

	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
