#include "lists.h"

/**
 * add_nodeint_end - inserts a new node at the end of a linked list
 * @head: pointer to the first node in the list
 * @n: data to be inserted on the new node
 *
 * Return: poiter to the new node created, or NULL is it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		listint_t *temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
