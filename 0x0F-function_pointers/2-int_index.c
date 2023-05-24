#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - find an integer
 * @array: array to be inputed
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: the index of array if success and -1 if failed
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int r;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (r = 0; r < size; r++)
	{
		if (cmp(array[r]))
			return (r);
	}
	return (-1);
}
