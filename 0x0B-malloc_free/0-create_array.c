#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * creating_array - function that creates an array of chars
 * @c: the character
 * @size: the size of memory to print
 * Return: NULL if 0 or fail else return ptr
 */
char *creating_array(unsigned int size, char c)
{
	char *s;
	unsigned int r;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (r = 0; r < size; r++)
	{
		s[r] = c;
	}
	return (s);
}

