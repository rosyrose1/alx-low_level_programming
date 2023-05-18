#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *array_range - the function creates array of ints
 *
 *@min: int
 *@max: int
 *
 * Return: ptr or NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int size;
	int m = 0;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	while (m < size)
	{
		array[m] = min;
		m++;
		min++;
	}
	return (array);
}
