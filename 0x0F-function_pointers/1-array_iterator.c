#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints each element on a new line
 * @array :  the array entered
 * @size: number of elements to be printed
 * @action: the pointer to print
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int r;

	if (array == NULL || action == NULL)
		return;

	for (r = 0; r < size; r++)
		action(array[r]);
}
