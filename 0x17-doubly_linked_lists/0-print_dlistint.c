#include "lists.h"

/**
 * print_dlistint - Print a doubly-linked list
 * @h: Pointer to the head of the list
 * Return: lenght of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	for ( ; h; h = h->next)
	{
		printf("%d\n", h->n);
		++len;
	}
	return (len);
}
