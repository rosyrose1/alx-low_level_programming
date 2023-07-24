#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of doubly-linked list
 * @head: pointer to a pointer to the beginning of a doubly-linked list
 * @n: data to add
 *
 * Return: If memory allocation fails or head is NULL, return NULL.
 * Otherwise, return a pointer to the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head)
	{
		new = malloc(sizeof(*new));
		if (new)
		{
			new->n = n;
			new->prev = NULL;
			new->next = *head;

			if (*head)
				(*head)->prev = new;

			*head = new;
		}
	}
	return (new);
}
