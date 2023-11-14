#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The first index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int index, r, s, prev;

	if (array == NULL || size == 0)
		return (-1);

	r = (int)sqrt((double)size);
	s = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		s++;
		prev = index;
		index = s * r;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
