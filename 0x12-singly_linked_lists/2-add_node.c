#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Entry point
 * Description: add on new node at the beginning of the list
 * @head: Pointer to the head of the list_t list
 * @str: String added to the list_t list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	/* copy the string */
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	/* tally the quantity of characters within square brackets */
	length = 0;
	while (str[length])
		length++;
	/* Set next pointer of new node to current head */
	new->next = *head;
	new->len = length;
	/* Set head to point to the new node */
	*head = new;

	return (new);
}
