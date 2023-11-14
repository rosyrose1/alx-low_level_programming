#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: input array
 * @size: size of array
 * @value:  the value to search in
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t k;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (k = 0; k < size; k++)
		printf("%s %d", (k == 0) ? ":" : ",", array[k]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - Searches for value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
