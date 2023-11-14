#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  * of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the index where the value is located.
  * Description: Prints the [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t r;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (r = left; r < right; r++)
			printf("%d, ", array[r]);
		printf("%d\n", array[r]);

		r = left + (right - left) / 2;
		if (array[r] == value)
			return (r);
		if (array[r] > value)
			right = r - 1;
		else
			left = r + 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 * using Exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t r = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (r = 1; r < size && array[r] <= value; r = r * 2)
			printf("Value checked array[%ld] = [%d]\n", r, array[r]);
	}

	right = r < size ? r : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", r / 2, right);
	return (_binary_search(array, r / 2, right, value));
}
