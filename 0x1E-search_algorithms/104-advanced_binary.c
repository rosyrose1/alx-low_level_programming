#include "search_algos.h"

/**
 * rec_search - Design a function that searches for a specific value
 * in an array of integers using the Binary Search algorithm
 * rosy
 * @array: input array
 * @size: array size
 * @value: value to search for
 * Return: the index number
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t c;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (c = 0; c < size; c++)
		printf("%s %d", (c == 0) ? ":" : ",", array[c]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index number
 * @array: input array
 * @size: the array size
 * @value: the value to search in
 * Return: index number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
