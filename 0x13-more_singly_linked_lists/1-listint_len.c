#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Entry point
 * Description: Returns number of elements in linked listint_t list
 * @h: Pointer to the head of a list
 * Return: Length of a list
 */

size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
